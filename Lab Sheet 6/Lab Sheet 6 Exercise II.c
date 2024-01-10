#include <stdio.h>
#include <math.h>
	float bonus;


void calBonus(float parameter)
{
	
	if(parameter>20000)
	{
		bonus = 2 * parameter;
		printf("Your bonus is %.2f", bonus);
	}
	else
	{
		bonus = parameter * 1/2;
		printf("Your bonus is %.2f", bonus);
	}
}

int main() {
	
	float salary;
	
	printf("Enter your monthly salary: Rs.");
	scanf("%f", &salary);
	
	calBonus(salary);
	
	return 0;
}

char name[] = "okay";
int age = 23;
if (scanf(age == '1') || age == 3)
{
	printf("Hello");
	
	scanf("")
}