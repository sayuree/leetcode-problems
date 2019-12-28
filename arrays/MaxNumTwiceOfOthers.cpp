//My O(n) solution
//Multiply rather than divide for the cases of [0,0,0,1]
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxNum=INT_MIN;
        int ind=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>maxNum){
                maxNum=nums[i];
                ind=i;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();++i){
            if(maxNum>=2*nums[i]){
                count++;
            }
        }
        if(count==nums.size()-1){
            return ind;
        }
        return -1;
    }
};