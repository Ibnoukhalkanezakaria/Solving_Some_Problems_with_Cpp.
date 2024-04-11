// lien: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/solutions/cpp

#include "header.h"

using namespace std;

string  reverse(string const &ending)
{
    string s;
    int j = ending.size() - 1;
    while (j >= 0)
        s += ending[j--];
    return s;
}

bool solution(string const &str, string const &ending)
{

    if(str == "" || ending == "")
        return true;
    string s = reverse(ending);
    string y;

    int i = str.size() - 1;
    int size1 = str.size();
    int size2 = s.size();
    int team = size1 - size2;
    while (i >= team)
        y += str[i--];
    
    if(s == y)
        return true;
    return false;
}
