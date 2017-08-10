#include <stdio.h>

// Ex 1:
int sumint(int arr[], int n)
{
	int i;
	int sum = 0;
	for (i=0; i < n; i++)
		sum = sum + arr[i];
	return sum;
}

// Ex 3:
void square(int a){

int b;
for(a=1; a<=10;a++){
	b=a*a;
printf("Ex 3., square of  %d\n", a);
printf("is %d\n", b);
}
}

int main (){
int arr[] = {1,2,3,4,5};
int n = 5;

printf("Ex. 1: Sum of integers in the array is: %d\n", sumint(arr, n));

// EX 2:
//int i;
	//for (i=0; i<10; i++)
//	printf("Ex 2: calling function multibytwo");
//	printf("%d\n",multbytwo(i)); 


square(3);

return 0;

}
