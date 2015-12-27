/* Euler Project Program Number = 16 */

#include<stdio.h>

void main(){
	int a[500], i, j, t, num, sum = 0;
	// num is the variable to store the multiplication of the array digit then it is divided by 10 to add the remainder to the 		// next array digit

	a[0] = 2;
	for(i = 1; i < 500; i++){
		a[i] = 0;
	}
	for(i = 1; i < 1000; i++){
		j = 0;
		t = 0;
		while(j < 500){
			num = a[j] * 2;
			a[j] = (num % 10) + t;
			t = num / 10;
			j++;
		}
	}
	for(i = 0; i < 500; i++){
		sum = sum + a[i];
		printf("%d, ", a[i]);
	}
	printf("%d\n", sum);
}
