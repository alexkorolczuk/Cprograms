#include <stdio.h>


///////////// ex 1:
void swap (int *px, int *py){
	int temp;
	temp = *px;
	*px=*py;
	*py = temp;
}


//////// ex 2:
void array_pointers(int numbers[]){
	int i, *p;
	p =numbers; // this will be memory address of numbers[0]
	printf("print just a SIZE OF first element of the array: %lu\n",sizeof(*p));
	for (i=0; i<3;i++)
		printf("Next element will be *(p + %d) = %d\n; size of next element:%lu\n", i, *(p+i), sizeof(*(p+i)));
}

////////// ex 3:
void array_actual(){
       	int arr[] = {5,6,7};
	int i;
	for (i=0; i<3;i++){
		printf("Print members of the array with arr[], %d\n", arr[i]);
	}
		printf("Now print with alternative notation  %d\n", *(arr+0));
		printf("Now print with alternative notation  %d\n", *(arr+1));
		printf("Now print with alternative notation  %d\n", *(arr+2));
}

//////////////// ex 4:
void print_addr(int x) {
	printf("I'm printing the address of variable: %x\n", &x);

// answer: there is no difference in the address.printed address is the same
// even if variable is different.	

}


/////////////////ex 5:
int new_integer(){
	int j;
	j=5;
	int k = &j;
	return k;
/*
 * waring from compiler:
 * format specifies type 'unsigned int'
 * but the argument has type 'int *' [-Wformat]
 * Safe option is to pass a pointer to a variable as an
 * argument in the function.
 */
}


/////////////////// ex 6:
void print_array(int numbers[], int n){
	//without pointers:
	int i;
	for (i=0; i<n; i++)
		printf("Values of integer array without pointers: %d\n", numbers[i]);

	// with pointers
	 int *p;
	 p = numbers;
	for(i=0; i<n; i++)
	printf("Array of integers using pointers *(p + %d) = %d\n",  i, *(p+i));
}

int main(){
	
	///////// ex 1
	int x = 10;
	int y = 20;
	swap(&x, &y);
	printf("x: %d, y:%d\n", x,y);

	///////////ex 2
	int numbers[3] = {100,200,300};
	array_pointers(numbers);	
	
	///////////// ex 3:
	array_actual();		
	
	//////// ex 4:
	print_addr(6);	
	int a = 9;
	print_addr(a);
	
	////////// ex 5:
	printf("address of variable x is %x\n", new_integer());	
	//////// ex 6
	print_array(numbers, 3);



	return 0;
}
