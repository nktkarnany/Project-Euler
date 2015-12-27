/* Euler Project Program Number = 1 */

#include<stdio.h>
#include<math.h>
void main(){

	int n1 = 3, n2 = 5, sum = 0;
	int i;
	for(i = 1; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			sum = sum + i;
	}
}

printf("%d\n",sum);
}
