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

	printf("���� ���Ǵ� %f�Դϴ�.\n", v);

	return 0;

}

float inputScore()
{
	float x;

	printf("���� �������� ���� �Է��Ͻÿ� : ");
	scanf_s("%f", &x);

	return x;
}

float calVolume(float r)
{
	return (4.0f / 3.0f) * M_PI * r * r * r;
}