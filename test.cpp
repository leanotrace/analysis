#include <iostream>
#include <string>

using namespace std;
using flag = int;

struct Person {

	int age;
	string name;
	double score;

};

int judge(Person & p2) {

	if(p2.age < 20) return 0;
	else return 1;

}

flag getstate(int & a){
	return a;
}

int main(void) {
	Person p { 0, };
	int result = 0;
	
	cout << "age : ";
	cin >> p.age;

	cout << "score : ";
	cin >> p.score;

	cout << "name : ";
	cin >> p.name;


	result = judge(p);

	if(getstate(result) == 1) {
		cout << "you are adult!!";
	}
	else {
		cout << "get out" << '\n';
	}
}
