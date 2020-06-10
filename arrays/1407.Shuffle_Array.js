/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
/*Runtime: 80 ms
Memory Usage: 38.2 MB */
var shuffle = function(nums, n) {
    if(!nums)
        return []
    var temp=nums
    var right_side=temp.splice(temp.length/2,n)
    var left_side=nums.splice(0,n)
    let i=0
    var result=[]

    while(i<right_side.length&&i<left_side.length){
        result.push(left_side[i])
        result.push(right_side[i])
        i++
    }
    return result
};