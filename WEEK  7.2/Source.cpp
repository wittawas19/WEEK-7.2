#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for  (int j = n;  j > i;  j--)
		{
			printf("*") ;
		}
		for (int k = 0; k < (i)*2; k++)
		{
			printf(" ");
		}
		printf("\b");
		for (int l = i; l < n; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (int k = 1; k <= 2 * (n - (i + 1)); k++)
		{
			printf(" ");
		}
		printf("\b");
		for (int l = i ; l >= 0; l--)
		{
			printf("*");
		}
		printf("\n");
	}


}