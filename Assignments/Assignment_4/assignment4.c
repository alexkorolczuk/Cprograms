/*
 * Question1 :
 * c = getchar()! = EOF;
 *
 * it will read 1 char and compare to END OF FILE constant.
 * It will not assign char to c, and then check with EOF, which is normally what programmer wants to do.
 *
 * Q2:
 * Because int is larger than char and it can store more than 256 character values, including EOF.
 *  Char on the other hand can store no more that 256 character values (EOF would be 257th)
 *   therefore you can face i.e. infinite loop or other undesitable results.
 *
 *   Q 3:
 *   ++ x - incrementation is first, before other operations like assigning a value. 
 *   x++ - incrementation happens later, for example after assigning a value.
 *
 *   Q4:
 *   i = i++ tries to modify variable twice but it doesnt seem to have much sense.
 *
 *   Q5:
 *   String is array of characters (char *), on which end is null character - '\0'.
 *
 *   Q 6:
 *   at first everything will be normal, so a,bc will be placed and when EOF is read loop will break. 
 *   But from now, c will be EOF, so function will not return EOF
 *   but break with \0. 
 */


#include <stdio.h>

int main(){
	return 0;
}
