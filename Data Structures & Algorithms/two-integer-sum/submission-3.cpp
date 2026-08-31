class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sum;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if(sum.count(target-nums[i])){
                return{sum[target-nums[i]],i};
            }
            sum[nums[i]]=i;

        }
        return {};
    }
};
