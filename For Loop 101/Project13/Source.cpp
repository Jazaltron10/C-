#include<iostream>
#include <iomanip>
using namespace std;
int main()
{

	
	
	char Mychar;
	int n;
	cout << "Please enter the value of your row in integer format\n";
	
	cin >> n;
	cout << "\n";
	for (int a = 1; a <= n; a++)
	{
		for (int y = 1; y <= a; y++)
			cout << " * ";
		cout << endl;
	
	}
	for (int i = n; i >= 1; i--)
	{
		for (int k = i; k > 0; k--)
			cout << " * ";
			cout << endl;

	}
	

	int p, j, k, l;
	cout << "Please enter the value of p, j, k, l : \n";
	cin >> p >> j >> k >> l;
	
	for (int p = 1; p <= 10; p++)
	{
		for (int j = 1; j <= p; j++)
		{
			for (int k = 1; k <= j; k++)
			{
				for (int l = 1; l <= k; l++)
				cout <<setw(1)<< "*" << setw(1) << l << setw(1) << k << setw(1) << j << setw(1) << p;
				cout << endl;
			}
		}
	}
	// can be used for permutation and combination
	

	return 0;
}



