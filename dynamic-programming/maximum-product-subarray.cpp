class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // so this problem is based on maximum product's subarray based on kadane's algo on product subarray 
        // we have to maintain the maximum and minimum sum till current index since the neg no. can flip the whole game and become the largest one 
        // lets continue
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxi,mini);
            }
            maxi=max(nums[i],maxi*nums[i]);
            mini=min(nums[i],mini*nums[i]);
            ans = max(ans,maxi);
        }
        return ans;
    }
};