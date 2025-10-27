#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
	srand(time(NULL));
	int num_real;
	int num_guessed;
	int i = 1;
	int attempt_count;
	
	num_real=rand()%100+1;
	
	do
	{
		printf("Enter the exact number you guessed (1-100):");
		scanf("%d",&num_guessed);
		
		if(num_guessed==num_real)
		{
			printf("\x1b[32mYou answered correctly, congratulations.\x1b[0m\n");
			printf("\x1b[34mYour attempt count: %d\x1b[0m",attempt_count);
			i = 0;
		}
		
		else if(num_guessed>num_real)
		{
			printf("\x1b[31mTry again with a smaller number.\x1b[0m\n");
			i=1;
			attempt_count = ++attempt_count;
		}
		
		else
		{
			printf("\x1b[33mTry again with a larger number.\x1b[0m\n");
			i=1;
			attempt_count = ++attempt_count;
		}
		
	}while(i);
	

	
	return 0;
}
