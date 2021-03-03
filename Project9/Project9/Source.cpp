#include <iostream>
#include <iomanip>
#include <exception>
using namespace std;

int main()
{
	char answer = 'y';
	
	while (answer == 'y' || answer == 'Y')
	
	{char numbers[10][7] = { "One\n","Two\n","Three","Four\n","Five\n","Six\n","Seven","Eight","Nine\n" };

	int a ;

	for (int i = 0; i < 2; i++) {
		cin >> a;

		if (a % 2 == 0 && a > 9)
		{
			cout << numbers[a] << "EVEN\n";
		}

		else if(a % 2 == 1 && a > 9)
		{
			cout << numbers [a] << "ODD\n";
		}
	}

	cout << "do you want to continue"<<endl;

	cin >> answer;

	}

	return 0;
}

