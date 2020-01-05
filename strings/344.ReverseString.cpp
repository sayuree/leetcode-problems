//My Solution
//o(n) time and O(1) space
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        char temp=' ';
        while(i<j){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            ++i;
            --j;
        }
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};