#include<stdio.h>
int main(void) {
	int score, sum=0;
	float n;
	printf("��Jn��P�Ǫ�����:"); 
	scanf("%f", &n);
	for (int i=1;i<=n;i++) {
		printf("[%d] ", i);
		scanf("%d", &score);
		sum+=score;
	}
	printf("Avg=%.1f", sum/n);
	return 0;
} 
