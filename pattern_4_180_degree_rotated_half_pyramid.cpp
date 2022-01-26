/*
input : 3
output :
    *
  * *
* * *

*/
#include <iostream>
using namespace std;

void pattern4(int iNo)
{
	for(int i = iNo; i > 0; i--)
	{
		for(int j = 0; j <= iNo; j++)
		{
            if(j >= i)
                cout << "*";
            else   
                cout << " ";
        }
		cout << endl;
	}
}

int main()
{
	cout << "Enter Number : \n";
	int iNo = 0;
	cin >> iNo;

	cout << "180 degree rotated Pyramid : \n";
	pattern4(iNo);

	return 0;
}
