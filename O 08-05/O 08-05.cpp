#include <iostream>
#include <string>

using namespace std;
//not working
struct w_haeufigkeit {
	char* wort;
	unsigned int haeufigkeit;
};
unsigned int my_strlen(const char* const str)
{
	int i = 0;
	while (str[i]!='\0')
	{
		i++;
	}
	return i;
}
int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
			return -1;
	}
	return 0;
}
char* naechstes_wort(const char* const zeile,
	unsigned int& pos)
{
	char* back = new char[1000];
	int x = 0;
	if (zeile[pos] != '\0')
	{

		for (int i = pos; i < my_strlen(zeile); i++)
		{
			if (i > 0)
			{
				x = 1;
			}
			if (zeile[i] != ' ' && zeile[i] != '.' && zeile[i] != ',')
			{
				back += zeile[i];
				back += '\0';

			}
			if (back != "" && (zeile[i] == ' ' && zeile[i - x] != ' ' || zeile[i] == '.' && zeile[i] == ',' && zeile[1-i] != '.' && zeile[i-1] != ',' == false || i == my_strlen(zeile) - 1))
			{
				pos = i + 1;
				return back;
			}
		}
	}
	return back;
}
void zaehle_wort(char* wort,
	struct w_haeufigkeit w_haeufigkeiten[],
	unsigned int& w_count)
{
	for (int i = 0; i <= w_count; i++)
	{
		if (w_haeufigkeiten[i].wort == wort)
		{
			w_haeufigkeiten[i].haeufigkeit++;
			return;
		}
	}
	if (w_haeufigkeiten[w_count].wort != wort)
	{
		w_haeufigkeiten[w_count].wort = wort;
		w_haeufigkeiten[w_count].haeufigkeit = 1;
		w_count++;

	}

}
int main()
{
	int z_count = 0;
	unsigned int w_count = 0;
	const unsigned int eingabezeilen_max = 5;
	const unsigned int wort_max = 1000;
	const unsigned int max_line_length = 80;
	char *wort = new char[wort_max];
	char eingabe[eingabezeilen_max][max_line_length];
	for (int i = 0; i < eingabezeilen_max; i++)
	{
		cout << "Eingabezeile = ? ";
		cin.getline(eingabe[i], max_line_length);
		if (eingabe[i][0] == '\0') { break; }
		z_count++;

	}
	w_haeufigkeit haeufigkeiten[1000];
	for (int k = 0; k < z_count; k++)
	{
		unsigned int pos = 0;
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