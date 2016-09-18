#include <stdio.h>

	/*problem 1: 
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
	The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
	*/

	int multiples35(){
		int i;
		int sum = 0;
		for (i = 0; i < 1000; i++){
			if (i % 3 == 0 || i % 5 == 0)
				sum += i;
		}
		return sum;
	}
	

	/*
	Problem 2: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
	*/
	int diffsqs(){
		int sum1 = 0; //n^2 summed
		int sum2 = 0; //sum of 1st 100 numbers squared 
		int i;
		for (i = 1; i <= 100; i++){
			sum1 += i * i;
			sum2 += i;
		}
		//printf("%d\n", sum2);
		//printf("%d\n", sum1);
		return sum2*sum2-sum1;
	}

	int main(){
		char *pb1 = "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.";
		char *pb2 = "Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.";
		//int ans = p2();
		printf("Problem 1: %s\nAnswer: %d\n\n", pb1, multiples35());
		printf("Problem 2: %s\nAnswer: %d\n", pb2, diffsqs());
	}
