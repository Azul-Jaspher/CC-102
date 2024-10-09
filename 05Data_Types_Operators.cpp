#include <iostream>

using namespace std;

int main()
{
	int num1,num2;
	
	cout << "Enter First Number" << endl;
	cin >> num1;
	cout << "Enter Second Number" << endl;
	cin >> num2;
	
	cout << "sum:" << num1 << '+' << num2 << '=' << num1 + num2 << endl;
	cout << "Difference:" << num1 << '-' << num2 <<  '=' << num1- num2 << endl;
	cout << "Quotient:" << num1 << '*' << num2 << '=' << num1/num2 << endl;
	cout << "Remainder" << num1 << '%' << num2 << '=' << num1%num2 << endl;
	
	return 0;
}