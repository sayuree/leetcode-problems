//My solution
//O(n) time and O(n) space
class Solution {
public:
    int calPoints(vector<string>& ops) {
    stack<int> temp;
    int result=0;
    int factor=2;
        for(string str:ops){
           if(str=="C"){
               int red=temp.top();
               temp.pop();
               result-=red;
           } else if(str=="D"){
               result+=temp.top()*factor;
               temp.push(temp.top()*factor);
           }else if(str=="+"){
               int tmp1=temp.top();
               temp.pop();
               int tmp2=temp.top();
               temp.pop();
               temp.push(tmp2);
               temp.push(tmp1);
               result+=tmp1+tmp2;  
               temp.push(tmp1+tmp2);
           }else{
               temp.push(stoi(str));
               result+=temp.top();
           }
        }
        return result;
    }
};