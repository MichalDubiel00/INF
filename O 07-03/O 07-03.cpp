#include <iostream>
#include <string>

using namespace std;

struct w_haeufigkeit {
	string wort;
	int haeufigkeit;
};
string naechstes_wort(string zeile, int& pos)
{
	string back = { "" };
	int x= 0;
	if (zeile[pos]!='\0')
	{

		for (int i = pos; i < zeile.length(); i++)
		{
			if (i > 0)
			{
				x = 1;
			}
			if (isspace(zeile[i]) == false && ispunct(zeile[i]) == false)
			{
				back += zeile[i];
			}
			if (back != "" && (isspace(zeile[i]) && zeile[i - x] != ' ' || ispunct(zeile[i]) && ispunct(zeile[i - x]) == false || i == zeile.length() - 1))
			{
				pos = i + 1;
				return back;
			}
		}
	}
	return back;
}
void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int& w_count)
{
	for (int i = 0; i <= w_count; i++)
	{
		if (haeufigkeiten[i].wort == wort)
		{
			haeufigkeiten[i].haeufigkeit++;
			return;
		}
	}
	if (haeufigkeiten[w_count].wort != wort)
	{
		haeufigkeiten[w_count].wort = wort;
		haeufigkeiten[w_count].haeufigkeit = 1;
		w_count++;

	}

}
int main()
{
	int z_count = 0, w_count = 0;
	string wort = "";
	string eingabe[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, eingabe[i]);
		if (eingabe[i].empty()) { break; }
		z_count++;

	}
		w_haeufigkeit haeufigkeiten[1000];
		for (int k = 0; k < z_count; k++)
		{
			int pos = 0;
			while (true)
			{
				wort = naechstes_wort(eingabe[k], pos);
				if (wort == "")
					break;
				zaehle_wort(wort, haeufigkeiten, w_count);
			}
		}
	
	for (int k = 0; k < w_count; k++)
		cout << haeufigkeiten[k].wort << ": "
		<< haeufigkeiten[k].haeufigkeit << endl;
	system("PAUSE");
	return 0;
}