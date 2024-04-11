// lien: https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/solutions/cpp

#include "header.h"

using namespace std;

bool containeTarget(const string& in, char c)
{
    int i = 0;
    while (in[i])
    {
        if(in[i] == c)
            return true;
        i++;
    }
    return false;
}

string to_lower(const string& in)
{
    string s;

    int i = 0;
    while(in[i])
    {
        if(in[i] >= 'A' && in[i] <= 'Z')
            s += in[i] + 32;
        else
             s += in[i];
        i++;
    }
    return s;
}

size_t duplicateCount(const string& in)
{
    int count = 0;
    string s;
    string y;
    string kalma = to_lower(in);
    
    int i = 0;
    while (kalma[i])
    {
        if(containeTarget(s, kalma[i]) == false)
            s += kalma[i];
        else
        {
            if(containeTarget(y, kalma[i]) == false)
            {
                y += kalma[i];
                count++;
            }
        }
        i++;
    }
    return count;
}
