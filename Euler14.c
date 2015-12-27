/* Euler Project Program Number = 14 */

#include<stdio.h>

void main(){
	long long int i, n, count[1000001], largest, large = 0;
	count[0] = 0;
	for(n = 1; n <= 1000000; n++){
		i = n;
		count[n] = 1;
		while(i != 1){
			if(i % 2 == 0)
				i = i / 2;
			else
				i = (3 * i) + 1;
			if(i < n && i != 1){
				count[n] += count[i];
				break;
			}
			count[n] += 1;
		}
	}
	for(i = 1; i <= 1000000; i++){
		if(count[i] > large){
			large = count[i];
			largest = i;
		}
	}
	printf("%lld\n", largest);
}
