all:
	gcc -Wextra -Wall -std=c11 Exercise4.c PrimeFactors.c -o testaus1 -lm
clean:
	$(RM) testaus1	
