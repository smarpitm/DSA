#include <cassert>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> twoSumWithDuplicates(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<vector<int>> answer;
        while (left<right)
        {
            if (nums[left]+nums[right]>target)
            {
                right--;
            }
            else if(nums[left]+nums[right]==target)
            {
                answer.push_back({nums[left], nums[right]});
                while(left<right)
                {
                    while (nums[left] == nums[left + 1])
                    {
                        left++;
                    }
            while (nums[right]==nums[right-1])
            {
                right--;
            }

                }
               
            }
            else if (nums[left]+nums[right]<target){
                left++;
            }
        }
       
        return answer;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4};
    assert((Solution().twoSumWithDuplicates(nums, 5) ==
            vector<vector<int>>{{1, 4}, {2, 3}}));
}
