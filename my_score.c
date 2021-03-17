#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i = 0;
	double max = 0.0;

	printf("input the number of subject : ");	
	scanf("%d", &n);

	double score[n];
	double n_score = 0.0;
	
	printf("input the score each of subjects : ");

	for(i = 0; i < n; i++)
		scanf("%lf", &score[i]);

	for(i = 0; i < n; i++) 
		if(score[i] > max) max = score[i];
		
	for(i = 0; i < n; i++)
		n_score = n_score + ((score[i] / max) * 100.0);
	
	printf("%0.2lf", n_score/n);


}
