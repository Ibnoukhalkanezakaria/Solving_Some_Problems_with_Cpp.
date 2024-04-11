// lien: https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=top-100-liked

#include "header.h"

void moveZeroes(vector<int>& nums) 
{
  int i = 0;
  vector<int> numss;
  int count = 0;
  while (i < nums.size())
  {
    if(!(nums[i] == 0))
      numss.push_back(nums[i]);
    else
      count++;
    i++;
  }

  int j = 0;
  while (j < count)
  {
    numss.push_back(0);
    j++;
  }
  nums = numss;
}
