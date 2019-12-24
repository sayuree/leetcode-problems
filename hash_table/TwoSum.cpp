
// O(n^2) solution, no use of data structures;
//faster than 16.50% of C++ online submissions
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size();
        vector<int> result;
        for(int i=0;i<length;++i){
            for(int j=i+1;j<length; ++j){
                if(target-nums[i]==nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

//O(n) solution, using hash map 
//faster than 65.90% of C++ online submissions
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int length= nums.size();
    vector <int> result;
    map<int,int> container;
        for(int i=0;i<length;i++){
            container[nums[i]]=i;            
        }
        int temp=0;
        for(int j=0;j<length;++j){
            temp=target-nums[j];
            if(container.find(temp)!=container.end()&& container.find(target-nums[j])->second!=j){
                result.push_back(j);
                result.push_back(container.find(temp)->second);
                break;
            }
    
               }
        return result;
    }
};