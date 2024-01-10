#include <stdio.h>

int main() {
	
	char shape;
	float area;
	float width, length, base, height, radius;
	const float PI = 22.0/7.0;
	
	printf("Enter the character for your shape(R,T,C): ");
	
	if(scanf(" %c", &shape) ==1)   //if eka dala parantheses athulen cpndition ekt scanf scene ek dnne adala thanata api value ekk deela tyned blnna ho, hrima data type eken api value ekk deela tynwd blnnai.
	{
		shape = toupper(shape);
		if(shape == 'R')
		{
			printf("Enter the width of Rectangle: ");
			scanf("%f", &width);
			printf("Enter the length of Rectangle: ");
			scanf("%f", &length);
	
			area = width * length;
			printf("Area of the rectangle = %.2f", area);	
		}
		else if(shape == 'T')
		{
			printf("Enter the base of Triangle: ");
			scanf("%f", &base);
			printf("Enter the height of Triangle: ");
			scanf("%f", &height);
	
			area = base * height/2;
			printf("Area of the triangle = %.2f", area);
		}
		else if(shape == 'C')
		{
			printf("Enter the radius of Circle: ");
			scanf("%f", &radius);
	
			area = PI * radius * radius;
			printf("Area of the circle = %.2f", area);
		}
		else
		{
			printf("Invalid character!");
		}
	}
		
	return 0;
}