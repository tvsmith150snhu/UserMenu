/*
Troy Smith
IT-312-J4007
2022.03.27
4-1 Debugging Assignment: Building User Option Menu
*/

/*ERROR Resolutions
1. Use the 'using namespace std' to enable 'cin' and 'cout'
2. Change upper case 'C' to lower case for correct variable name.
3. Missing Quotation marks for print statement.
4. Label '2' was missing from 'case' causing it to be out of sequence
5. Same as error 2.  Case sensitivity is noticed in C++.
*/

// UserMenu_Solution.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  

//This program builds a menu based on switchcase statements to determine where a user wants to go in the program.
// Program options are then to solve the Tower of Hanoi problem, view the user profile, or exit the program.


#include <cstdlib>
#include <iostream>

//1. This statement is necessary to use 'cin' and 'cout'
using namespace std;

void Tower(int, char, char, char);

int main()
{
	int choice;
	cout << "1. Solve the Tower of Hanoi" << endl;
	cout << "2. View Your Profile" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice : " << endl;
	cin >> choice;
	switch (choice) // 2. Variable mismatch.  C++ is case sensitive, so the capital C is not allowed here.
	{
	case 1:
		system("cls");
		int numDiscs;

		cout << "**Tower of Hanoi**\n";
		cout << "Enter the number of discs :"; // 3. Missing double qutation marks (")
		cin >> numDiscs;
		cout << "\n\n";
		Tower(numDiscs, 'A', 'B', 'C');
		break;
	case 2: //4. This should be 'case 2', but was missing the case iteration
		cout << "Username:\t\tPlayer 1" << endl;
		cout << "Gamertag:\t\tImTheBest" << endl;
		cout << "No. Hours Played:\t173" << endl;
		break;
	case 3:
		cout << "Now Exiting." << endl;
		break;
	default:
		cout << "You did not choose anything...so exit this program." << endl;
	}

	return 0;
}


void Tower(int numDiscs, char from, char aux, char to) {
	if (numDiscs == 1) {
		cout << "\tMove disc 1 from " << from << " to " << to << "\n";
		return;
	}
	else {
		Tower(numDiscs - 1, from, to, aux); // 5. Same as error 2.  Case sensitivity is noticed in C++.
		cout << "\tMove disc " << numDiscs << " from " << from << " to " << to << "\n";
		Tower(numDiscs - 1, aux, from, to);
	}
}
