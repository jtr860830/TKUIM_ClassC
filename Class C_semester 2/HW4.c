//��ޤ@C 404632407 �¬�Y
#include<stdio.h>
int main(void) {
	int d=1;
	printf("2016�~5��:\n");
	printf("%4s%4s%4s%4s%4s%4s%4s\n", "sun", "mon", "tue", "wed", "thu", "fri", "sat");
	while (d<32) {
		printf("%4d", d);
		if(d%7==0) 
			printf("\n");
		d++;
	}
	return 0;
}
