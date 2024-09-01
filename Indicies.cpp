#include <iostream>
#include <vector>

using namespace std;

vector<int> findTwoSum(const vector<int>& nums, int target) {
    // Iterate through each pair of elements
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) { // Check if the sum equals the target
                return {i, j}; // Return the indices
            }
        }
    }
    return {}; // Return an empty vector if no solution is found
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = findTwoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
