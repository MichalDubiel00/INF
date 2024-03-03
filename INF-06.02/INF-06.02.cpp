#include <iostream>
#include <string>
#include <fstream>



using namespace std;

const int sudoku_groesse = 9;
const int eingabe_groesse = 11;

bool pruefe_spalten(int sudoku[][sudoku_groesse]);
bool pruefe_zeilen(int sudoku[][sudoku_groesse]);
bool pruefe_bloecke(int sudoku[][sudoku_groesse]);
void konvertiere(string eingabe[], int sudoku[][sudoku_groesse]);
void sudokuStringfromTxtfile();

int main()
{

	int sudoku[sudoku_groesse][sudoku_groesse] = { 0 };
	string eingabe[eingabe_groesse] = { "" };

	sudokuStringfromTxtfile();

	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (int i = 0; i < eingabe_groesse; i++)
		getline(cin, eingabe[i]);

	konvertiere(eingabe, sudoku);
	bool ps = pruefe_spalten(sudoku);
	bool pz = pruefe_zeilen(sudoku);
	bool pb = pruefe_bloecke(sudoku);
	if (ps && pz && pb)


		cout << "Das Sudoku ist gueltig." << endl;
	system("PAUSE");

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

void konvertiere(string eingabe[], int sudoku[][sudoku_groesse])
{
	int l = 0, k = 0;

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
}

bool pruefe_spalten(int sudoku[][sudoku_groesse])
{
	bool back = true;
	for (int i = 0; i < sudoku_groesse; i++) //for schleife fuer jede spalte
	{
		bool einzeln[sudoku_groesse + 1] = { false }; //wenn ein zahl vor kommt wird der bool[] true gesetzt
		for (int j = 0; j < sudoku_groesse; j++) //for schleife fuer jede zahl in der spalte
		{
			int Num = sudoku[j][i];
			if (einzeln[Num])  //wenn die zahl schon true ist wird fasle widergegeben mit der spaltenanzahl und der Zahl
			{
				cout << "Spalte " << i << ": Zahl " << Num << " kommt mehrfach vor." << endl;
				back = false;
			}
			einzeln[Num] = true; //das Array wird true an der stelle von der Zahl

		}
		for (int j = 1; j < 10; j++) //for schleige geht alle zahlen von 1-9
		{
			if (einzeln[j] == false) //wenn die array stelle von der zahl false ist bedeutet es das die nummer nicht gab
			{
				cout << "Spalte " << i << ": Zahl " << j << " kommt nicht vor." << endl;
				back = false;
			}
		}

	}
	return back;
}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
	bool back = true;
	for (int i = 0; i < sudoku_groesse; i++)
	{
		bool einzeln[sudoku_groesse + 1] = { false };
		for (int j = 0; j < sudoku_groesse; j++)
		{
			int Num = sudoku[i][j];
			if (einzeln[Num])
			{
				cout << "Zeile " << i << ": Zahl " << Num << " kommt mehrfach vor." << endl;
				back = false;
			}
			einzeln[Num] = true;

		}
		for (int j = 1; j < 10; j++)
		{
			if (einzeln[j] == false)
			{
				cout << "Zeile " << i << ": Zahl " << j << " kommt nicht vor." << endl;
				back = false;
			}
		}

	}
	return back;
}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
	bool back = true;
	int block = 0;
	for (int i = 0; i < sudoku_groesse; i += 3)			// schleifen fuer jedes block 3x3
	{													//			
		for (int j = 0; j < sudoku_groesse; j += 3)		//
		{
			bool einzeln[sudoku_groesse + 1] = { false };
			for (int k = 0; k < 3; k++)					//schleife fuer jede zeile in den block
			{											//
				for (int l = 0; l < 3; l++)				//schleife fur jede zahl in der zeile
				{
					int X = i + k;
					int Y = j + l;
					int Num = sudoku[X][Y];
					if (einzeln[Num])
					{
						cout << "Block " << block << ": Zahl " << Num << " kommt mehrfach vor." << endl;
						back = false;
					}
					einzeln[Num] = true;
				}
			}
			for (int k = 1; k < 10; k++)
			{
				if (einzeln[k] == false)
				{
					cout << "Block " << block << ": Zahl " << k << " kommt nicht vor." << endl;
					back = false;
				}
			}
			block++;
		}

	}
	return back;
}
