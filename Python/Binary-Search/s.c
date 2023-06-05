#include <math.h>
#include <stdio.h>

int main() {
  int nums[] = {1, 3, 5, 6};
  int target = 2;

  int low = 0;
  int high = sizeof(nums) / sizeof(nums[0]);
  int count = 0;

  do {
    int middle = floor(low + (high - low) / 2);
    int value = nums[middle];

    if (value == target)
    {
      printf("%d",middle);
      return middle;
    }
    if (value > target) {
      high = middle;
      count++;
    }

    else
      low = middle + 1;
  } while (low < high);

};
