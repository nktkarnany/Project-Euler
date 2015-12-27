/* Euler Project Program Number = 12 */

#include<stdio.h>

int factor(int n){
	int i, count = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0)
			count++;
	}
	return count;
}

void main(){

	// defining a variable for the kth number of the triangle
	int N, i, count = 1;
	
	for(i = 1; count < 500; i++){
		if(i % 2 == 0)
			count = factor(i/2) * factor(i+1);
		else
			count = factor(i) * factor((i+1)/2);
	}
	N = (i-1) * (i) / 2;
	printf("%d\n", N);
}
