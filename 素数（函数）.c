#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int is_prima(i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) 
{
	int a,b,i,ret,count=0;
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		if (ret = is_prima(i) == 1)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("¹²%d¸ö", count);
	return 0;
}
