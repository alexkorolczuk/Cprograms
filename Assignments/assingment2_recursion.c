#include <stdio.h>

int factorial(int n){

	//Ex 1 - factorial
	if (n==1)
		return 1;
	return n*factorial(n-1);
	
}

int fibonacci(int n){
        //Ex 2 - fabonacci
	if(n<2)
		return n;
	return fibonacci(n-2)+fibonacci(n-1);
}
int bunny(int b){
       	//Ex 3 - bunnies
	if (b==0)
		return 0;
	if (b%2 ==1)
		return 2+bunny(b-1);
	return 3 + bunny(b-1);
}
int power(int b, int n){
	if (n==1)
		return b;
	return b*power(b, n-1);
}

int sum(int n){
	if (n<10)
		return n;
	return sum(n/10)+(n%10);
}

int main(){
       	printf("Exercise: %d\n", 1);
       	printf("%d\n",factorial(6));
        printf("Exercise: %d\n", 2);
        printf("%d\n",fibonacci(8));
 	printf("Exercise: %d\n", 3);
        printf("%d\n",bunny(6));
 	printf("Exercise: %d\n", 4);
        printf("%d\n",power(2,3));
	printf("Exercise: %d\n", 5);
       	printf("%d\n",sum(199));
	return 0;

}
