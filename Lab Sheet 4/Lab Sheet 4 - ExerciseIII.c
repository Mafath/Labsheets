#include <stdio.h>

int main() {
	
	int type, number;
	float totalCost;
	
	printf("Enter the package type(1, 2 or 3): ");
	
	if(scanf("%d", &type) == 1){
		if(type == 1)
		{
			printf("You have selected Horse ride. Cost per person is Rs.2000/=\nEnter the number of people: ");
			scanf("%d", &number);
			totalCost = 2000 * number;
			printf("Your total cost is Rs.%.2f/=", totalCost);
		}
		else if(type == 2)
		{
			printf("You have selected Scuba Diving. Cost per person is Rs.5000/=\nEnter the number of people: ");
			scanf("%d", &number);
			totalCost = 5000 * number;
			printf("Your total cost is Rs.%.2f/=", totalCost);
		}
		else if(type == 3)
		{
			printf("You have selected Water Rafting. Cost per person is Rs.7000/=\nEnter the number of people: ");
			scanf("%d", &number);
			totalCost = 7000 * number;
			printf("Your total cost is Rs.%.2f/=", totalCost);
		}
		else
		{
			printf("Invalid input!");
		}
	}
	
	
	return 0;
}


//#include <stdio.h>
//
//int main() {
//    
//    int type, number;
//    float totalCost;
//
//    printf("Enter the package type (1, 2, or 3): ");
//    
//    if (scanf("%d", &type) == 1) {
//        if (type == 1) {
//            printf("You have selected Horse ride. Cost per person is Rs.2000/=\nEnter the number of people: ");
//            scanf("%d", &number);
//            totalCost = 2000 * number;
//            printf("Your total cost is Rs.%.2f/=", totalCost);
//        } else if (type == 2) {
//            printf("You have selected Scuba Diving. Cost per person is Rs.5000/=\nEnter the number of people: ");
//            scanf("%d", &number);
//            totalCost = 5000 * number;
//            printf("Your total cost is Rs.%.2f/=", totalCost);
//        } else if (type == 3) {
//            printf("You have selected Water Rafting. Cost per person is Rs.7000/=\nEnter the number of people: ");
//            scanf("%d", &number);
//            totalCost = 7000 * number;
//            printf("Your total cost is Rs.%.2f/=", totalCost);
//        } else {
//            printf("Invalid input!");
//        }
//    }
//
//    return 0;
//}
