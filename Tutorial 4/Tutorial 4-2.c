#include <stdio.h>

int main() {
	
//	double num1, num2, result;
//	char operators;
//	
//	printf("Enter the operator(+ - * /): ");
//	scanf("%c", &operators);
//	printf("Input first number: ");
//	scanf("%lf", &num1);
//	printf("Input second number: ");
//	scanf("%lf", &num2);
//	
//	
//	if(operators == '+')
//	{
//		result = num1 + num2;
//		printf("%.2lf", result);
//	}
//	else if(operators == '/')
//	{
//		result = num1 / num2;
//		printf("%.2lf", result);
//	}
//	else if(operators == '-')
//	{
//		result = num1 - num2;
//		printf("%.2lf", result);
//	}
//	else if(operators == '*')
//	{
//		result = num1 * num2;
//		printf("%.2lf", result);
//	}
//	else
//	{
//		printf("Enter a valid operator");
//	}
	
	
	
	double num1, num2, result;
	char operators;
	
	printf("Enter the operator(+ - * /): ");
	scanf("%c", &operators);
	printf("Input first number: ");
	scanf("%lf", &num1);
	printf("Input second number: ");
	scanf("%lf", &num2);
	
	
	switch(operators) {
		
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0)
			{
				result = num1 /num2;
			}
			else
			
			{ 
				printf("Error, can't divide by zero!");
				return 1;
			}
			break;
		default:
			printf("Enter a valid operator");
			return 1;
	}
	printf("%.2lf", result);
	
	
	
	return 0;
}
