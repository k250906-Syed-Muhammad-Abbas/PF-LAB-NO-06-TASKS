#include<stdio.h>
int main()
{
	int vov_count=0, cons_count=0;
	char alpha, dec;	
do
{
		
	printf("Please enter a character:\t\t");
	scanf(" %c", &alpha);
		
	if (alpha=='a'|| alpha=='A'||alpha=='e'|| alpha=='E'||alpha=='o'|| alpha=='O'||alpha=='u'|| alpha=='U'||alpha=='i'|| alpha=='I')
	{
		vov_count++;
	}
	else
	{
		cons_count++;
	}

	printf("\n");
			
	printf("DO YOU WANT TO CONTINUE YES(Y) OR NO(N):\t\t");
	scanf(" %c", &dec);
	
	printf("\n");
	
}while (dec=='Y' || dec=='y');

	printf("\n\nYOU ENTERED %d vovels", vov_count);
	printf("\n\nYOU ENTERED %d consonants", cons_count);

	return 0;	
}
