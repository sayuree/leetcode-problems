/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let freq=[];    
    if(s.length!=t.length){
        return false;
    }
    for(let i=0;i<s.length;i++){
    let index=s[i].charCodeAt()-'a'.charCodeAt();
    freq[index]?freq[index]++:freq[index]=1;
    }
    
    for(let element of t){
        let item_ind=element.charCodeAt()-'a'.charCodeAt();
        if(!freq[item_ind]--){
            return false;
        }
    }
    return true;
};