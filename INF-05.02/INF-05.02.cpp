// INF-05.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void sudokuStringfromTxtfile();

int main()
{
	int l = 0, k = 0;
	int sudoku[9][9] = { 0 };
	string eingabe[11] = { "" };

	sudokuStringfromTxtfile();

	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (int i = 0; i < 11; i++)
	{
		cin >> eingabe[i];
	}

	//string to sudoku
	for (int i = 0; i < 11; i++)	//geht linien des strings durch
	{
		k = 0;
		for (int j = 0; j < eingabe[i].length(); j++)	//geht jedes symbol des string
		{
			if (isdigit(eingabe[i][j])) //wenn es ein Ziffer ist wird es in den array an der richtigen stelle gespeichert
			{
				sudoku[l][k] = eingabe[i][j] - '0';
				k++;     //x achse von Sudoku
				if (k > 8)
				{
					l++;
				}
			}
		}
	}
	//sudoku wird von sudoku[][] array angezeigt
	cout << "Das Sudoku lautet:" << endl;
	for (int i = 0; i < 9; i++)
	{
		if (i == 3 || i == 6)
		{
			cout << "=======//=======//=======" << endl;
		}
		for (int j = 0;j < 9; j++)
		{
			cout << ';' << sudoku[i][j];
			if (j == 2 || j == 5) { cout << ";//"; }
		}
		cout << '\n';
	}
	return 0;
}

void sudokuStringfromTxtfile() {

	string line;
	ifstream myfile("Text.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	cout << '\n' << "============================" << endl;
}