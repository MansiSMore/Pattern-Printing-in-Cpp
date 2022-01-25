/*
input : 3 
output :
* * *
*   *
* * *

input : 5
output :
* * * * *
*       *
*       * 
*       * 
* * * * *

*/
#include <iostream>
using namespace std;

void pattern2(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
            if(i == 0 || i == iNo - 1 || j == 0 || j == iNo - 1)
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

	cout << "Hollow Square : \n";
	pattern2(iNo);

	return 0;
}
