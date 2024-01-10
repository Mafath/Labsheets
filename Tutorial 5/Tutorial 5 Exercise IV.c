#include<stdio.h>








int main() {
	
	int x = 1;
	while(x<=7)
	{
		int y=1;
		while(y<=x)
		{
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	
	
	int k = 7;
	while(k >=1)
	{
		int m = k;
		while(m>=1)
		{
			printf("*");
			m--;
		}
		printf("\n");
		k = k-2;
	}
	
	
	return 0;
}