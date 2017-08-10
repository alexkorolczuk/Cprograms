#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/////////////ex 8



void randrange(int n, int m){
	int x = rand() / (RAND_MAX / n+1) + m ;
	printf("Random number is %d\n", x);

}


int main(){

	randrange(10, 2);
return 0;
}
