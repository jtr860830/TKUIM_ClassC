#include <stdio.h>
int main(void)
{
	float h;
	printf("����="); scanf("%f", &h);
	int a=h/2.54, b=a/12, c=a%12;
	printf("����=%d��%d�T", b, c);
	return 0;
 } 
