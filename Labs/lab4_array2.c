#include <stdio.h>
#define N 4



struct student{
	char name[20];
	int eng;
	int math;
	int phys;
	double mean;
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
	}
	for (i=0;i<N; i++){
		printf("%7s: Eng = %3d Math = %3d Phys = %3d: Mean = %5.1f/n", data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].mean);
	}
	return 0;

}

