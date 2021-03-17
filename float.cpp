#include <iostream>

using namespace std;

int print(const int *arr) {
          cout << arr;
}

int main(void)
{
        int arr[5] = { 10, 20, 30, 40, 50 };
	constexpr int SUCCESS = 0;

	print(arr);
}
