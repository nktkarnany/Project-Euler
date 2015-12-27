/* Euler Project Program Number = 4 */

#include<stdio.h>
#include<stdbool.h>

bool palindrome(int n){
	int reverse = 0, t = n;
	while(t != 0){
		reverse = reverse * 10 + (t % 10);
		t = t / 10;
	}
	return (reverse == n) ? true : false; 
}

void main(){
	int i, j, large, largest = 0;
	for(i = 100; i <= 999; i++){
		for(j = 100; j <= 999; j++){
 			if(palindrome(i * j)){
				large = i * j;
				if(large > largest)
					largest = large;
			}
		}
	}
	printf("%d\n", largest);
}


