#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <clocale>

using namespace std;

char mark;
int p = 1;
int i, choice, b;

char a[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void drow()
{
	system("cls");
	cout << " " << a[1] << " | " << a[2] << " | " << a[3] << endl;
	cout << " __|___|__" << endl;
	cout << " " << a[4] << " | " << a[5] << " | " << a[6] << endl;
	cout << " __|___|__" << endl;
	cout << " " << a[7] << " | " << a[8] << " | " << a[9] << endl;
}

int chek()
{
	if (a[1] == a[2] && a[2] == a[3]) return 1;
	else if (a[4] == a[5] && a[5] == a[6]) return 1;
	else if (a[7] == a[8] && a[8] == a[9]) return 1;

	else if (a[1] == a[4] && a[4] == a[7]) return 1;
	else if (a[2] == a[5] && a[5] == a[8]) return 1;
	else if (a[3] == a[6] && a[6] == a[9]) return 1;

	else if (a[1] == a[5] && a[5] == a[9]) return 1;
	else if (a[3] == a[5] && a[5] == a[7]) return 1;

	if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
		return 0;
	else
	return -1;
}

int main()
{
	int menu;
	link:
	cout << "Enter menu item" << endl;
	cout << "1. Palay" << endl;
	cout << "2. Rules of the game" << endl;
	cout << "3. Exit" << endl;
	cout << "Your choice: ";
	cin >> menu;
	if (menu == 1) {
		do
		{
			drow();
			mark = p % 2 ? 'x' : '0';

			cout << "     \n p" << p << " : ";
			cin >> choice;

			if (choice == 1 && a[1] == '1')
				a[1] = mark;
			else if (choice == 2 && a[2] == '2')
				a[2] = mark;
			else if (choice == 3 && a[3] == '3')
				a[3] = mark;
			else if (choice == 4 && a[4] == '4')
				a[4] = mark;
			else if (choice == 5 && a[5] == '5')
				a[5] = mark;
			else if (choice == 6 && a[6] == '6')
				a[6] = mark;
			else if (choice == 7 && a[7] == '7')
				a[7] = mark;
			else if (choice == 8 && a[8] == '8')
				a[8] = mark;
			else if (choice == 9 && a[9] == '9')
				a[9] = mark;
			else
			{
				cout << "       ---------- NO -------";
				p--;
				_getch;
			}

			i = chek();
			p++;
		} while (i == -1);
		if (i == -1)
			cout << "    \n ===>> \a p" << --p << "Win" << endl;
		else
			cout << "End game" << endl;
		goto link;
	}
	else {
		if (menu == 2) {
			system("cls");
			cout << "Players take turns putting 3×3 signs on the free cells of the field (one is always crosses, the other is always zeros)." << endl;
			cout << "The first one to line up 3 of his pieces vertically, horizontally or on a large diagonal wins." << endl;
			cout << "If the players filled in all 9 cells and it turned out that there are no three identical signs in any vertical, horizontal or large diagonal, the game is considered to end in a draw." << endl;
			cout << "The first move is made by the player placing crosses." << endl;
			cout << "The first move is made by the player placing crosses." << endl;
			cout << "Usually, at the end of the game, the winning side crosses out with a line its three characters (zero or cross), which make up a continuous row." << endl;
			goto link;
		}
		else {
			if (menu == 3) {
				cout << "Game over" << endl;
			}
			else {
				system("cls");
				cout << "You entered an invalid value" << endl;
				cout << "Please try again" << endl;
				goto link;
			}
		}
	}
}