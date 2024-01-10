#include <stdio.h>

float area;
const double PI = 22.0/7.0;

void circleArea(int parameter)
{
	area = PI *parameter*parameter;
	printf("Area = %.2f",area);
}

int main() {
	
	int radius;

	printf("Enter radius: ");
	scanf("%d", &radius);
	
	circleArea(radius);
	
	return 0;
}