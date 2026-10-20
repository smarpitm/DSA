#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int& num : nums) {
            num *= num;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

class Solution2 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> negative;
        vector<int> positive;

        for (int num : nums) {
            if (num > 0) {
                positive.push_back(num);
            } else {
                negative.push_back(num);
            }
        }

        for (int& num : negative) {
            num *= num;
        }
        reverse(negative.begin(), negative.end());

        for (int& num : positive) {
            num *= num;
        }

        int negativeSize = static_cast<int>(negative.size());
        negative.resize(negative.size() + positive.size());
        int i = negativeSize - 1;
        int j = static_cast<int>(positive.size()) - 1;
        int id = static_cast<int>(negative.size()) - 1;

        while (i >= 0 && j >= 0) {
            if (negative[i] > positive[j]) {
                negative[id--] = negative[i--];
            } else {
                negative[id--] = positive[j--];
            }
        }

        while (j >= 0) {
            negative[id--] = positive[j--];
        }

        return negative;
    }
};

class Solution3 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int& num : nums) {
            num *= num;
        }

        int i = 0;
        int j = static_cast<int>(nums.size()) - 1;
        while (j >= 0) {
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);
            }
            --j;
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};

class Solution4 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> result(n);
        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; --i) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                result[i] = leftSquare;
                ++left;
            } else {
                result[i] = rightSquare;
                --right;
            }
        }

        return result;
    }
};

int main() {
    /*
        977. Squares of a Sorted Array

        Given an integer array nums sorted in non-decreasing order, return an
        array of the squares of each number sorted in non-decreasing order.

        Example 1:
        Input: nums = [-4,-1,0,3,10]
        Output: [0,1,9,16,100]
        Explanation: After squaring, the array becomes [16,1,0,9,100].
        After sorting, it becomes [0,1,9,16,100].

        Example 2:
        Input: nums = [-7,-3,2,3,11]
        Output: [4,9,9,49,121]

        Constraints:
        - 1 <= nums.length <= 10^4
        - -10^4 <= nums[i] <= 10^4
        - nums is sorted in non-decreasing order.
    */

    // Example: [-4,-1,0,3,10] -> [0,1,9,16,100]
    vector<int> nums = {-4, -1, 0, 3, 10};
    assert((Solution().sortedSquares(nums) == vector<int>{0, 1, 9, 16, 100}));

    vector<int> nums2 = {-4, -1, 0, 3, 10};
    assert((Solution2().sortedSquares(nums2) == vector<int>{0, 1, 9, 16, 100}));

    vector<int> nums3 = {-4, -1, 0, 3, 10};
    assert((Solution3().sortedSquares(nums3) == vector<int>{0, 1, 9, 16, 100}));

    vector<int> nums4 = {-4, -1, 0, 3, 10};
    assert((Solution4().sortedSquares(nums4) == vector<int>{0, 1, 9, 16, 100}));
}