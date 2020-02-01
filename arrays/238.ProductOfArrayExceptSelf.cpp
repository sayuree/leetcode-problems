//The purpose is to solve in O(n) and without division;
//Find left products, find right products behind a particular element and multiply them to combine into resulting array
//The problem was the incomplete knowledge of C++
//Review vectors!
class Solution {
public:
     vector<int> productExceptSelf(vector<int>& nums) {
        //base case (n=2)
        int length=nums.size();
        vector<int> front(length);
        vector<int> back(length);
        vector<int> res(length);
        front[0]=1;
        back[0]=1;
        for(int i=1;i<nums.size();i++){
            front[i]=nums[i-1]*front[i-1];
            back[i]=nums[length-i]*back[i-1];
        }
        
        for(int i=0;i<nums.size();i++){
            res[i]=front[i]*back[length-i-1];
        }
        return res;
    }
};