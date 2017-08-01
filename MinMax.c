
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {

printf("Hello, world.\n");
printf("The max value you can store in (int) variable is %d\n", INT_MIN);
printf("The min value you can store in (int) variable is %d\n",INT_MAX);

printf("The max value you can store in (float) variable is %.10e\n", FLT_MAX);
printf("The min value you can store in (float) variable is %.10e\n", FLT_MIN);

printf("The max value you can store in (singed char) variable is %d\n",SCHAR_MAX);
printf("The min value you can store in (singed  char) variable is %d\n", SCHAR_MIN);

printf("The max value you can store in (unsinged char) variable is %d\n", UCHAR_MAX);
printf("The max value you can store char: %lu\n", sizeof(char));    

printf("The max value you can store in (long) variable is %ld\n", LONG_MAX);
printf("The min value you can store in (long) variable is %ld\n", LONG_MIN);

printf("The max value you can store in (short) variable is %d\n", SHRT_MAX);
printf("The min value you can store in (short) variable is %d\n",SHRT_MIN);


return 0;

}
