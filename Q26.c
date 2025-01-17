#include <stdio.h>
int main() {
	int n,i=1;
	printf(" Enter the number\n ");
	scanf("%d", &n);
	printf(" Table of %d\n ", n);
	while(i<=10) {
		printf("%dx%d=%d\n ", n,n*i,i);
		i++;
	}
	return 0;
	
	
	
	
	
	}
