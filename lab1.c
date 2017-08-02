 //1A 1100
//1B 10111001
// 1C 10111001

//2A 45
// 2B  235
// 2c 10

// 3A  8A
//3B 77
// 3C  3B


//4A 11
// 4B 16177
// 4C 796

//5A 97
// 5B B7C
// 5C F

// 6A  0001 1010 0011 1011
// 6B 1010 1011 1111 0000
// 6C 0001 0001 0001 0001 0001 0001

// command to compile: gcc -o lab1  lab1.c

/*
char 1 byte
int 4 bytes
float 4 bytes
short depends on the machine, ussualy 2 bytes
long usually 4 bytes, depends on the machine
double 8 bytes



*/


#include <stdio.h>

int main() {

int i, j;
int first[] = {1,2,3,4,5};
int second[] = {1,2,3,4,5};

for (i=j= 0; i<5; i++){
int sum =first[i] + second[j];
printf("Sum of integer %d\n", first[i]);
printf("and integer %d\n", second[i]);
printf("is %d\n", sum);
}

return 0;

}


