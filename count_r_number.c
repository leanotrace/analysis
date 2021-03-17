#include <stdio.h>


int main(int argc, char **argv){
	int input[3] = { 0, };
	int arr[10] = {0, };
	int n = 0;
	int i = 0;
	int c = 0;

	for(i = 0; i < 3; i++) {
		scanf("%d", &input[i]);

	}

	n = input[0] * input[1] * input[2];

	int num;
	while(n>0) {
		num = n%10;
		arr[num]++;
		n /= 10;
	}

	for(i = 0; i < 10; i++) {
		printf("%d : %d\n",c, arr[i]);
		c++;
	}

	return 0;	

	
}
