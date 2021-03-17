#include <stdio.h>
#include <stdlib.h>

int i = 0;


int comparison(int *p_a, int *p_c, int *min, int *max)
{
	*min = p_a[0];
	*max = p_a[0];

	for(i = 1; i < *p_c; i++){
		if(*max < p_a[i])
			*max = p_a[i];
	}

	for(i = 1; i < *p_c; i++){
		if(*min > p_a[i])
			*min = p_a[i];
	}

//	printf("max : %d\n", max);
//	printf("min : %d\n", min);

}

int main(int argc, char **argv)
{
	int i, c = 0;
	int min, max = 0;

	scanf("%d", &c);

	int *input = malloc(sizeof(int) * c);
	
	for(i = 0; i < c; i++) {
		scanf("%d", &input[i]);
	}
	comparison(input, &c, &min, &max);	
	
	printf("max : %d\n", max);
	printf("min : %d\n", min);

	free(input);
}
