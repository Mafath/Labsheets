#include <stdio.h>
#include <ctype.h>

int main() {
	
	// 3.I
	int c, f, convert;
	printf("Enter C for Celsius/ F for Fahrenheit: ");
	
	char choice;
	if (scanf("%c", &choice) == 1)
	{
	
		choice = toupper(choice);
	
		if (choice == 'C')
		{
			printf("You entered C\n");
			printf("Enter your value: ");
			scanf("%d", &c);
			convert = (c * 9/5) + 32;
			printf("%.2d Celsius = %.2d Fahrenheit", c, convert);
		}
		else if (choice == 'F')
		{
			printf("You entered F\n");
			printf("Enter your value: ");
			scanf("%d", &f);
			convert = (f-32) * 5/9;
			printf("%.2d Fahrenheit = %.2d Celsius", f, convert);
		}
		else
		{
			printf("Invalid input");
		}
	}
	else
	{
		printf("Failed to read input");
	}


/*	// 3.II
	float f1, f2, f3, perTour, perDay, perWeek, perSem;
	
	printf("Enter fare 1: Rs.");
	scanf("%f", &f1);
	
	printf("Enter fare 2: Rs.");
	scanf("%f", &f2);
	
	printf("Enter fare 3: Rs.");
	scanf("%f", &f3);	
	
	perTour = f1+f2+f3;
	perDay = perTour * 2;
	perWeek = perDay * 5;
	perSem = perWeek * 14;
	
	printf("Bus fare for a tour = %.2f + %.2f + %.2f\n                    = Rs.%.2f" , f1,f2,f3,perTour);
	
	printf("\nBus fare for a day  = %.2f * 2\n                    = Rs.%.2f" ,perTour,  perDay);
	
	printf("\nBus fare for a week = %.2f * 5\n                    = Rs.%.2f" , perDay, perWeek);
	
	printf("\nBus fare for the entire semester = %.2f * 14\n                                 = Rs.%.2f", perWeek, perSem);	
*/

	
/*	//3.III
	double salary, bonus;
	
	printf("Enter your salary: Rs.");
	scanf("%lf", &salary);
	
	bonus = salary * 20/100;
	
	printf("Your festival bonus is Rs.%.2lf", bonus);	
*/	

	
	
	return 0;
}

