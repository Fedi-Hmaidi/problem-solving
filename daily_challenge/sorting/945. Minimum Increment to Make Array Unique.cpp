#include <bits/stdc++.h>
using namespace std;

//complexity: O(nlogn)
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int mvs  = 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] >= nums[i]){
                mvs += nums[i-1] - nums[i] + 1;
                nums[i] = nums[i-1]+1;
            }
        }
        return mvs;

    }
};


