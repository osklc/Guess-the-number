#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
	srand(time(NULL));
	int num_real;
	int num_guessed;
	int i = 1;
	
	num_real=rand()%100;
	
	do
	{
		printf("Enter the exact number you guessed (0-100):");
		scanf("%d",&num_guessed);
		
		if(num_guessed==num_real)
		{
			printf("\x1b[32mYou answered correctly, congratulations.\x1b[0m");
			i = 0;
		}
		
		else if(num_guessed>num_real)
		{
			printf("\x1b[31mTry again with a smaller number.\x1b[0m\n");
			i=1;
		}
		
		else
		{
			printf("\x1b[33mTry again with a larger number.\x1b[0m\n");
			i=1;
		}
		
	}while(i);
	

	
	return 0;
}
