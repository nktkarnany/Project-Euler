/* Euler Project Program Number = 6 */

#include<stdio.h>
#include<math.h>

void main(){
	int N = 100 , sum;
	sum = pow((N * (N + 1) / 2), 2) - (N * (N + 1) * (2 * N + 1) / 6);
	printf("%d\n", sum);
}
