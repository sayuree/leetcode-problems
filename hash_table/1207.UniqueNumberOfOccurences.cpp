//Set is a data structure that contains only unique elements
// Firstly, I count the number of occurences of each element by inserting into map: key-elements, value-their occurence in a vector
//Secondly, I insert the value of a map into a set, then repeated occurence will not be added, then the final size will differ from initial size
//Finally, if the size of a map and set does not match, it means that the number of occurences is not unique

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int element:arr){
            mp[element]++;
        }
        set<int> unique;
        for(auto const& kv:mp){
            unique.insert(kv.second);
        }
        if(unique.size()==mp.size()){
            return true;
        }
        return false;
    }
};