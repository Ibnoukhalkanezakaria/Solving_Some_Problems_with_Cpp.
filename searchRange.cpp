// lien: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=study-plan-v2&envId=top-100-liked

#include "header.h"

bool  containe(vector<int>& nums, int target)
{
  int i = 0;
  while(i < nums.size())
  {
    if(nums[i] == target)
      return true;
    i++;
  }
  return false;
}

vector<int> searchRange(vector<int>& nums, int target)
{
  vector<int> indexazzzz;
  vector<int> error = {-1, -1};

  if(containe(nums, target) == false)
    return error;

  int i = 0;
  int start = 0;
  int end = 0;
  int check = true;
  int check2 = true;
  while (i <= nums.size() - 1)
  {
    if((nums[i] == target) && check)
    {
      start = i;
      check = false;
    }
    i++;
  }
  i = nums.size() - 1;
  while (i >= 0)
  {
    if((nums[i] == target) && check2)
    {
      end = i;
      check2 = false;
    }
    i--;
  }

  indexazzzz.push_back(start);
  indexazzzz.push_back(end);

  return indexazzzz;
}
