#include <iostream>
#include <Windows.h>
#include "functions.h"

using namespace std;

int main(){

	do
	{
		if (loop == 1)
		{
			turn = 1;
		}
		else if (loop == 0)
		{
			turn = 2;
		}

		cout << "Player " << turn << ".\n";
		cout << "Choose check box. \n";
		cout << endl;
		display();
		cout << endl;

		if (!(cin >> choice))
		{
			cout << "Wrong choice.\n";

			cin.clear();
			cin.ignore(10000, '\n');
		}

		if (choice == 1)
		{
			if (one == 0)
			{
				if (loop == 1)
				{
					one = 1;
					hLoop++;
					loop = hLoop % 2;
					nm1 = 'X';
				}
				else
				{
					one = 2;
					hLoop++;
					loop = hLoop % 2;
					nm1 = 'O';
				}
			}
			else
			{
				cout << "Check box -1- is occupied!\n";
			}
		}
		else if (choice == 2)
		{
			if (two == 0)
			{
				if (loop == 1)
				{
					two = 1;
					hLoop++;
					loop = hLoop % 2;
					nm2 = 'X';
				}
				else
				{
					two = 2;
					hLoop++;
					loop = hLoop % 2;
					nm2 = 'O';
				}
			}
			else
			{
				cout << "Check box -2- is occupied!\n";
			}
		}
		else if (choice == 3)
		{
			if (three == 0)
			{
				if (loop == 1)
				{
					three = 1;
					hLoop++;
					loop = hLoop % 2;
					nm3 = 'X';
				}
				else
				{
					three = 2;
					hLoop++;
					loop = hLoop % 2;
					nm3 = 'O';
				}
			}
			else
			{
				cout << "Check box -3- is occupied!\n";
			}
		}
		else if (choice == 4)
		{
			if (four == 0)
			{
				if (loop == 1)
				{
					four = 1;
					hLoop++;
					loop = hLoop % 2;
					nm4 = 'X';
				}
				else
				{
					four = 2;
					hLoop++;
					loop = hLoop % 2;
					nm4 = 'O';
				}
			}
			else
			{
				cout << "Check box -4- is occupied!\n";
			}
		}
		else if (choice == 5)
		{
			if (five == 0)
			{
				if (loop == 1)
				{
					five = 1;
					hLoop++;
					loop = hLoop % 2;
					nm5 = 'X';
				}
				else
				{
					five = 2;
					hLoop++;
					loop = hLoop % 2;
					nm5 = 'O';
				}
			}
			else
			{
				cout << "Check box -5- is occupied!\n";
			}
		}
		else if (choice == 6)
		{
			if (six == 0)
			{
				if (loop == 1)
				{
					six = 1;
					hLoop++;
					loop = hLoop % 2;
					nm6 = 'X';
				}
				else
				{
					six = 2;
					hLoop++;
					loop = hLoop % 2;
					nm6 = 'O';
				}
			}
			else
			{
				cout << "Check box -6- is occupied!\n";
			}
		}
		else if (choice == 7)
		{
			if (seven == 0)
			{
				if (loop == 1)
				{
					seven = 1;
					hLoop++;
					loop = hLoop % 2;
					nm7 = 'X';
				}
				else
				{
					seven = 2;
					hLoop++;
					loop = hLoop % 2;
					nm7 = 'O';
				}
			}
			else
			{
				cout << "Check box -7- is occupied!\n";
			}
		}
		else if (choice == 8)
		{
			if (eight == 0)
			{
				if (loop == 1)
				{
					eight = 1;
					hLoop++;
					loop = hLoop % 2;
					nm8 = 'X';
				}
				else
				{
					eight = 2;
					hLoop++;
					loop = hLoop % 2;
					nm8 = 'O';
				}
			}
			else
			{
				cout << "Check box -8- is occupied!\n";
			}
		}
		else if (choice == 9)
		{
			if (nine == 0)
			{
				if (loop == 1)
				{
					nine = 1;
					hLoop++;
					loop = hLoop % 2;
					nm9 = 'X';
				}
				else
				{
					nine = 2;
					hLoop++;
					loop = hLoop % 2;
					nm9 = 'O';
				}
			}
			else
			{
				cout << "Check box -9- is occupied!\n";
			}
		}
		else if ((choice < 1) || (choice > 9))
		{
			cout << "Wrong choice.\n";
		}	
	} while (winCon() && fullCon());

	if (!winCon())
	{
		cout << "Winner Player " << turn << endl;
	}
	else
	{
		cout << "End of Game!" << endl;
		cout << "No Winner!";
	}

	Sleep(3000);
	return 0;
}

void display(){
	cout << " ___________" << endl;
	cout << endl;
	cout << "| " << nm7 << " | " << nm8 << " | " << nm9 << " |" << endl;
	cout << " ___________" << endl;
	cout << endl;
	cout << "| " << nm4 << " | " << nm5 << " | " << nm6 << " |" << endl;
	cout << " ___________" << endl;
	cout << endl;
	cout << "| " << nm1 << " | " << nm2 << " | " << nm3 << " |" << endl;
	cout << " ___________" << endl;
}

bool winCon(){
	if ((one == turn && two == turn && three == turn) || (four == turn && five == turn && six == turn) ||
		(seven == turn && eight == turn && nine == turn) || (one == turn && four == turn && seven == turn) ||
		(two == turn && five == turn && eight == turn) || (three == turn && six == turn && nine == turn) ||
		(one == turn && five == turn && nine == turn) || (three == turn && five == turn && seven == turn))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool fullCon(){
	if ((one == 1 || one == 2) && (two == 1 || two == 2) && (three == 1 || three == 2) && (four == 1 || four == 2) &&
		(five == 1 || five == 2) && (six == 1 || six == 2) && (seven == 1 || seven == 2) && (eight == 1 || eight == 2) && (nine == 1 || nine == 2))
	{
		return false;
	}
	else{
		return true;
	}
}
