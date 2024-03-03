// Datei: main.cpp

#include <iostream>
using namespace std;

#include "Address.h"
#include "Mail.h"
#include "Letter.h"

int main()
{
    // --- Briefe ---
    Address to("Boss, Anton", "Antonstr. 11", "23456 Hamburg");

    // Zwei Briefe ...
    Letter letter1(102030, EXPRESS), 
        letter2(203040, Address{}, to, STANDARD); 

    cout << "Die Briefe:" << endl << letter1 << letter2 << endl;

    cout << "Bitte Absender fuer Brief " << letter1.get_id() 
         << " eingeben:" << endl;
    if (!letter1.scan_from())
        cout << "Ungueltige Eingabe!" << endl;

    cout << "und der Empfaenger:" << endl;
    if (!letter1.scan_to())
        cout << "Ungueltige Eingabe!" << endl;

    cout << "Die neuen Daten des Briefs: \n" << letter1 << endl;

    cout << "Ein Versuch, den Brief auszuliefern:" << endl;
    if (letter1.deliver())
        cout << "Brief mit der ID " << letter1.get_id() 
             << " wurde ausgeliefert!\n" << endl;
    else
        cout << "Kein gueltiger Empfaenger!" << endl;

    system("PAUSE");
    return 0;

}
