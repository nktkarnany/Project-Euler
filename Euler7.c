/* Euler Project Program Number = 7 */

#include<stdio.h>
#include<stdbool.h>

void main(){
	int i, j, x = 0;
	bool flag = true;
	for(i = 2; ; i++){
		for(j = 2; j <= i/2; j++){
			flag = true;
			if(i % j == 0){
				flag = false;
				break;
			}
		}
		if(flag)
			x++;
		if(x == 10001){
			printf("%d\n", i);
			break;
		}
	}
}
