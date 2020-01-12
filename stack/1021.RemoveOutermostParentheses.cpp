//O(n) time and O(n) space using Stack
//There is need to remove only outermost layer: No need to deal with nestedness

class Solution {
public:
    string removeOuterParentheses(string S) {
      stack<char> temp;
        string res="";
        for(char c:S){
            if(c=='('){
                if(temp.size()>0){
                    res+=c;
                }
                temp.push(c);
            }else{
                if(temp.size()>1){
                    res+=c;
                }
                temp.pop();
            }
                
        }
        return res;
    }
};