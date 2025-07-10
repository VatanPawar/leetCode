// Last updated: 7/11/2025, 12:03:05 AM
/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return{
        toBe:(expected)=>{
            if(val===expected) return true
            throw new Error ("Not Equal");
        },
        notToBe:(expected)=>{
            if(val!==expected) return true
            throw new Error ("Equal");
        }

    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */