#include <stdio.h>

// ex 4,5,6:

////////////////////////////Ex.4

void printchars(char ch, int n){
	int i;
	for (i=0;i<n;i++)
		printf("Character %c\n", ch);

}

void triangle(){
	int row;
	int max_row=10;
	for(row=1; row<=max_row; row++){
		printchars('*', row);
		printf("\n");
	}
}
/////////////////////////////////Ex 5:
void factorial(){
	int number;
	long int fact=1;
	for(number=1; number<=10; number++){
		fact=fact*number;
		printf("number and its factorial:%d %ld\n", number, fact);
	}
}
////////////////////////////////Ex 6:
void celcius(){
	double c;
	int i;
	for(i=-40;i<=220;i=i+10){
	c = (5.0/9.0) * (i-32);
	printf("Temp farhteneit [%d] to celcius %6.1f\n",i,c);
	}
}

int main(){
	printchars('o', 3);
	triangle();
	factorial();
	celcius();

	return 0;
}

