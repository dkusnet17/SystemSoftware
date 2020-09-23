/*
File:		    PrimeFactors.c
Author: 		Daniel Kusnetsoff, Tuomas Maanpää
Description:	Pointers and files
*/

#include <stdio.h>
#include "PrimeFactors.h"
#include <math.h>

void largestPrimeFactors(int gvalue, int *table)
{
	for(int i = 0; i < gvalue; i++)
	{
		int numberInTheArray = *(table + i);
		int firstNumber = 2, firstLargePrimeFactor = 2;
		{
		/* check if the number is 1 or lower */
		if(numberInTheArray <= 1){
			printf("the number %d is not a prime number. \n", numberInTheArray);
			continue;
		/*
		Counting primes separately would speed up the process*/
			}
		/* Calculates other numbers than 1 or lower */
		while(numberInTheArray > 1){
			if(numberInTheArray % firstNumber == 0){
				while(numberInTheArray % firstNumber == 0){
					numberInTheArray = numberInTheArray / firstNumber;
					if(firstNumber > firstLargePrimeFactor){
						firstLargePrimeFactor = firstNumber;
					}
				}
			}
		firstNumber++;
		}
		printf("Largest prime factor of %d is %d\n", *(table + i), 			 			firstLargePrimeFactor);
		}
	}
}

