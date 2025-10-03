#include<stdio.h>
int main()
{
	int num, even_count=0, odd_count=0;
	char dec;	
do
{
		
	printf("Please enter a number:\t\t");
	scanf("%d", &num);
		
	if (num%2==0)
	{
		printf("\n==>EVEN\n\n\n");
		even_count++;
		
	}
	else
	{
		printf("\n\n==>ODD\n\n");
		odd_count++;
	}		
		
	printf("DO YOU WANT TO CONTINUE YES(Y) OR NO(N):\t\t");
	scanf(" %c", &dec);
	
	printf("\n");
	
	if (dec=='n' || dec=='N')
	{
		break;
	}
}while (dec=='Y' || dec=='y');

	printf("\n\nYOU ENTERED %d EVEN NUMBERS", even_count);
	printf("\n\nYOU ENTERED %d ODD NUMBERS", odd_count);

	return 0;	
}
