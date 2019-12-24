// My Solution that doesn't work on all test cases
// doesn't work on "([)"/"((()(())))"
//I have tried to match test cases instead of coming up with general algorithm
class Solution {
public:
    bool isValid(string s) {
        bool answer;
        int length=s.size();
        if(s.size()==0){
            return true;
        }

        for(int i=0;i<length-(length/2);++i){
            if((s[i]=='('&& s[length-1-i]==')')||(s[i]=='{'&& s[length-1-i]=='}')||(s[i]=='['&& s[length-1-i]==']')){
                answer=true;
                cout<<"I am in first case "<<i<<" Answer "<<answer<<endl;
            }
            else if((i%2==0)&&(i<length-1)&&((s[i]=='('&& s[i+1]==')')||(s[i]=='{'&& s[i+1]=='}')||(s[i]=='['&& s[i+1]==']'))){
                answer=true;
                cout<<"I am in second case "<<i<<" Answer "<<answer<<endl;
            }else if(i%2==0){
                answer=false;
                cout<<"Answer false case "<<answer<<endl;
                break;
            }
        }
        return answer;
    }
};

//O(n) solution usig Stack Data Structure
class Solution {
public:
    bool isValid(string s) {
        stack<char> stc;
        if(s.size()==0){
            return true;
        }
        if(s.size()==1){
            return false;
        }

        for(int i=0;i<s.size();i++){
            if(s[i]==']'||s[i]=='}'||s[i]==')'){
          if(stc.size()==0){
              return false;
          }
          if(s[i]=='}'&& stc.top()!='{'){
              return false;
          }
          if(s[i]==']'&& stc.top()!='['){
              return false;
          }
          if(s[i]==')'&& stc.top()!='('){
              return false;
          }
          stc.pop();
        }else{
                stc.push(s[i]);
            }
        }
        if(stc.size()!=0){
            return false;
        }
        return true;
    }
};