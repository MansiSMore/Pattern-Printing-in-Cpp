/*
input : 3 
output :
* * *
* * *
* * *

input : 5
output :
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include <iostream>
using namespace std;

void pattern1(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter Number : \n";
	int iNo = 0;
	cin >> iNo;

	cout << "Solid Square : \n";
	pattern1(iNo);

	return 0;
}
