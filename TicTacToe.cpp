/*
Tic-Tac-Toe

Written by: Syed Talha Bukhari

Table Layout :-
 1 | 2 | 3 | 4
---|---|---|---
 5 | 6 | 7 | 8
---|---|---|---
 9 | 10| 11| 12
---|---|---|---
 13| 14| 15| 16
*/

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "stdlib.h"
#include "windows.h"
#include "string.h"

using namespace std;
void show_table(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
bool isWinner(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
void startup_screen();
void game_instructions();
void starline(int);

int main()
{
	startup_screen();
	game_instructions();
	char replay = ' ', rx = ' ';
	int game = 0, p1x = 0, p2o = 0, D = 0;
	do
	{

		int x = 0, turn = 0, win = 0;
		char xo = ' ', a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', i = ' ', j = ' ', k = ' ', l = ' ', m = ' ', n = ' ', o = ' ', p = ' ';

		// First Time Table Display
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		cout << "Choose Slot (1-16)" << endl;

		// Actual Program Starts
		do
		{

			turn = turn + 1;          // Turn Counter
			if (turn % 2 == 1)
			{
				cout << "Player 1 [X]: ";       // Odd Turns = X
				cin >> x;
				xo = 'X';
			}

			if (turn % 2 == 0)
			{
				cout << "Player 2 [O]: ";       // Even Turns = O
				cin >> x;
				xo = 'O';
			}
			switch (x)               // Slot Selection
			{
			case 1:    if (a == ' ')
				a = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 2:    if (b == ' ')
				b = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 3:    if (c == ' ')
				c = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 4:    if (d == ' ')
				d = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 5:    if (e == ' ')
				e = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 6:    if (f == ' ')
				f = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 7:    if (g == ' ')
				g = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 8:    if (h == ' ')
				h = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 9:    if (i == ' ')
				i = xo;
					   else
					   {
						   cout << "Slot is already selected" << endl;
						   Sleep(900);
						   turn = turn - 1;
					   }
					   break;
			case 10:    if (j == ' ')
				j = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 11:    if (k == ' ')
				k = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 12:    if (l == ' ')
				l = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 13:    if (m == ' ')
				m = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 14:    if (n == ' ')
				n = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 15:    if (o == ' ')
				o = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			case 16:    if (p == ' ')
				p = xo;
						else
						{
							cout << "Slot is already selected" << endl;
							Sleep(900);
							turn = turn - 1;
						}
						break;
			default:    cout << "Enter valid Slot Number" << endl;
				turn = turn - 1;
				Sleep(1000);
			}
			show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);        // Table Display
			win = isWinner(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);    // Win Check
			if (win)
				break;
		} while (turn < 16);       // Maximum Turns Limitation

		if (win)                 // Win Conditions
		{
			if (xo == 'X')
			{
				cout << "Player 1 [X] WON the game" << endl;
				p1x++;
			}
			if (xo == 'O')
			{
				cout << "Player 2 [O] WON the game" << endl;
				p2o++;
			}
		}
		else                    // Draw Conditions
		{
			cout << "Game ended in a DRAW!" << endl;
			D++;
		}
		game++;
		cout << "Repeat Game? (y/n): ";        // Asking for Game Repitition
		replay = _getche();
		do
		{
			if (replay == 'y' || replay == 'Y')
			{
				rx = _getche();
			}
			else
			{
				rx = _getche();
			}
		} while (rx != '\r');

	} while (replay == 'Y' || replay == 'y');

	// Game Summary
	cout << endl << endl << "--------------------------" << endl;
	cout << ">> Session Summary:" << endl;
	cout << "Games Played:\t\t" << game << endl;
	cout << "Player 1 [X] won:\t" << p1x << endl;
	cout << "Player 2 [O] won:\t" << p2o << endl;
	cout << "Draw:\t\t\t" << D << endl << endl;
	system("pause");
	return 0;
}

void gotoxy(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}

void show_table(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p)
{
	// Display/Update Table after every input
	// Dimensions : 4x4 (16 Slots)
	system("cls");
	gotoxy(12, 1);
	cout << "Tic-Tac-Toe" << endl;
	gotoxy(10, 3);
	cout << " " << a << " | " << b << " | " << c << " | " << d << endl;
	gotoxy(10, 4);
	cout << "---|---|---|---" << endl;
	gotoxy(10, 5);
	cout << " " << e << " | " << f << " | " << g << " | " << h << endl;
	gotoxy(10, 6);
	cout << "---|---|---|---" << endl;
	gotoxy(10, 7);
	cout << " " << i << " | " << j << " | " << k << " | " << l << endl;
	gotoxy(10, 8);
	cout << "---|---|---|---" << endl;
	gotoxy(10, 9);
	cout << " " << m << " | " << n << " | " << o << " | " << p << endl;
	gotoxy(10, 10);
	cout << endl << endl;
}

bool isWinner(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p)
{
	// Using char = 'W' for the wining row/column/diagonal
	// 10 winning conditions overall
	if (a == b&&b == c&&c == d && a != ' ')
	{
		a = 'W';
		b = 'W';
		c = 'W';
		d = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (e == f&&f == g&&g == h && e != ' ')
	{
		e = 'W';
		f = 'W';
		g = 'W';
		h = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (i == j&&j == k&&k == l && i != ' ')
	{
		i = 'W';
		j = 'W';
		k = 'W';
		l = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (m == n&&n == o&&o == p && m != ' ')
	{
		m = 'W';
		n = 'W';
		o = 'W';
		p = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (a == e&&e == i&&i == m && a != ' ')
	{
		a = 'W';
		e = 'W';
		i = 'W';
		m = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (b == f&&f == j&&j == n && b != ' ')
	{
		b = 'W';
		f = 'W';
		j = 'W';
		n = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (c == g&&g == k&&k == o && c != ' ')
	{
		c = 'W';
		g = 'W';
		k = 'W';
		o = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (d == h&&h == l&&l == p && d != ' ')
	{
		d = 'W';
		h = 'W';
		l = 'W';
		p = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (a == f&&f == k&&k == p && a != ' ')
	{
		a = 'W';
		f = 'W';
		k = 'W';
		p = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}
	if (m == j&&j == g&&g == d && m != ' ')
	{
		m = 'W';
		j = 'W';
		g = 'W';
		d = 'W';
		show_table(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
		return true;
	}

	else
		return false;
}

void startup_screen()	// Initial Display
{
	system("cls");
	system("color f3");
	char cred1[12] = "Tic Tac Toe";
	char cred2[19] = "Syed Talha Bukhari";
	gotoxy(58 - strlen(cred1) / 2, 12);
	for (int i = 0; i <= 11; i++)
	{
		cout << cred1[i];
		Sleep(200);
	}
	gotoxy(55 - strlen(cred1) / 2, 14);
	for (int i = 0; i <= 18; i++)
	{
		cout << cred2[i];
		Sleep(200);
	}
	Sleep(1000);
	gotoxy(30 - strlen(cred1) / 2, 18);
	system("pause");
}

void game_instructions()	// Instructions displayed on startup
{
	system("cls");
	string headline = "GAME INSTRUCTIONS:";
	starline(headline.length());
	cout << endl;
	for (int i = 0; i < headline.length(); i++)
	{
		cout << headline[i];
	}
	cout << endl;
	starline(headline.length());
	cout << endl;

	cout << "> The game consists of a 4x4 table (16 slots) as below:" << endl;
	gotoxy(10, 3 + 3);
	cout << "  1 |  2 |  3 |  4" << endl;
	gotoxy(10, 4 + 3);
	cout << "----|----|----|----" << endl;
	gotoxy(10, 5 + 3);
	cout << "  5 |  6 |  7 |  8" << endl;
	gotoxy(10, 6 + 3);
	cout << "----|----|----|----" << endl;
	gotoxy(10, 7 + 3);
	cout << "  9 | 10 | 11 | 12" << endl;
	gotoxy(10, 8 + 3);
	cout << "----|----|----|----" << endl;
	gotoxy(10, 9 + 3);
	cout << " 13 | 14 | 15 | 16" << endl;
	gotoxy(10, 10 + 3);
	cout << endl;
	cout << "> Each player (\'X\' or \'O\') alternately selects one of the available slots by referring to its number." << endl;
	cout << "> Player that manages to score any four slots along the vertical, horizontal or diagonal direction wins the game." << endl;
	cout << "> After concluding, replay the game by providing \'Y\' or \'y\' to the prompt, to quit press any other key." << endl << endl;

	system("pause");
}

void starline(int x)	// prints out a line of '*' as per the provided length
{
	for (int i = 1; i <= x; i++)
	{
		cout << "*";
	}
}