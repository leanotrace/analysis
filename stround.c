#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int line;
	char word[20]; 

	cin >> line;

	for(int i = 0; i < line; i++) {
		int round;
		string word;
		
		cin >> round;
		cin >> word;

		for(int j = 0; j < word.length(); j++)
		{
			for(int k = 0; k < round; k++)
			{
				cout << word[j];
			}
		}
		cout << endl;
		
	}



	return 0;
}
