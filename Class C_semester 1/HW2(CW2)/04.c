#include <stdio.h>
int main(void)
{
	float r;
	const float pi=3.14;
	printf("r="); scanf("%f", &r);
	float v=r*r*r*pi*4/3;
	printf("�y����n=%.3f", v);
	return 0;
}
