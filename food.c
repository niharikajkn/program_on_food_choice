#include<stdio.h>
int main()



{

	printf("Enter item code : \n 1. French Fries\n 2. Burger\n 3. Sandwich\n 4. Pasta\n 5. Pizza\n");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	
	{
		case 1:
			printf("Food Item- French Fries\nPrice  -Rs.99");
			break;
			
		case 2:
			printf("Food Item- Burger\nPrice  -Rs.129");
			break;
			
		case 3:
			printf("Food Item- Sandwich\nPrice  -Rs.149");
			break;
			
		case 4:
			printf("Food Item- Pasta\nPrice  -Rs.179");
			break;
			
		case 5:
			printf("Food Item- Pizza\nPrice  -Rs.239");
			break;
			
		default:
			printf("INVALID CHOICE");
	}
	
}
	

