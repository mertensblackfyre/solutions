#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>


int main (int argc, char *argv[])
{
    std::vector<int> nums = {1,2,1};
    std::vector<int> answer;

    std::copy(nums.begin(),nums.end(),std::back_inserter(answer));
    std::copy(nums.begin(),nums.end(),std::back_inserter(answer));


   return 0;
}
