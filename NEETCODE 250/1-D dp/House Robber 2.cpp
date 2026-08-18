#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp1(n);
        vector<int> dp2(n);

        //case 1 we don't include last element
        if(n==1){return nums[0];}
        dp1[0]=nums[0];
        
        dp1[1]=max(nums[1],nums[0]);
        if(n==2){return dp1[1];}
        for(int i=2;i<n;i++){
            dp1[i]=max(dp1[i-1],dp1[i-2]+nums[i]);
        }

        dp2[1]=nums[1];
        dp2[2]=max(nums[1],nums[2]);

        for(int i=3;i<n;i++){
            dp2[i]=max(dp2[i-1],dp2[i-2]+nums[i]);
        }

        return max(dp1[n-2],dp2[n-1]);
        
    }
};