#include <iostream>
using namespace std;

int main() 
{
	int response;
	
	cout << "What is your response" <<endl;
	cin >> response;
	if (response < 16){
		cout << "to young to drive" <<endl;
	}else if (response == 16){
		cout << "Better to clear the road" <<endl;
	}else {
		cout << "You're getting to old" <<endl;
	}
	return 0;
}q`
