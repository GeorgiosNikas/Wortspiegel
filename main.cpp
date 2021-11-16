// Datei: wortspiegel_main.cpp
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include <string>
using namespace std;
#include "wortfunktionen.hpp"
#include "bildschirm.hpp"
int main()
{
    string text = "";
    char operation = ' ';
    int pos = 0;
    // Aufruf der Unit Tests ...
    Catch::Session().run();
    // Ab hier ihr Code ...
    //
    // 1. Eingabe der Textzeile
    cout << "Bitte geben Sie den Text ein: ? ";
    getline(cin,text);
    // 2. Endlosschleife:
    while (operation != 'q')
    {
        // 2a. Ausgabe der Textzeile und der Zeile mit dem Sternchen
        Bildschirm::ausgabe(text, pos);
        // 2b. Abfrage der Kommandoeingabe
        operation = Bildschirm::eingabe();
        // 2c. Auswertung des eingegebenen Kommandos
        if (operation == 'l' && pos > 0)
        {
            pos--;
        }
        else if (operation == 'r' && pos < text.size() - 1)
        {
            pos++;
        }
        // Insbes. Aufruf der wortspiegel() Funktion beim Kommando 's'
        else if (operation == 's')
        {
            Wortfunktionen::wortspiegel(text, pos);
        }
    }
    return 0;
}
