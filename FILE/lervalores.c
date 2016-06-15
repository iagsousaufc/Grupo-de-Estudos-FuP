#include <stdio.h>

// variavel constante (que nao pode ser alterada)
// para definir o tamanho maximo da matriz, mude
// como necessitar para nao ter que mudar dentro do codigo
const int SIZE = 10;

// carregar numeros inteiros de um arquivo de texto para uma matriz
int main (){
	FILE * f = fopen("valores.txt", "r+");

	int mat[SIZE][SIZE];
	int i, j;

	// funcao para ler inteiros de um arquivo para uma matriz
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			fscanf(f, "%d", &mat[i][j]);
		}
	}

	// imprimir na tela, se for 0 imprime um espaco e se for 1 imprime 'o'
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			if(mat[i][j]){
				printf("o ");
			} else{
				printf("  ");
			}
		}
		printf("\n");
	}

	fclose(f);

	// feche o arquivo e abra-o novamente utilizando o metodo "w"
	// para apenas escrita, utilizando apenas o "w" ele irá gerar
	//um arquivo em branco e sobrescrever o arquivo antigo, faca
	// isso apos guardar todas as informacoes em uma matriz.
	
	FILE * fp = fopen("valores.txt", "w");

	// modificando elementos da matriz na ultima linha para 1
	for(i = 0; i < SIZE; i++){
		mat[SIZE-1][i] = 1;
	}


	// escrevendo os valores no arquivo original
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			fprintf(f, "%d ", mat[i][j]);
		}
		fputs("\n", f);
	}

	fclose(fp);



	return 0;
}
