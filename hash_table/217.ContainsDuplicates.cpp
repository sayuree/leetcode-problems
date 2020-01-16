//My O(n) space and  O(n) time solution
//Just using the property of Set DS
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int item:nums){
            if(check.size()>0&&check.find(item)!=check.end()){
                return true; 
            }
            check.insert(item);
        }
        return false;
    }
};