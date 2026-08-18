#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(101);
        dp[0]=nums[0];
        if(n>1){dp[1]=max(nums[0],nums[1]);}
        if(n>2){
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }}
        return dp[n-1];
        }
        
    
};