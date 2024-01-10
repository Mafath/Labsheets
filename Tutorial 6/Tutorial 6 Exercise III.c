#include <stdio.h>

void addNumbers(int p1, int p2)
{
	int sum, num1, num2;
	
	sum = p1 + p2;
	printf("sum = %d", sum);
	
}

int main() {
	
	int number1,number2;
	
	printf("Enter number 1: ");
	scanf("%d", &number1);
	
	printf("Enter number 2: ");
	scanf("%d", &number2);
	
	addNumbers(number1, number2);
	
	return 0;
}