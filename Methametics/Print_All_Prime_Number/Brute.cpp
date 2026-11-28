
class Solution {
public:
    vector<int> primeTillN(int n) {
        vector<int> ans;

        for (int i = 2; i <= n; i++) {
            bool isPrime = true;

            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime == true) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};