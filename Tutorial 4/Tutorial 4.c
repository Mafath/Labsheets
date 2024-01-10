#include <stdio.h>
	
int main()
{	
	
/*	//ExerciseI
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		num = num * -1;
		printf("%d", num);
	}
	else if( num > 0)
	{
		num = num * 1;
		printf("%d", num);
	}
	else if( num == 0)
	{
		printf("You entered Zero");
	}
*/

/*	//ExerciseII	
	char type;
	int currentBalance = 50000;
	int amount;
	int newBalance;
	
	printf("Enter transaction type(W for Withdrawals / D for Deposits): ");
	type = getchar();
	type = toupper(type);
	
	
	if( type == 'W' || type == 'D')
	{
		if(type == 'W')
		{
			printf("you have selected to withdraw money\n\n");
			printf("Enter withdrawal amount: Rs.");
			scanf("%d", &amount);
			if (amount <= currentBalance)
			{
				newBalance = currentBalance - amount;
				printf("\nWithdrawal Completed\n");
				printf("Your current account balance is Rs.%d", newBalance );
			}
			else if(amount > currentBalance)
			{
				printf("You dont have enough balance");
			}
		} 
		
		
		
		
		
		else if(type == 'D')
		{
			printf("you have selected to deposit money\n\n");
			printf("Enter deposit amount: Rs.");
			scanf("%d", &amount);
			newBalance = currentBalance + amount;
			printf("\nDeposit Completed!\n");
			printf("Your current account balance is Rs.%d", newBalance );
		}
		
		
		
	}
	else
	{
		printf("you have selected an invalid transaction type");
	}
*/

	return 0;
	
	
	
	
	
	
	
	
	
}
