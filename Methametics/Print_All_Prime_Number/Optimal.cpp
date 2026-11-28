
class Solution {
public:
    vector<int> primeTillN(int n) {
        vector<int> isPrime(n + 1, 1);
        vector<int> ans;

        isPrime[0] = 0;
        isPrime[1] = 0;
        

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i] == 1) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = 0;
                }
            }

        }

        
        for (int i = 2; i <= n; i++) {
            if (isPrime[i] == 1) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
