/*
input : 3
output :
* * *
* *
*

input : 5
output :
* * * * *
*     *
*   *
* * 
*

*/
#include <iostream>
using namespace std;

void pattern5(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
            if(i == 0 || j == 0 || i + j == iNo - 1)
			    cout << "* ";
            else
                cout << "  ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter Number : \n";
	int iNo = 0;
	cin >> iNo;

	cout << "Hollow Inverted Pyramid : \n";
	pattern5(iNo);

	return 0;
}
