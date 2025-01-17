#include <stdio.h>
int main() {
	int  n,i=1;
	printf("Enter any number for it's table:\n");
	scanf("%d", &n);
	printf("Table:\n");
	while(i<=100) {
		printf("%dx%d=%d\n", n,i,n*i);
		i++;
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
} 
