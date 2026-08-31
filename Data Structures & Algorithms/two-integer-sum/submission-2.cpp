class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> var;
        int l=nums.size();
        for(int i=0;i<l;i++){
            var[nums[i]]=i;
        }
        
        for(int i=0;i<l;i++){
            int diff=target-nums[i];
            if(var.find(diff)!=var.end() and i!=var[diff]){
                return {i,var[diff]};
            }
        }
    }


};
