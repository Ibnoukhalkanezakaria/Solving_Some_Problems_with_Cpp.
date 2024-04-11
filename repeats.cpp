// lien: https://www.codewars.com/kata/59f11118a5e129e591000134/train/cpp

#include "header.h"

using namespace std;

int repeats(vector<int>v)
{
  sort(v.begin(), v.end());
  vector<int>y;
  int i = 0;
  int index = 0;
  int check = true;
  int start = 0;
  int n = v.size() - 1;
  int data = 0;

  while (i <= n )
  {
    if(v[index] == v[index + 1])
    {
      if(index < n - 1)
        index += 2;
    }
    else if(v[index] != v[index + 1])
    {
      if(index <= n)
      {
        y.push_back(v[index]);
        index += 1;
      }
    }
    i++;
  }

  int j = 0;
  while (j <= y.size() - 1)
    data += y[j++];
  return data;
}
