#include <stdio.h>

int strrindex(char source[], char search[]);

int main(void){

	char l[]= "paiiimapap";
	char p[]= "pa";
	int found;

	found = strrindex(l,p);
	printf("Found the rightmost index: %d\n", found);
}

int strrindex(char s[], char t[]){
	int i,j,k, r;
	r = -1;
	for (i=0; s[i] != '\0'; i++){
		for(j=i,k=0; t[k]!='\0' && s[j]==t[k];j++, k++)
			;
		if(k>0 && t[k]=='\0')
			r=i;
	}
	return r;
}


