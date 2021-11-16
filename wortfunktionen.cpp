#include <iostream>
#include <string>
using namespace std;
#include "wortfunktionen.hpp"

void Wortfunktionen::wortspiegel(string &text, int pos)
{
    int pos1 = 0, pos2 = 0;
    if (pos == 0)
    {
        while (text.at(pos) != ' ' && text.at(pos) != '.' && pos != text.size() - 1)
        {
            pos++;
        }
        if(pos == text.size() - 1){
            pos2 = text.size() - 1;
        }else{
            pos2 = --pos;
        }
        
    }
    else if (pos == text.size() - 1)
    {
        while (text.at(pos) != ' ' && text.at(pos) != '.')
        {
            pos--;
        }
        pos1 = ++pos;
        pos2 = text.size() - 1;
    }
    else if(text.at(pos) != ' ' && text.at(pos) != '.')
    {
        while (text.at(pos) != ' ' && text.at(pos) != '.' && pos != 0)
        {
            pos--;
        }
        if(pos == 0){
            pos1 = 0;
        }else{
            pos1 = ++pos;
        }
        

        while (text.at(pos) != ' ' && text.at(pos) != '.' && pos != text.size())
        {
            pos++;
        }
        pos2 = --pos;
    }
    string spiegel = "";

    for (int v = pos2; v >= pos1; v--)
    {
        spiegel += text.at(v);
    }
    for (int i = 0; i < spiegel.size(); i++)
    {
        text.at(pos1 + i) = spiegel.at(i);
    }
}
