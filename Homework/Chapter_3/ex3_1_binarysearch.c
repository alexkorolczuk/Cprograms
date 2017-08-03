///////EX 3.1
// binary search - change loop
// we need to remove one else if statemtn from the loop and 
// move it somewhere else


int main(void){
// sample data:
int myarray[]={1,2,3,4,5,6};
printf("%d",binarysearch(2,myarray,5));

return 0;
}


//looking for x, n=size of array
int binarysearch(int x, int v[], int n){
int low, high, mid;

low = 0;
high=n-1;
mid=(low+high)/2;
while (low< high && x !=v[mid]){
	if (x> v[mid])
		low = mid +1;
	else
		high= mid-1;
//after the operations: set mid again
mid = (low+high)/2;
}

if (x== v[mid])
	 return mid;
else
	return -1;
}
