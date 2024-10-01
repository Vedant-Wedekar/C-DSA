////////////////////////////////////////////////////////////////////////////////////////////////////////
                            // maxSubArray --53 number 


#include <iostream>
#include <vector>
#include <climits>
using namespace std;







class Solution {
public:
    int maxsubarray( vector<int>& nums){
        int cursum= 0 ; 
        int   maxsum = INT_MIN; 
        for ( int value  : nums ){
            cursum+=value;
            maxsum= max(cursum,maxsum);
             if(cursum<0){
                cursum=0;
             }
        }
        return  maxsum; 
    }
};
// Test the function
int main() {
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = sol.maxsubarray(nums);
    cout << "Max SubArray Sum: " << result << endl;
    return 0;
}

// ///          easy explaination for revison  
// Alright! So, imagine you have a bunch of numbers, and you're trying to figure out the biggest
//  treasure you can find by adding some of them together. But there's a rule: you can only pick numbers 
//  that are next to each other in the line.

// For example, if the numbers are like this:
// [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// You want to find the group of numbers that gives you the biggest result when you add them together.
//  Sometimes, you might skip numbers if they make your total smaller, like the negative ones that take away from your total.
//   You want the biggest possible sum, like finding the biggest candy pile!

// So, the goal is to keep looking at groups of numbers to find which group has the highest total.
//  That's what the question is asking: find the biggest sum from a group of numbers that are next to each other.
