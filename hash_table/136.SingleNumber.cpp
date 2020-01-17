//My O(n) space and O(n) time solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> temp;
        for(int item:nums){
            temp[item]++;
        }
        
        for(auto it=temp.begin();it!=temp.end();++it){
            if(temp.find(it->first)!=temp.end()){
                if(it->second==1){
                    return it->first;
                }
            }
        }
        return -1;
    }
};