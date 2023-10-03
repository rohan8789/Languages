#include<stdio.h>

int main(){
	int x, y, z, sum;
	printf("enter the first angle: ");
	scanf("%d", &x);
	printf("enter the second angle: ");
	scanf("%d", &y);
	printf("enter the thired angle: ");
	scanf("%d", &z);
	sum = x + y + z;

	if (sum == 180)
	{
		printf("valid triangle\n");
	}
	else
	{
		printf("invalid triangle\n");
	}
	
	

	return 0;
}