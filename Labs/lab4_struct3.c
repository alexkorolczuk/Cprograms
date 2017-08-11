#include <stdio.h>
#define N 4



struct student{
	char name[20];
	int eng;
	int math;
	int phys;
	double mean;
	char grade;
};

static struct student data[]={
	{"Jack", 82,72,58, 0.0},
	{"Young", 77,82,79,0.0},
	{"Steve", 52, 62, 39,0.0},
	{"Mark", 61,82,88,0.0}
};


int main(void){
	int i;
	int j;
	// average:
	for(i=0; i<N;i++){
		data[i].mean = (data[i].eng + data[i].math + data[i].phys)/3.0;
		if (data[i].mean < 60.0)
			data[i].grade = 'D';
		else if (data[i].mean >= 60.0 && data[i].mean <70.0 )
		       	data[i].grade = 'C';
		else if (data[i].mean  >= 70.0 && data[i].mean <80.0 )
			data[i].grade = 'B';
		else if (data[i].mean >= 80.0 && data[i].mean <90.0 )
		       	data[i].grade = 'A';
		else
			  data[i].grade = 'S';
	}


	for (i=0;i<N; i++){
		printf("%7s: Eng = %3d Math = %3d Phys = %3d: Mean = %5.1f, Grade = %c\n", data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].mean, data[i].grade);
	}
	return 0;

}

