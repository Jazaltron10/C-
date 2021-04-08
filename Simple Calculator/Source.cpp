#include <iostream>

using namespace std;

int main()
{
	cout << "Hello world! This is a simple calculator" << endl;

	int a, b, sum, subtract, divide, multiply;
	cout << "Please input two integer numbers to perform arithmetic operations" << endl;
	cin >> a >> b;


	int operate;
	cout << "1:Addition, 2:Division, 3:Subtraction, 4:Multiplication" << endl;
	cin >> operate;

	switch (operate) {
	case 1:
		cout << "The sum of the two numbers are: ";
		sum = a + b;
		cout << sum << endl;
		break;
	case 2:
		cout << "The division of the two numbers are: ";
		divide = a / b;
		cout << divide << endl;
		break;
	case 3:
		cout << "The subtraction of the two numbers are: ";
		subtract = a - b;
		cout << subtract << endl;
		break;
	case 4:
		cout << "The Multiplication of the two numbers are: ";
		multiply = a * b;
		cout << multiply << endl;
		break;
	default:
		cout << "I don't think you understand how arithmetic works\n";
	}

	return 0;
}