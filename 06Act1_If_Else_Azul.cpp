#include <iostream>
using namespace std;

int main() 
{
	int Temperature;
	
	cout << "What is The Temperature" <<endl;
	cin >> Temperature;
	if (Temperature < 32){
		cout << "Bring a heavy jacket" <<endl;
	}else if (Temperature => 32 && <= 50){
		cout << "Bring light jacket" <<endl;
	}else {
		cout << "Do not bring any jacket" <<endl;
	}
	return 0;
}
