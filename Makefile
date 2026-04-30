CC      := gcc
CFLAGS  := -Wall -Wextra -g -Iincludes -MMD -MP

# --- Configuração da Biblioteca Estática utils ---
UTILLIB := includes/libutils.a
LIBOBJS := includes/utils.o

# Compila o executável diretamente do .c e liga à biblioteca utils
%: %.c $(UTILLIB)
	$(CC) $(CFLAGS) $< -o $@ -Lincludes -lutils

# Compila qualquer .c para .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Constrói a biblioteca estática utils
$(UTILLIB): $(LIBOBJS)
	ar rcs $@ $^

# Inclui as dependências automáticas geradas pelo compilador
-include $(wildcard *.d) $(wildcard chap_*/*.d) $(wildcard includes/*.d)

# Construir e correr um programa: make run prog=Folha3/10_1_1
.PHONY: run
run: $(prog) 
	./$(prog) 

# --- O Clean Simples e Seguro ---
.PHONY: clean
clean:
    # 1. Apaga os .o e .d na pasta principal (não afeta a pasta includes)
	$(RM) *.o *.d 
    # 2. Apaga os .o e .d dentro de qualquer pasta que comece por "Folha"
	$(RM) chap_*/*.o chap_*/*.d
