/*
input : 3
output :
    * * *
      * *
        *

input : 5
output :
* * * * *
  * * * *
    * * *
      * * 
        
        *

*/
#include <iostream>
using namespace std;

void pattern6(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < i; j++)
		{
			cout << " ";
		}

        for(int j = i; j < iNo; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter Number : \n";
	int iNo = 0;
	cin >> iNo;

	cout << "180 degree rotated Inverted half Pyramid : \n";
	pattern6(iNo);

	return 0;
}
