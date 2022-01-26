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

void pattern4(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
            if(i + j <= iNo - 1)
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

	cout << "Inverted Half Pyramid : \n";
	pattern4(iNo);

	return 0;
}
