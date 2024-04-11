// lien: https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include "header.h"

string mergeAlternately(string word1, string word2)
{
  string s;

  int i = 0;
  int check = true;
  int size1 = word1.size();
  int size2 = word2.size();
  while (word1[i])
  {
    int j = 0;
    while (word2[j])
    {
      if(j == i)
      {
        s += word1[i];
        s += word2[j];
      }
      j++;
    } 
    i++;
  }

  if(size2 > size1)
  {
    int k = size1;
    while (word2[k])
      s += word2[k++];
  }
  else 
  {
    int k = size2;
    while (word1[k])
      s += word1[k++];
  }
  return s;
}
