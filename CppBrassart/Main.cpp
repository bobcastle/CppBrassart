#include <iostream>
#include "Character.h"

using namespace std;

int main() 
{
	
	
	int secretNum = 1;
	int guess = NULL;

	for (int i = 0; i < 5; i++)
	{
		
		if (secretNum != guess)
		{
			cout << "Enter guess" << endl;
			cin >> guess;
		}
		else
		{
			cout << "Bravo" << endl;
			break;
		}

	}

	
	return 0;

}