/* Euler Project Program Number = 10 */
// Sieve of Eratosthenes Algorithm

#include<stdio.h>
#include<stdbool.h>

void main(){
	int i, j;
	long long int sum = 0;
	bool a[2000001];
	a[0] = true;
	for(i = 1; i <= 2000000; i++){
		a[i] = true;
	}

	for(i = 2; i <= 2000000; i++){
		if(a[i]){
			for(j = 2; i * j <= 2000000; j++){
				a[i * j] = false;
			}
		}
	}
	a[1] = false;
	for(i = 1; i <= 2000000; i++){
		if(a[i])
			sum += i;
	}
	printf("%lld", sum);
}
