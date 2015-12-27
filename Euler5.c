/* Euler Project Program Number = 5 */

#include<stdio.h>
#include<stdbool.h>

int power(int x, int n){
	int i = 0, ans = 1;
	while(i < n){
		ans = ans * x;
		i++;
	}
	return ans;
}

void main(){
	int i, j, n[20], m[] = {2, 3, 5, 7, 11, 13, 17, 19}, k[] = {1, 1, 1, 1, 1, 1, 1, 1}, p = 0, fact = 1;

	for(i = 0; i < 20; i++){
		n[i] = i + 1;
	}

	for(i = 0; i < 8; i++){
		for(j = 0; j < 20; j++){
			p = 0;
			while(n[j] % m[i] == 0){
				n[j] = n[j] / m[i];
				p++;
			}
			if(p > k[i])
				k[i] = p;
		}
	}

	for(i = 0; i < 8; i++){
		fact = fact * power(m[i], k[i]);
	}
	printf("%d\n", fact);
}
