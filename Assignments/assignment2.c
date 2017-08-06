/*
 * Ex 1:
 * division of integers (without any reminder) - performed it both operands are integers
 *  and division of floating point, which is performed if one or both operands are floating-points
 *
 *Ex 2: 
 * false - 0 value.
 * true - any non-zero value
 *operators like < <= > >= == != && || ! - they always generate  0(false) or 1 (true).
 *
 *Ex.3:
 *separating expressions in for loop (i.e. i=0; i<10; i++)
 *terminating statements
 *terminating declarations
 *
 *Ex.4
 * take control expressions from the for loop and put them :
 * i=0 - before the while loop
 * i<10 - inside while statement while (i<10)
 *i=i+1 - inside the body of while loop
 *
 *i=0;
 *while (i<10)
 *{
 *printf("1 is %d\n", i);
 *i=i+1;
 *}
 * 
 *Ex 5:
 *True (1).
 *
 *Ex.6:
 *if T is less than 212 and greater or equal to 32.
 *
 *Ex 7:
 *'Yes', because 3 as non-zero value means true.
 *
 *Ex.8
 *
 *a
 *a
 *a
 *b
 *c
 *
 */


// PROGRAM EXERCISES:
#include <stdio.h>

int main(){
	// Ex 1:
	printf("Exercise: %d\n", 1);	
	int i;
	int j=0;
	for (i=1; i<=10; i++){
		if(i>3)
		j++;
	}
	printf("%d\n", j);

	// Ex 2:
	 printf("Exercise: %d\n", 2);
	int a,b;
	int sum=0;
	for (a=1; a<=10; a++){
		b=a*a;
		sum = sum+b;
	}
	int average = sum/10;
	printf("%d\n", average);
	

	// Ex.3:
	printf("Exercise: %d\n", 3);
	int z;
	for (z=1;z<=10; z++){
		if (z%2==0){
			printf("%d is even\n",z);
		}
		else 
			printf("%d is odd\n", z);
	}

	// Ex.4:
	// only until 7, because 8! is too big to fit into type integer.
	printf("Exercise: %d\n", 4);
	int k;
	int l=1;
	for (k=1;k<=7;k++){
		l=l*k;
		printf("%d  %d\n",k,l);
	}

	//Ex 5:
	printf("Exercise: %d\n", 5);
	int c,d;
	int fib=1;
	int first = 0;
	for (c=0; c<=10;c++){
		 printf("%d\n", fib);
		d = fib;
		fib = fib+first;
		first=d;
	}
	
	return 0;
}


