#include <bits/stdc++.h>

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long  bad_pairs = 0;
        for(int j = 1; j<=nums.size(); ++j){
            for(int i = 0; i<j; ++i){
                int a1 = j-i;
                int a2 = nums[j] - nums[i];
                if(a1 != a2){
                    bad_pairs += 1;
                }
            }
        }
        return bad_pairs;
    }
};