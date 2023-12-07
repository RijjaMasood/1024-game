#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>

using namespace std;
void Display(int arr[][4]);
void grid_intitial(int arr[][4]);
void rand_gen(int arr[][4]);
void left(int arr[][4]);
void up(int arr[][4]);
void right(int arr[][4]);
void down(int arr[][4]);
bool termination(int grid[][4]);
bool equal(int grid[][4], int temp[][4]);


int main()
{
	cout << "               WELCOME TO !" << endl << endl;
	cout << "1111" << "      " << " 00000 " << "    " << " 2222222" << "    " << "4444    4444" << endl;
	cout << "1111" << "      " << "0000000" << "    " << "222222222" << "   " << "4444    4444" << endl;
	cout << "1111" << "    " << " 000000000" << "   " << "22    222" << "   " << "4444    4444" << endl;
	cout << "1111" << "    " << "00000000000" << "  " << "    2222" << "    " << "444444444444" << endl;
	cout << "1111" << "    " << "00000000000" << "  " << "   2222" << "     " << "444444444444" << endl;
	cout << "1111" << "    " << "00000000000" << "  " << " 2222" << "               " << "4444" << endl;
	cout << "1111" << "    " << "00000000000" << "  " << "2222" << "                " << "4444" << endl;
	cout << "1111" << "     " << "000000000" << "  " << "222222222222" << "         " << "4444" << endl;
	cout << "1111" << "    " << "  0000000  " << "" << "2222222222222" << "         " << "4444" << endl;
	cout << endl;
	char start;
	cout << " Press Y to continue ! " << endl;
	cin >> start;
	if (start == 'y' || start == 'Y')
	{
		system("CLS");
		int grid[4][4] = { 0 };
		grid_intitial(grid);
		Display(grid);
		char choice;
		int i, j;
		int temp[4][4] = { 0 };
		bool check = true;

		for (; true;)
		{
			if (termination(grid) == true)
			{
				break;
			}

			for (int x = 0; x < 4; x++)
			{
				for (int y = 0; y < 4; y++)
				{
					temp[x][y] = grid[x][y];
				}
			}

			cout << "Press l to move left, r to move right, d to move down and u to move up. ";
			choice = _getch();

			if (choice == 'l' || choice == 'L')
			{
				left(grid);
			}
			else if (choice == 'u' || choice == 'U')
			{
				up(grid);
			}
			else if (choice == 'r' || choice == 'R')
			{
				right(grid);
			}
			else if (choice == 'd' || choice == 'D')
			{
				down(grid);
			}

			if (equal(grid, temp) == false)
			{
				rand_gen(grid);
			}
			system("CLS");
			Display(grid);
		}
		cout << endl;
		cout << endl;

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if (grid[i][j] == 1024)
				{
					cout << "0     0" << "      " << "00000 " << "    " << "00   00" << "            " << "0        0" << "  " << "000000000" << "  " << "00        0" << "  " << "    0    " << endl;
					cout << " 0   0" << "      " << "0000000" << "    " << "00   00" << "            " << "0        0" << "  " << "    0    " << "  " << "0 0       0" << "  " << "    0    " << endl;
					cout << "  000 " << "    " << " 000000000" << "   " << "00   00" << "            " << "0        0" << "  " << "    0    " << "  " << "0  0      0" << "  " << "    0    " << endl;
					cout << "   0  " << "    " << "00000000000" << "  " << "00   00" << "            " << "0        0" << "  " << "    0    " << "  " << "0   0     0" << "  " << "    0    " << endl;
					cout << "   0  " << "    " << "00000000000" << "  " << "00   00" << "            " << "0        0" << "  " << "    0    " << "  " << "0    0    0" << "  " << "    0    " << endl;
					cout << "   0  " << "    " << "00000000000" << "  " << "00   00" << "            " << "0   00   0" << "  " << "    0    " << "  " << "0     0   0" << "  " << "    0    " << endl;
					cout << "   0  " << "    " << "00000000000" << "  " << "00   00" << "            " << "0  0  0  0" << "  " << "    0    " << "  " << "0      0  0" << "  " << "    0    " << endl;
					cout << "   0  " << "     " << "000000000" << "   " << "00   00" << "            " << "0 0    0 0" << "  " << "    0    " << "  " << "0       0 0" << "  " << "         " << endl;
					cout << "   0  " << "    " << "  0000000  " << "  " << "0000000" << "            " << "00      00" << "  " << "000000000" << "  " << "0        00" << "  " << "    0    " << endl;
					cout << endl;
					check = false;
				}
			}
		}

		if (check == true)
		{
			cout << "0        0" << "  " << "        00        " << "  " << "0        0" << "  " << "        00        " << endl;
			cout << "0        0" << "  " << "       0  0       " << "  " << "0        0" << "  " << "       0  0       " << endl;
			cout << "0        0" << "  " << "      0    0      " << "  " << "0        0" << "  " << "      0    0      " << endl;
			cout << "0        0" << "  " << "     0      0     " << "  " << "0        0" << "  " << "     0      0     " << endl;
			cout << "0000000000" << "  " << "    0000000000    " << "  " << "0000000000" << "  " << "    0000000000    " << endl;
			cout << "0        0" << "  " << "   0          0   " << "  " << "0        0" << "  " << "   0          0   " << endl;
			cout << "0        0" << "  " << "  0            0  " << "  " << "0        0" << "  " << "  0            0  " << endl;
			cout << "0        0" << "  " << " 0              0 " << "  " << "0        0" << "  " << " 0              0 " << endl;
			cout << "0        0" << "  " << "0                0" << "  " << "0        0" << "  " << "0                0" << endl;
			cout << endl;
			cout << "0          " << "  " << "   000000   " << "  " << "000000000" << "  " << "000000000" << "  " << "0000000000 " << endl;
			cout << "0          " << "  " << "  0      0  " << "  " << "0        " << "  " << "0        " << "  " << "0         0" << endl;
			cout << "0          " << "  " << " 0        0 " << "  " << "0        " << "  " << "0        " << "  " << "0         0" << endl;
			cout << "0          " << "  " << "0          0" << "  " << "0        " << "  " << "0        " << "  " << "0         0" << endl;
			cout << "0          " << "  " << "0          0" << "  " << "000000000" << "  " << "000000000" << "  " << "0000000000 " << endl;
			cout << "0          " << "  " << "0          0" << "  " << "        0" << "  " << "0        " << "  " << "0         0" << endl;
			cout << "0          " << "  " << " 0        0 " << "  " << "        0" << "  " << "0        " << "  " << "0         0" << endl;
			cout << "0          " << "  " << "  0      0  " << "  " << "        0" << "  " << "0        " << "  " << "0         0" << endl;
			cout << "00000000000" << "  " << "   000000   " << "  " << "000000000" << "  " << "000000000" << "  " << "0         0" << endl;

		}
		system("pause");
		return 0;
	}
	else {
		system("pause");
		return 0;
	}
}

bool equal(int grid[][4], int temp[][4])
{
	bool check = true;
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (temp[x][y] != grid[x][y])
			{
				check = false;
				break;
			}
		}
	}
	return check;
}

bool termination(int grid[][4])
{
	bool check = true;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (grid[i][j] == 1024)
				return true;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (grid[i][j] == 0)
				return false;
		}
	}


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (i > 0 && j > 0 && i < 3 && j < 3)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i][j - 1] || grid[i][j] == grid[i + 1][j] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 0 && j == 0)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i + 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 3 && j == 3)
			{
				if (grid[i][j] == grid[i][j - 1] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 0 && j > 0 && j < 3)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i + 1][j] || grid[i][j] == grid[i][j - 1])
				{
					check = false;
					break;
				}
			}
			else if (j == 0 && i > 0 && i < 3)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i + 1][j] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 3 && j > 0 && j < 3)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i][j - 1] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
			else if (j == 3 && i > 0 && i < 3)
			{
				if (grid[i][j] == grid[i][j - 1] || grid[i][j] == grid[i + 1][j] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 0 && j == 3)
			{
				if (grid[i][j] == grid[i][j - 1] || grid[i][j] == grid[i + 1][j])
				{
					check = false;
					break;
				}
			}
			else if (i == 3 && j == 0)
			{
				if (grid[i][j] == grid[i][j + 1] || grid[i][j] == grid[i - 1][j])
				{
					check = false;
					break;
				}
			}
		}
		if (check == false)
			break;
	}


	return check;
}

void Display(int arr[][4])
{
	for (int i = 0; i < 4; i++)
	{
		cout << "---------------------" << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << "|";
			if (arr[i][j] == 0)
			{
				cout << "    ";
			}
			else
			{
				cout << setw(4) << arr[i][j];
			}
		}

		cout << "|" << endl;

	}
	cout << "---------------------" << endl;
}
void grid_intitial(int arr[][4])
{
	srand(time(0));
	int i = rand() % 4;
	int j = rand() % 4;
	arr[i][j] = rand() % 2 + 1;
	int x = rand() % 4;
	int y = rand() % 4;
	while ((x == i) && (y == j))
	{
		x = rand() % 4;
		y = rand() % 4;
	}
	arr[x][y] = rand() % 2 + 1;
}
void rand_gen(int arr[][4])
{
	srand(time(0));
	int i = rand() % 4;
	int j = rand() % 4;

	while (arr[i][j] != 0)
	{
		i = rand() % 4;
		j = rand() % 4;
	}
	arr[i][j] = rand() % 2 + 1;

}

void left(int arr[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (arr[i][j] != 0)
			{
				for (int x = j; x > 0; x--)
				{
					if (arr[i][x - 1] == 0)
					{
						arr[i][x - 1] = arr[i][x];
						arr[i][x] = 0;
					}
				}
			}
		}
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == arr[i][j + 1])
			{
				arr[i][j] = arr[i][j] + arr[i][j + 1];
				arr[i][j + 1] = 0;
			}

		}
		for (int j = 1; j < 4; j++)
		{
			if (arr[i][j] != 0)
			{
				for (int x = j; x > 0; x--)
				{
					if (arr[i][x - 1] == 0)
					{
						arr[i][x - 1] = arr[i][x];
						arr[i][x] = 0;
					}
				}
			}
		}
	}
}
void right(int arr[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j > -1; j--)
		{
			if (arr[i][j] != 0)
			{
				for (int x = j; x < 3; x++)
				{
					if (arr[i][x + 1] == 0)
					{
						arr[i][x + 1] = arr[i][x];
						arr[i][x] = 0;
					}
				}
			}
		}
		for (int j = 3; j > 0; j--)
		{
			if (arr[i][j] == arr[i][j - 1])
			{
				arr[i][j] = arr[i][j] + arr[i][j - 1];
				arr[i][j - 1] = 0;
			}

		}
		for (int j = 2; j > -1; j--)
		{
			if (arr[i][j] != 0)
			{
				for (int x = j; x < 3; x++)
				{
					if (arr[i][x + 1] == 0)
					{
						arr[i][x + 1] = arr[i][x];
						arr[i][x] = 0;
					}
				}
			}
		}
	}
}
void up(int arr[][4])
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 1; i < 4; i++)
		{
			if (arr[i][j] != 0)
			{
				for (int x = i; x > 0; x--)
				{
					if (arr[x - 1][j] == 0)
					{
						arr[x - 1][j] = arr[x][j];
						arr[x][j] = 0;
					}
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (arr[i][j] == arr[i + 1][j])
			{
				arr[i][j] = arr[i][j] + arr[i + 1][j];
				arr[i + 1][j] = 0;
			}

		}
		for (int i = 1; i < 4; i++)
		{
			if (arr[i][j] != 0)
			{
				for (int x = i; x > 0; x--)
				{
					if (arr[x - 1][j] == 0)
					{
						arr[x - 1][j] = arr[x][j];
						arr[x][j] = 0;
					}
				}
			}
		}
	}
}
void down(int arr[][4])
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 2; i > -1; i--)
		{
			if (arr[i][j] != 0)
			{
				for (int x = i; x < 4; x++)
				{
					if (arr[x + 1][j] == 0)
					{
						arr[x + 1][j] = arr[x][j];
						arr[x][j] = 0;
					}
				}
			}
		}
		for (int i = 3; i > 0; i--)
		{
			if (arr[i][j] == arr[i - 1][j])
			{
				arr[i][j] = arr[i][j] + arr[i - 1][j];
				arr[i - 1][j] = 0;
			}

		}
		for (int i = 2; i > -1; i--)
		{
			if (arr[i][j] != 0)
			{
				for (int x = i; x < 4; x++)
				{
					if (arr[x + 1][j] == 0)
					{
						arr[x + 1][j] = arr[x][j];
						arr[x][j] = 0;
					}
				}
			}
		}
	}
}