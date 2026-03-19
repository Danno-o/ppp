#include <stdio.h>
#include <string.h>

typedef struct{
    int numi;
    char nome[20];
    int idade;
} Empregado;

int main(){
    Empregado e;
    // Empregado.e[100];
    e.idade = 21;

    printf("A idade é %d.\n", e.idade);
}
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

// void transformar(){
// 	int i, size;

// 	printf("Introduza o tamanho do vetor: ");
// 	scanf("%d", &size);
	
// 	int vet[size];
// 	printf("Introduza os elementos do vetor, um de cada vez: ");
// 	for (i = 0; i < size; i++){
// 		scanf("%d", &vet[i]);
// 	}
// 	printf("O vetor alterado é: ");
// 	for (i = 0; i < size; i++){
// 		if(vet[i] % 2 == 1){
// 			vet[i] *= 2;
// 		}
// 		printf("%d ", vet[i]);
// 	}
// 	printf("\n");
// }

// int main(){
//     transformar();
// }

int transformar(char mat[][20], int nlinhas, char resultado[][100]){
	char acum[200] = "";
	char temp[20];

	int b = 0;
	for (int i = 0; i < nlinhas; i++){
		int a = 0; 
		for (int j = 0; j < 20; j++){
			if (mat[i][j] != '\0'){
				temp[a++] = mat[i][j];
			}
		}
		temp[a] = '\0';

		int comp = strlen(temp);
		if (comp < 5){
			strcat(acum, temp);
		}
		else{
			strcpy(resultado[b++], temp);
		}
	}
	if (strlen(acum) > 0){
		strcpy(resultado[b++], acum);
	}
	return b;
}

int main(){
	char mat[][20] = 	{{'A', 'b', 'c', '\0', '\0'},
						 {'n', 'u', 'v', 'e', 'm'},
						 {'x', 'y', '\0', '\0', '\0'},
						 {'t', 'e', 'r', 'r', 'a'}};
	char res[10][100];
	int total = transformar(mat, 4, res);

    printf("Total de strings: %d\n", total);
    for(int i = 0; i < total; i++) {
        printf("resultado[%d] = %s\n", i, res[i]);
    }
    return 0;
}