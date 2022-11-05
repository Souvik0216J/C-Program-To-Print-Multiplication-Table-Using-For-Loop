#include<stdio.h>
int main()
{
	int num = 0, ans = 0, i;
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	for(i = 1; i<=10; i++)
	{
		ans = num * i;
		printf("%d x %d = %d\n", num, i, ans);
	}
	return 0;
}
