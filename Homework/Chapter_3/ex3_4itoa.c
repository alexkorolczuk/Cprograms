#include <stdio.h>

#define abs(x)  ( (x) > 0 ? (x): (x))
int main(){


return 0;

}

void itoa (int n, char s[]){

int i, sign;

sign =n;
i=0;

do
{ s[i++] = abs(n% 10) +'0';
}
while ((n/=10) !=0);
if (sign <0)
s[i++]='-';


s[i]='\0';
//reverse(s);
}

