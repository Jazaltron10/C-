#include <iostream>
#include <math.h>
#define pi 3.142
using namespace std;

void getvalue(int*,int*);
int  calc_value(int, int);
void write_value(int);

int main()
{
	int r, h;
	int area;

	getvalue(&r , &h);
	area = calc_value(r , h);
	write_value(area);

	system("pause");
	return 0;
}

void getvalue(int *r_ptr,int *h_ptr)
{
	//int *r_ptr, *h_ptr;
	cout << "please input your values \n";
	cin >> *r_ptr >> *h_ptr ;
}

int calc_value(int r, int h)
{
	int area;
	area = pi * pow(r, 2) * h;

	return area;
}

void write_value(int area)
{
	cout << "The Value of the area is : " << area<< endl;
}