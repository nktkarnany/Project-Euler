/* Euler Project Program Number = 3 */

#include<stdio.h>
#include<stdbool.h>

bool prime(int n){
	if(n == 1 || n == 2 || n == 3)
		return true;
	int i = 2;
	while(i <= n/2){
		if(n % i == 0)
			return false;
		i++;
	}		
	return true;
}

void main(){
 	int i = 2;
	long long int N = 600851475143;
	printf("The Largest Prime Factor Is: ");
	while(i <= N/2){
		if(N % i == 0){
			N = N / i;
		}
		i++;
	}
	if(prime(N))
		printf("%lld ", N);
	printf("\n");
}


