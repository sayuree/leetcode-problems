//O(n) time 
//O(1) space
/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    var i=0;
    var j=height.length-1;
    var max_area=Number.MIN_VALUE;

    while(i<j){
        if(height[i]<=height[j]){
            max_area=Math.max(max_area,height[i]*(j-i));
            console.log(max_area);
            i++;
        }
        else{
          max_area=Math.max(max_area,height[j]*(j-i));
            console.log(max_area);
            j--;
        }   
    }
    return max_area;
};