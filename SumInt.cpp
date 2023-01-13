#include <iostream>
#include <algorithm>
using namespace std;

// Function to find a pair in an array with a given sum using sorting
void findPair(int nums[], int n, int target)
{
	// sort the array in ascending order
	sort(nums, nums + n);

	// maintain two indices pointing to endpoints of the array
	int low = 0;
	int high = n - 1;

	// reduce the search space `nums[low…high]` at each iteration of the loop

	// loop till the search space is exhausted
	while (low < high)
	{
		// sum found
		if (nums[low] + nums[high] == target)
		{
			cout << "Pair found (" << nums[low] << ", " << nums[high] << ")" << endl;
			return;
		}

		// increment `low` index if the total is less than the desired sum;
		// decrement `high` index if the total is more than the desired sum
		(nums[low] + nums[high] < target)? low++: high--;
	}

	// we reach here if the pair is not found
	cout << "Pair not found";
}

int main()
{
	int nums[] = { 8, 7, 2, 5, 3, 1 };
	int target = 10;

	int n = sizeof(nums)/sizeof(nums[0]);

	findPair(nums, n, target);

	return 0;
}
