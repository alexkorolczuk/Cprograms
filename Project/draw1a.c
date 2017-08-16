#include <stdio.h>
#include <time.h>
#include <string.h>

#define BUFFSIZE 1024
#define MAX_LINE 100


int main(int argc, char * argv[]){
	    

	    char line[256];
	    char *token;
	    char s[] = "    ";
	    FILE *fp;
	    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
	    const char* keywords[8] = {"Image", "lineTo", "End", "print", "draw","translate", "child", "#"};
 //--------------------- operations on arguments:----------------------
 if (argc != 2)
         printf("Error. This program requiers 2 arguments");
 else {
	 const char *file_name = argv[0];
  	 const char *input = argv[1];
	 time_t my_time;
	 my_time = time(NULL);
	 fflush(stdout);	
	 printf("%s started on %s\nInput file: %s\n", file_name, ctime(&my_time), input);
 }

//--------------------- operations on file:----------------------

 fp = fopen("inputfile.1", "r");
     while(fgets(line, 265, fp) != NULL){
	     token = strtok(line, s);
    	     if(strncmp(token, keywords[0], 9) == 0){
    		     a++;
	     }

	     else if (strncmp(token, keywords[1], 9) == 0){
		     b++;
	     }
	     else if (strncmp(token, keywords[2], 9) == 0) {
		     c++;
	     }
	     else if (strncmp(token, keywords[3], 9) == 0) {
		     d++;
	     }
	     else if (strncmp(token, keywords[4], 9) == 0){
		     e++;
	     }
	     else if (strncmp(token, keywords[5], 9) == 0){
		     f++;
	     }
	     else if (strncmp(token, keywords[6], 9) == 0){
		     g++;
	     }
	     else if (strncmp(token, keywords[7], 9) == 0){
		     h++;
	     }
     }

      fflush(stdout);
      printf("%d %s definition(s) \n", a,keywords[0]);
      printf("%d %s command(s) within Figures\n", b,keywords[1]);
      printf("%d %s command(s)\n", c, keywords[2]);
      printf("%d %s command(s)\n", d, keywords[3]);
      printf("%d %s command(s)\n", e, keywords[4]);
      printf("%d %s command(s)\n", f, keywords[5]);
      printf("%d %s command(s)\n", g, keywords[6]);
      printf("%d comments(s)\n", h);       

      return 0;


}

