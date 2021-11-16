#include <iostream>
#include <string>
using namespace std;
#include "bildschirm.hpp"


void Bildschirm::ausgabe(string text, int pos)
{
 
    cout << text << endl;
   string stern = "*";
   for(int i = 0; i < pos; i++)
   {
       stern = " " + stern;
   }
   cout << stern << endl;
}
char Bildschirm::eingabe()
{
    char input = ' ';
    cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
    cin >> input;
    return input;
}