#include<stdio.h>
int sq(int x); //�L�X����� 

int main(void) {
	for (int i=1; i<=10; i++) {
		printf("%d ", sq(i));
	}
	return 0;
}

int sq(int x) {
	return x*x;
}
