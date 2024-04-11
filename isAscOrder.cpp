// lien: https://www.codewars.com/kata/56b7f2f3f18876033f000307/solutions/cpp

#include "header.h"

bool isAscOrder(std::vector<int> arr)
{
  int i = 0;
  int index = 0;
  int count = 0;
  while (i < arr.size())
  {
    if(arr[index] < arr[index + 1])
      index += 1;
    else if(arr[index] > arr[index + 1])
      count++;
    i++;
  }
  if(count > 1)
    return false;
  return true;
}
