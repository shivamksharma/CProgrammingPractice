#include <stdio.h>
int main(void){
	int n, arr[];
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);

	printf("\n Enter the elements: ");
	for (int i = 0; i < n; i++)
	{
		printf("\n Arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n The array elements are \n");
	for (int i = 0; i < n; i++)
	{
		printf("\n Arr[%d] = %d\t", i, arr[i]);
	}
}