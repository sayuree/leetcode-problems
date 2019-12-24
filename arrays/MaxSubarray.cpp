//My O(n^2) brute-force solution
//Runtime: 308 ms, faster than 5.04% of C++ online submissions 
//Memory Usage: 9.3 MB, less than 74.51% of C++ online submissions  
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();++i){
            int sum=0;
            for(int j=i;j<nums.size();++j){
                sum+=nums[j];
                if(sum>max){
                    max=sum;
                }
            }
        }
        return max;
    }
};