//My O(n) solution
//Runtime: 4 ms, faster than 66.62% of C++ online submissions for Plus One.
//Memory Usage: 8.4 MB, less than 100.00% of C++ online submissions for Plus One.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1;i>=0;--i){
            if(carry==1||i==digits.size()-1){
                int sum=digits[i]+1;
                if(sum==10){
                    carry=1;
                    digits[i]=0;
                }else{
                    carry=0;
                    digits[i]++;
                }
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};