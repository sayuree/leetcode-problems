/**
 * @param {number[]} queries
 * @param {number} m
 * @return {number[]}
 */
/*Runtime: 140 ms, faster than 18.83% of JavaScript online submissions for Queries on a Permutation With Key.
Memory Usage: 37.4 MB, less than 26.12% of JavaScript online submissions for Queries on a Permutation With Key.*/
var processQueries = function(queries, m) {
    var permutation=[]
    let result=[]
    for(let i=0;i<m;i++){
        permutation.push(i+1)
    }
    
    queries.forEach(function(element)
    {
       let index=permutation.findIndex(item=>item==element)
       if(index)
       {
          let removed=permutation.splice(index,1)[0]
          permutation.unshift(removed)
       }
        result.push(index)
    })
    return result
};