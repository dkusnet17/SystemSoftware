/*
File:		Exercise4.c
Author:		Daniel ******
Description:	Pointers and files
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "PrimeFactors.h"


int kysely();
int * generointi(int koko);

int main() {
	int kokonaisluku = kysely();
	int kokoluku = kokonaisluku;
	int *taulukko; 
	taulukko = generointi(kokoluku);
	maxPrimeFactors(kokoluku, taulukko);
	
	return 0;
}

int kysely(int argc, char *argv[]) {

	if(strspn(argv[1], "0123456789") == strlen(argv[1])) {
        	printf("The string has only numbers!\n");
		int kokonaisluku = atoi(argv[1]);
		return kokonaisluku;
	
	} else {
	printf("The string has characters that are not numbers or period!");
		return 0;
	}
}

int * generointi(int koko) {

	time_t t;
	srand((unsigned) time(&t));	

	int * taulukko = malloc(koko * sizeof(int));
	for(int i = 0; i < koko; i++){
		*(taulukko + i) = rand() % 10;
	}

	return taulukko;
}






