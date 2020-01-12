//My NOT very efficient solution 
//O(n+m) time and O(n) space
//Pushing into stack and checking whether it matches with upcoming element
//Then concatenating final elements of a stack into new string
//Then reverse it (due to FIFO nature of Stack DS)
class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> temp;
        string res="";
        for(char c:S){
            if(temp.size()>0&&c==temp.top()){
                temp.pop();
            }else{
                temp.push(c);
            }
        }
        while(!temp.empty()){
            res+=temp.top();
            temp.pop();
        }
        reverse(res.begin(),res.end());
        
        return res;
    }
};