#include <iostream>
using namespace std;


int main()
{




	float gp;
	cin >> gp;
	
	if (gp >= 4.5 && gp <= 5.0)
	{
		cout << "Your'e on a First class\n \t 'I hail thee' ";
	}
	else if (gp >= 3.5 && gp <= 4.49)
	{
		cout << "Your'e on a Second class upper\n \t 'Almost there Boss' ";
	}
	else if (gp >= 2.5 && gp <= 3.49)
	{
		cout << "Your'e on a Second class lower\n \t 'You still dey try' ";
	}
	else if (gp >= 1.5 && gp <= 2.49)
	{
		cout << "Your'e on a Third class\n \t 'Guy, the lord is Your strength' ";
	}
	else
	{
		cout << "Your'e Probably on Probation\n \t 'I know right, School na scam' ";
	}





	/*char word[270]; int nline = 1; int nword = 0; int i;
	cout << "please enter some number of sentence, press $ to terminate the sentence after the last word\n";
	cin.getline(word, 200, '$');
	for (i = 0; i < 270; i++) {
		if (word[i] == '\n')
		{
			++nline;
		}
		if (word[i] == '\n' || word[i] == ' ')
		{
			++nword;
		}
	}

	cout << "the number of line =" << nline << endl;
	cout << "the number of words =" << nword << endl;
*/


	return 0;
}