#include <stdio.h>

int main() {
/*	
	int i = 10;
	while(i<=20)
	{
		printf("%d\n", i);
		i++;
	}
*/	
	
	
/*	int number= 0;
	
	while (number >= 0)
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		if (number<0)
		{
			printf("Negative value detected. Stopping the input!");
			break;
		}
		printf("You entered: %d\n",number);
	}
*/	

	
	
	int number= 0;
	int sum = 0;
	int count = 0;
	float average = 0;
	
	while (number >= 0)
	{
		printf("Enter a number: ");
		scanf("%d", &number);
	
		if (number<0)
		{
			printf("Negative value detected. Stopping the input!\n");
			printf("The sum of numbers you entered is: %d\n", sum);
			average = sum / count;
			printf("The average of numbers you entered is: %.2f", average);
			break;
		}
		else if(number>=0)
		{
			sum = sum + number;
		}
		printf("You entered: %d\n",number);
		count++;
	}
	
	return 0;
}