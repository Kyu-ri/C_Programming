#include <stdio.h>

void Convert(int inputValue);

int main(){
	
	int ten;

	printf("10���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &ten);

	Convert(ten);
	printf("\n");

	return 0;
}
void Convert(int inputValue){
	if (inputValue == 1 || inputValue == 0){
		printf("%d", inputValue);
	}
	else {
		Convert(inputValue / 2);
		printf("%d", inputValue % 2);
	}
}

