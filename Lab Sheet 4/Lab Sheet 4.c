#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int angle1, angle2, angle3;
	
	printf("Enter the value of first angle: ");
	if(scanf("%d", &angle1) != 1 || angle1 <= 0)
	{
        printf("Invalid input for the first angle\n");
        return 1;
	}
	
	
	
	printf("Enter the value of second angle: ");
	if(scanf("%d", &angle2) != 1 || angle2 <= 0)
	{
        printf("Invalid input for the first angle\n");
        return 1;
	}
	
	
	
	printf("Enter the value of third angle: ");
	if(scanf("%d", &angle3) != 1 || angle3 <= 0)
	{
        printf("Invalid input for the first angle\n");
        return 1;
	}
	
	
	
	
	if( angle1 + angle2 + angle3 == 180)
	{
		printf("Can be formed a triangle.");
	}
	else if(angle1 + angle2 + angle3 != 180)
	{
		printf("Can not be formed a triangle.");
	}
	
	return 0;
}

