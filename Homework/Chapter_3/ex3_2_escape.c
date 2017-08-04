/////Ex 3_2   Escape function


#include <stdio.h>

void escape (char s[], char t[]){
int i,j;
   i=j=0;
  while(t[i] != '\0')
{        
switch(t[i]){
        case '\t':
        s[j]='\\';
        ++j;
        s[j]='t';
        break;

        case'\n':
        s[j]='\\';
        ++j;
        s[j]='\n';


        default:

        s[i] = t[j];

        break;

   }

        ++i;

        ++j;

}
        s[j]= '\0';
}
int main(){

return 0;
}


