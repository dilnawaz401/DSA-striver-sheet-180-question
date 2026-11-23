// time complexity: O(n^2), space complexity: O(1)




class Solution
{
public:
    int trap(vector<int> &height) {

        int n = height.size();
        int totalWater = 0;

        for(int i = 0; i < n; i++) {

            int leftMax = 0;
            int rightMax = 0;

            // Find maximum height on left
            for(int j = 0; j <= i; j++) {
                leftMax = max(leftMax, height[j]);
            }

            // Find maximum height on right
            for(int j = i; j < n; j++) {
                rightMax = max(rightMax, height[j]);
            }

            // Calculate trapped water
            int water = min(leftMax, rightMax) - height[i];

            totalWater += water;
        }

        return totalWater;
    }
};
