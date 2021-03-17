#include <iostream>
#include <cstdio>
using namespace std;		

int main(int argc, char **argv) {

	int n, arr[] = { 0, };
	int han, N = 0;

	cin >> n;

	for(int i = 1; i <= n; i++) {
	
		if (i < 100) {
			han = i;
		}

		else if (i == 1000) break;

		else {
			N = 0; n = i;

			while(n > 0) {
			
			arr[N] = n % 10;
			n /= 10;

			N++;
			}
	
			if (arr[0] - arr[1] == arr[1] - arr[2]) han++;
		}
	}


	cout << "han number : " << han << endl;

}

