#include <stdio.h>

void printMatrix(int N, int matrix[][N]);

int main(){

int N,yon;

printf("Kare matrisinin bir kenarindaki eleman sayisini giriniz: ");
scanf("%d",&N);
int matris1[N][N],matris2[N][N];
printf("90 derece dondurmek istediginiz matrisin elemanlaririniz: \n");
for(int i = 0; i < N; i++){
	for(int j = 0; j < N; j++){
		printf("Sutun %d Satir %d = ",i+1,j+1);
		scanf("%d",&matris1[i][j]);
	}
	printf("\n");
}

printf("Saga cevirmek icin 0, sola cevirmek icin 1'i tuslayiniz.");
scanf("%d",&yon);

if(yon == 1){

for(int i = 0; i < N; i++)
	for(int j = 0; j < N; j++)
		matris2[N-1-i][j] = matris1[i][j];
}

else if(yon == 0){
for(int i = 0; i < N; i++)
	for(int j = 0; j < N; j++)
		matris2[j][N-1-i] = matris1[i][j];}
printf("Matrix1: \n");
printMatrix(N, matris1);
printf("Matrix2: \n");
printMatrix(N, matris2);

return 0;
}

void printMatrix(int N, int matrix[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
