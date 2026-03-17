#include <stdio.h>
#include <string.h>

// typedef struct{
//     int numi;
//     char nome[20];
//     int idade;
// } Empregado;

// int main(){
//     Empregado e;
//     // Empregado.e[100];
//     e.idade = 21;

//     printf("A idade é %d.\n", e.idade);
// }
// int main(){
//     int i = 3;
//     int *p;                     // p é um ponteiro;
//     p = &i;                     // em p está o endereço de i;
//     printf("Output: %d\n", *p); // print do valor guardado em i;
//     printf("Output: %p\n", p);  // print do endereço de i;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int i, j, *a, *b;;
//     i = 2;
//     j = 4;
//     a = &i;
//     b = &j;
//     swap(a, b);
//     printf("%d %d\n", i, j);
// }
// int main(){
//     char s[3] = {'A','B','C'};
//     printf("%s\n", s);
// }

void transformar(){
	int i, size;

	printf("Introduza o tamanho do vetor: ");
	scanf("%d", &size);
	
	int vet[size];
	printf("Introduza os elementos do vetor, um de cada vez: ");
	for (i = 0; i < size; i++){
		scanf("%d", &vet[i]);
	}
	printf("O vetor alterado é: ");
	for (i = 0; i < size; i++){
		if(vet[i] % 2 == 1){
			vet[i] *= 2;
		}
		printf("%d ", vet[i]);
	}
	printf("\n");
}

int main(){
    transformar();
}