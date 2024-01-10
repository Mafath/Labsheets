#include <stdio.h>
//Exercise IV

struct item
{
	int itemNo;
	float price;
	int quantity;
};


int main() {
	
	struct item item1;
	struct item item2;
	
	printf("Enter details for Item 1:\n");
	printf("Item No: ");
	scanf("%d", &item1.itemNo);
	printf("Price: ");
	scanf("%f", &item1.price);
	printf("Quantity: ");
	scanf("%d", &item1.quantity);
	printf("\n");
	
	
	printf("Enter details for Item 2:\n");
	printf("Item No: ");
	scanf("%d", &item2.itemNo);
	printf("Price: ");
	scanf("%f", &item2.price);
	printf("Quantity: ");
	scanf("%d", &item2.quantity);
	printf("\n");
		
	printf("%-12s%-18s%s", "Item No","Price","Quantity\n");
	printf("%-12d%-18.2f%d\n", item1.itemNo,item1.price,item1.quantity);
	printf("%-12d%-18.2f%d", item2.itemNo,item2.price,item2.quantity);	

    return 0;
}

