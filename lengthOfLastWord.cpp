// lien: https://leetcode.com/problems/length-of-last-word/description/

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

int lengthOfLastWord(string s)
{
  int i = 0;
  string stro = reverse(s);
  string waloo;
  while (stro[i] == ' ')
    i++;

  while (stro[i])
  {
    if(stro[i] == ' ')
      break;
    waloo += stro[i++];
  }
  return waloo.size();
}
