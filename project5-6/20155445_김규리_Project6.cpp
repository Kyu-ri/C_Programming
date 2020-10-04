#include <stdio.h>
#define HUNDRED 100
#define TEN 10
#define ZERO '0'

int getNumber(char First, char Second, char Third);

int main()
{
	char cFirst, cSecond, cThird;
	int nResult;
	printf("세자리 정수를 입력하시오 : ");
	scanf_s("%c", &cFirst, sizeof(char));			//문자열을 사용하여 데이터 입력받기(cFirst, cSecond, cThird에 차례차례 입력받기)
	scanf_s("%c", &cSecond, sizeof(char));
	scanf_s("%c", &cThird, sizeof(char));
	nResult = getNumber(cFirst, cSecond, cThird);	//입력받은 문자열을 ASCII를 이용하여 INT형으로 변환
	printf("%d", nResult);							//nResult를 출력

	return 0;


}

int getNumber(char First, char Second, char Third)
{

	return ((int)First-48)*HUNDRED + ((int)Second-48)*TEN + (int)Third-48;

}