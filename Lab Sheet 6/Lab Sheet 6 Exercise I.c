#include <Stdio.h>

int itemcode, qty;

void calPayment(int parameter1, float parameter2)
{
	float totalCost;
	
	if(parameter1 == 1)
	{
		totalCost = 50 * parameter2;
		printf("Payment = Rs.%.2f", totalCost);
	}
	else if(parameter1 ==2)
	{
		totalCost = 100 * parameter2;
		printf("Payment = Rs.%.2f", totalCost);		
	}
	else
	{
		printf("Invalid Item Code!");
	}
	
}

int main() {
	
	
	
	printf("Enter the item number: ");
	scanf("%d", &itemcode);
	printf("Quantity: ");
	scanf("%d", &qty);
	
	calPayment(itemcode,qty);
	
	return 0;
}

//int main () {
//	
//	int number;
//	printf("Enter : ");
//	scanf("%d", &number);
//	
//	if (number == '1')
//	{
//		printf("okay");
//	}
//	else {
//		printf("No");
//	}
//	
//	
//	return 0;
//}


