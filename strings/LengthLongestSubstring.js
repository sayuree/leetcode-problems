/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let left=0;
    let right=0;
    let length=s.length;
    let mySet=new Set();
    let ans=0;
    while(left<length&&right<length){
        if(!mySet.has(s[right])){
            mySet.add(s[right]);
            right++;
        }else{
            mySet.delete(s[left]);
            left++;
        }
        ans=Math.max(ans,mySet.size);
    }
    console.log(mySet);
    return ans;
};
