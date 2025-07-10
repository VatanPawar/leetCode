// Last updated: 7/11/2025, 12:03:09 AM
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

var createCounter = function(init) {
    let x=init;
    return{
       
        increment:(n)=>{
            return x+=1;
        } ,
        decrement:(n)=>{
            return x-=1;
        } ,
        reset:(n)=>{
            x=init;
            return init;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */