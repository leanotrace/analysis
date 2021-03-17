#include <stdio.h>

int main(int argc, char **argv)
{
	int input[9] = { 0, };
	int max = 0;
	int flag = 0;

	int i = 1;

	scanf("%d %d %d %d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8]);


	max = input[0];

	for(i = 1; i < 9; i++) {
		if(max < input[i])
		{
			max = input[i];
			flag = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", flag + 1);
}
