#include <stdio.h>

int main(){

	int i, j, n;

	do{

		printf("마름모의 크기를 입력하세요 : ");
		scanf_s("%d", &n);

	} while (n % 2 == 0);


	for (i = 0; i < (n + 1) / 2; i++){

		for (j = i; j < (n - 1) / 2; j++){

			printf(" ");
		}

		for (j = 0; j < i * 2 + 1; j++){

			printf("*");
		}
		printf("\n");
	}

	for (i = (n - 1) / 2; i>0; i--){

		for (j = (n-1)/2; j>i-1; j--){

			printf(" ");
		}

		for (j = (n - 1) / 2; j<(n-1)/2 + i*2-1; j++){

			printf("*");
		}

		printf("\n");

	}

	return 0;
}