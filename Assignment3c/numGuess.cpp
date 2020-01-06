/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/23/2019
 * *Description: This program asks the user for an integer that the player
 * *		 will try to guess. The program will continue to ask the 
 * *		 player until the number is guessed correctly.
 * ***********************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int main()
{

	int playerNum, guess;
	int tries = 1;

	//Ask the user to enter a number for the player 
	//to guess
	cout << "Enter the number for the player to guess." << endl;
	cin >> playerNum;

	//Ask the player to enter their guess
	cout << "Enter your guess." << endl;
	cin >> guess;

	//If guess is too high have plyer try again
	while (guess != playerNum)
	{
		if(guess > playerNum)
		{
			tries++;
			cout << "Too high - try again.\n";
			cin >> guess;
		}
		if(guess < playerNum)
		{
			tries++;
			cout << "Too low - try again.\n";
			cin >> guess;
		}
	}
	if(tries == 1)
	{
		cout << "You guessed it in 1 try.\n";
	}
	else
	{
		cout << "You guessed it in " << tries << " tries." << endl;
	}

	return 0;
}
