#include <stdio.h>

int main(int argc, char **argv){
	int n, result = 0;
	int A,B,C,D = 0;
	int count = 0;

	printf("enter one number : ");
	fscanf(stdin, "%d", &n);

	result = n;

	while(1)
	{
		if(n > 99 || n < 0){
			printf("your number is too big\n");
			break;
		}
	
	A = n / 10;
	B = n % 10;
	C = (A+B) % 10;
	D = (B*10) + C;

	n = D;
	count++;	
	
		if(D==result)
			break;
	}
	printf("%d\n", count);
}
