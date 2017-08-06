/* 2.a 
 * 0 2 4 6 8
 * 2.b
 * 100 93 86 79 72 65 58 51 44 37 30 23 16 9 2
 *2.c
 *1 2 3 4 5 6 7 8 9 10
 *2.d
 *2 4 8 16 32 64
 *
 *
 *
 */
#include <stdio.h>
int main(){

	// Ex. 3:
	int i,j;
	for(i=1;i<=10; i++){
		j= i*i;
	printf("%d\t", i);
	printf("%d\n", j);
	}


	// Ex 4:
	int max_row = 10;
	int row, star;
	for  (row=1; row<= max_row;row++){
		for (star=1;star<=row;star++){
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}



