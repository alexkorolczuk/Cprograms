#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

///////////////////// ex 7:

	int i, d1, d2;
	int a[13];
	int n=0;
	double sum =0;
	double ave;
	double square = 0;
	double dev;

	for(i=2;i<=12;i++)
		a[i]=0;

	for (i=0;i<100;i++)
	{
		d1 = rand() % 6 +1;
		d2 = rand() % 6 +1;
		a[d1 + d2] = a[d1 + d2] +1;
		sum = sum + d1 + d2;
		square = square + (d1 + d2) * (d1+d2);
	//sqrt((sum(x*x) - sum(x)*sum(x)/n) / (n - 1))
		n++;

	}
	for(i=2;i<=12;i++)
		printf("%d: %d\n", i, a[i]);

	ave = sum /n;
	printf("Average is: %6.1f\n", ave);
	dev = sqrt((square - sum * sum / n) / (n-1));
	printf("Standard deviation: %f\n", dev);	
	return 0;
}
