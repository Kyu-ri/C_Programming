#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

float inputScore();
float calVolume(float r);

int main()
{
	float r;
	float v;

	r = inputScore();
	v = calVolume(r);

	printf("구의 부피는 %f입니다.\n", v);

	return 0;

}

float inputScore()
{
	float x;

	printf("구의 반지름의 값을 입력하시오 : ");
	scanf_s("%f", &x);

	return x;
}

float calVolume(float r)
{
	return (4.0f / 3.0f) * M_PI * r * r * r;
}