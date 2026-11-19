
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        // Step 1: Count
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                cnt0++;
            else if(nums[i] == 1)
                cnt1++;
            else
                cnt2++;
        }

        // Step 2: Fill zeros
        for(int i = 0; i < cnt0; i++) {
            nums[i] = 0;
        }

        // Step 3: Fill ones
        for(int i = cnt0; i < cnt0 + cnt1; i++) {
            nums[i] = 1;
        }

        // Step 4: Fill twos
        for(int i = cnt0 + cnt1; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};
