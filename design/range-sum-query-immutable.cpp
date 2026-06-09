class NumArray {
public:
vector<int> sum;
    NumArray(vector<int>& nums) {
        // this is a constructor that will initialiaze the nums vector  
        sum.push_back(nums[0]);
        int ans = nums[0];
        for(int i = 1;i<nums.size();i++){
            ans +=nums[i];
            sum.push_back(ans);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return sum[right];
        }
        return sum[right]-sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */