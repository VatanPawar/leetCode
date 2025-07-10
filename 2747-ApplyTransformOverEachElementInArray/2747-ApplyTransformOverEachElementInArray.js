// Last updated: 7/11/2025, 12:03:11 AM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
   
    for(var i=0; i<arr.length ;i++){
        arr[i]=fn(arr[i],i);
    }
    return arr;
};