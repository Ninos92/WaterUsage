#include<stdio.h>
int main(void)
{
	int shower;
	

	int bottles = 12;
	
	

	int usage = shower * bottles;
	

	printf("How long was your shower today in minutes: ");
	

	scanf("%i", &shower);
	

	 printf("you have used the equivalent of: %i bottles of water \n", shower * bottles, &usage);

	


	if (usage > 100)
	{
		

		printf("you've used too much water \n");
	}

	else if (usage < 99)
	{
		
		printf("you're doing ok with your usage \n");
	}
	














	return 0;
}