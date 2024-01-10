#include <stdio.h>

int main() {
	
/*	int x=1;
	int sum=0;
	int mark;
	
	while(x<=4)
	{
		printf("Enter module %d mark: ", x);
		scanf("%d", &mark);
		sum = sum + mark;
		x++;
	}
	printf("sum = %d", sum);
*/
	
	
/*	int x=1;
	int sum=0;
	int mark;
	
	int y=1;
	while (y<=3)
	{
		printf("--Student No.%d--\n\n", y);
		
		while(x<=4)
		{
			printf("Enter module %d mark: ", x);
			scanf("%d", &mark);
			sum = sum + mark;
			x++;
		}
		printf("sum = %d\n\n", sum);
		x = 1;
		sum = 0;
		
		y++;	
	}
	
*/
	
	int x=1;
	int sum=0;
	int mark;
	int max =0;
	int maxSt = 0;
	
	int y=1;
	while (y<=3)
	{
		printf("--Student No.%d--\n\n", y);
		
		while(x<=4)
		{
			printf("Enter module %d mark: ", x);
			scanf("%d", &mark);
			sum = sum + mark;
			x++;
		}
		printf("sum = %d\n\n", sum);
		if(sum>max)
		{
			max = sum;
			maxSt = y;
		}
		x = 1;
		sum = 0;
		
		
		
		y++;	
	}
	printf("student number %d has maximum sum of %d",maxSt, max);
	

	
	return 0;
}