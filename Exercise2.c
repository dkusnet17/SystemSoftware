/*
File:		Exercise2.c
Author: 	Daniel *********
Description:	Collatz sequence
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumberGenerator();

int collatzSequence(int r);

void collatzPrimeNumber(int count);

int main ()
{
	printf("You receive a number between 0-1000 \n");
	int r = randomNumberGenerator();

	printf("\n The collatz sequence of the given number is: \n");
	int count = collatzSequence(r);
	
	printf("\n Is the length of the collatz sequence a prime: \n");
	collatzPrimeNumber(count);

return 0;		
}	

int randomNumberGenerator()
{
	srand(time(NULL));
	int r = rand() % 1001;				
	printf("%d",r);
	return r; 																																																					
}

int collatzSequence(int r)
{
	int count = 0;
	printf("%d \n", r);
	while(r > 1)
	{	
		if(r== 0 || r==1)
		printf("\n Not Prime or composite number\n");
			{
			if(r%2 == 0)
				r = r/2;			
			else
				r = 3 * r + 1;
			count+= 1;
			printf("%d \t", r);
			}
	}
printf("\nThe length of the sequence is %d \t", count);
return count;
}


void collatzPrimeNumber(int count)
{
	int loop = 2;
	int prime = 1;
	
   for(loop = 2; loop < count; loop++) 
	{
        if((count % loop) == 0) 
	{
        	prime = 0;
      	}
   }

   if (prime == 1)
      printf("\n %d is a prime \n", count);
   else
      printf("\n %d is not a prime..\n", count);

}


