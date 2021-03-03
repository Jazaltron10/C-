#include<iostream>
#include <chrono>
using namespace std;

class DateClass
{
private:
	int month, day;



public:
	DateClass() {
		month = 1, day = 1;
	}
	void  GetDate(int d, int m);
	void WriteDate();
	bool validate();

};


int main()
{
	DateClass Date1, Date2;
	bool ok, uk;
	cout << "please first person should enter his/her details\n";
	Date1.GetDate(3, 5);
	cout << "please second person should enter his/her details\n";
	Date2.GetDate(7, 12);
	ok = Date1.validate();
	uk = Date2.validate();
	if (ok == true && uk == true)
	{
		cout << "first person date is\n";
		Date1.WriteDate();
		cout << "second person date is\n";
		Date2.WriteDate();
	}

	else if (ok == true && uk == false)
	{
		cout << "first person date is\n";
		Date1.WriteDate();
		cout << "second person date is invalid" << endl;

	}
	else if (ok == false && uk == true)
	{
		cout << "first person date is invalid" << endl;
		cout << "second person date is\n";
		Date2.WriteDate();

	}
	else
	{
		cout << "invalid date for both persons" << endl;
	}


	system("pause");
	return 0;
}




void DateClass::GetDate(int d, int m)
{

	cout << "enter your day value in integer format\n";
	cin >> d;
	cout << "enter your month value in integer format\n";
	cin >> m;
	month = m;
	day = d;
}

void DateClass::WriteDate()
{
	if (month == 1)
	{
		cout << "january " << day << endl;
	}
	else if (month == 2)
	{
		cout << "february " << day << endl;
	}

	else if (month == 3)
	{
		cout << "march " << day << endl;
	}

	else if (month == 4)
	{
		cout << "april " << day << endl;
	}

	else if (month == 5)
	{
		cout << "may " << day << endl;
	}

	else if (month == 6)
	{
		cout << "june " << day << endl;
	}

	else if (month == 7)
	{
		cout << "july " << day << endl;
	}

	else if (month == 8)
	{
		cout << "august " << day << endl;
	}

	else if (month == 9)
	{
		cout << " september " << day << endl;
	}

	else if (month == 10)
	{
		cout << " october " << day << endl;
	}

	else if (month == 11)
	{
		cout << " november " << day << endl;
	}
	else
	{
		cout << " december " << day << endl;
	}


}
bool DateClass::validate()
{

	bool ok;
	if ((day >= 1 && day <= 28 && month == 2) || (day >= 1 && day <= 30 && (month == 9 || month == 4 || month == 6 || month == 11)) || (day >= 1 && day <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)))
	{
		ok = true;
		return ok;
	}
	else {
		ok = false;
		return ok;
	}
}