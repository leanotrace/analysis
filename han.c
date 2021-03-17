#include <iostream>
#include <string>
using namespace std;

int dist(int x)
{
	int count = 0;	
	int arr[3];

	if ( x < 100) return x;

	else {

		for(int i = 100; i <= x; i++) {
	
		int n = i;


			for(int j = 0; j <= 2; j++) {
				arr[j] = n % 10;
				n /= 10;
			
				if(n < 1) break;
			}
		if (arr[0] - arr[1] == arr[1] - arr[2]) count++;
		}
	}

	return (99 + count);
}

int main(void)
{
	int hansu;

	cin >> hansu;

	cout << dist(hansu);
			

}
