#include <stdio.h>
#define HUNDRED 100
#define TEN 10
#define ZERO '0'

int getNumber(char First, char Second, char Third);

int main()
{
	char cFirst, cSecond, cThird;
	int nResult;
	printf("���ڸ� ������ �Է��Ͻÿ� : ");
	scanf_s("%c", &cFirst, sizeof(char));			//���ڿ��� ����Ͽ� ������ �Է¹ޱ�(cFirst, cSecond, cThird�� �������� �Է¹ޱ�)
	scanf_s("%c", &cSecond, sizeof(char));
	scanf_s("%c", &cThird, sizeof(char));
	nResult = getNumber(cFirst, cSecond, cThird);	//�Է¹��� ���ڿ��� ASCII�� �̿��Ͽ� INT������ ��ȯ
	printf("%d", nResult);							//nResult�� ���

	return 0;


}

int getNumber(char First, char Second, char Third)
{

	return ((int)First-48)*HUNDRED + ((int)Second-48)*TEN + (int)Third-48;

}