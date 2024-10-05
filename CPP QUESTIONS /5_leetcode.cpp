
// Problem Number: 11
// Problem Name: Container With Most Water




#include <iostream>
#include <vector>
#include <algorithm> // for std::min and std::max

int maxArea(std::vector<int>& height) {
    int maxWater = 0; // answer
    int lp = 0, rp = height.size() - 1; // corrected lp initialization

    while (lp < rp) {
        int width = rp - lp; // width between the two pointers
        int ht = std::min(height[lp], height[rp]); // minimum height between the two pointers
        int currWater = width * ht; // current water area
        maxWater = std::max(maxWater, currWater); // update max water area

        // move the pointer with the smaller height
        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main() {
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // sample input
    std::cout << "Max Water: " << maxArea(height) << std::endl;
    return 0;
}
