
//My O(n+m) solution , too slow: need to optimize
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> jewel;
        for(int i=0;i<J.size();++i){
            jewel[J[i]]=i;
        }
        int count=0;
        for(int i=0;i<S.size();++i){
            if(jewel.find(S[i])!=jewel.end()){
                count++;
            }
        }
        return count;
    }
};