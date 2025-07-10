// Last updated: 7/11/2025, 12:03:13 AM
/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
   if (this.length==0){
    return -1;
   } 
   else {
    return this[this.length-1];
   }
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */