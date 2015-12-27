/* Euler Project Program Number = 17 */

#include<stdio.h>

int check(int n){
	switch(n){
		case 2: return 6;
		case 3: return 6;
		case 4: return 5;
		case 5: return 5;
		case 6: return 5;
		case 7: return 7;
		case 8: return 6;
		case 9: return 6;
		case 100: return 7;
		case 1000: return 11;
	}
}

void main(){
	int a[101], sum = 0, i;
	a[0] = 0; a[1] = 3; a[2] = 3; a[3] = 5; a[4] = 4; a[5] = 4; a[6] = 3; a[7] = 5; a[8] = 5; a[9] = 4; a[10] = 3;
	a[11] = 6; a[12] = 6; a[13] = 8; a[14] = 8; a[15] = 7; a[16] = 7; a[17] = 9; a[18] = 8; a[19] = 8;

	// iteration to enter the value(string --> int) of numbers greater than 20
	for(i = 20; i < 100; i++){
		a[i] = check(i/10) + a[i%10];
	}

	// iteration to add the value(string --> int) from 1 - 99
	for(i = 1; i < 100; i++){
		sum += a[i];
	}

	sum = sum*10;

	// iterations to add the value(string --> int) of 100's that will be coming before thousand
	for(i = 100; i < 1000; i++){
		sum += a[i/100] + check(100) + (i%100 == 0 ? 0 : 3);
	}

	// adding the value of one thousand
	sum += check(1000);

	printf("%d\n", sum);	
}
