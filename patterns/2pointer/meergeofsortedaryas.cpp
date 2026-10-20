#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int id = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[id--] = nums1[i--];
            } else {
                nums1[id--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[id--] = nums2[j--];
        }
    }
};

int main()
{
    

    /*
        88. Merge Sorted Array

        You are given two integer arrays nums1 and nums2, sorted in
        non-decreasing order, and two integers m and n, representing the
        number of elements in nums1 and nums2 respectively.

        Merge nums1 and nums2 into a single array sorted in non-decreasing
        order. Store the result in nums1. nums1 has length m + n; its first m
        elements are the values to merge, and its last n elements are 0 and
        should be ignored. nums2 has length n.

        Example 1:
        Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
        Output: [1,2,2,3,5,6]
        Explanation: The arrays being merged are [1,2,3] and [2,5,6].

        Example 2:
        Input: nums1 = [1], m = 1, nums2 = [], n = 0
        Output: [1]

        Example 3:
        Input: nums1 = [0], m = 0, nums2 = [1], n = 1
        Output: [1]
        Explanation: nums1 has no values to merge; its 0 is only there to
        ensure the result can fit in nums1.

        Constraints:
        - nums1.length == m + n
        - nums2.length == n
        - 0 <= m, n <= 200
        - 1 <= m + n <= 200
        - -10^9 <= nums1[i], nums2[j] <= 10^9

        Follow-up: Can you come up with an algorithm that runs in O(m + n)
        time?
    */

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    Solution().merge(nums1, 3, nums2, 3);
    assert((nums1 == vector<int>{1, 2, 2, 3, 5, 6}));
}