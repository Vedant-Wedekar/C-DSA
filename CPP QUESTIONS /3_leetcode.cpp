////////////////////////////////////////////////////////////////////////////////////
                        //   majority number 169



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int freq = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};

// Test the function
int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = sol.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}




// In this problem, you're given a list of numbers, and the task is to find the majority
//  element—the number that appears more than half the time in the list. The approach used
//   here is simple: it keeps track of a potential majority candidate and counts how often 
//   it sees that number. If it encounters a different number, it reduces the count. When 
//   the count reaches zero, it picks the next number as the new candidate. By the end,
//    the number that has survived this process is the majority element, as it appears more
//     than half the time in the list.
























