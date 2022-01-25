/*
input : 3
output :
*
* *
* * *

input : 5
output :
* 
* * 
* * *    
* * * *
* * * * *

*/
#include <iostream>
using namespace std;

void pattern3(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
            if(i >= j)
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

	cout << "Half Pyramid : \n";
	pattern3(iNo);

	return 0;
}
