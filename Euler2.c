/* Euler Project Program Number = 2 */

#include<stdio.h>
#include<math.h>
void main(){
 
	long n1 = 0, n2 = 2, sum = 0, n3 = 2;
	while(n3 < 4000000){
		sum += n3;
		n3 = n1 + 4 * n2;
		n1 = n2;
		n2 = n3;
	}
printf("%ld\n",sum);
}
