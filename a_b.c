#include <stdio.h>

int c = 0;

int input(int *p)
{
	char a, b;

	a = getchar()

	getchar(b)


//	scanf("%d %d", &a, &b);
	
	if ( 10 < a || a < 0 || 10 < b || b < 0 ) {
		printf("input err\n");
		*(p + 0) = -1;
	}

	else {
		*(p + c) = a + b;
		c++;	
	}
}

int main(int argc, char **argv)
{
	int *p = NULL;
	int sum[] = { 0, };
	int i;

	p = sum;

	while (c < 5)
	{
		input(sum);
		
		if ( sum[0] == -1 )
			break;
	}

	for(i = 0; i < c; i++) {
		printf("%d\n", sum[i]);
	}
}


