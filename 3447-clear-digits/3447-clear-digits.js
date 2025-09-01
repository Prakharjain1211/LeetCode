/**
 * @param {string} s
 * @return {string}
 */
var clearDigits = function(s) {
     const stack = [];

    for (let c of s) {
        if (/\d/.test(c)) {
            if (stack.length > 0) {
                stack.pop();
            }
        } else {
            stack.push(c);
        }
    }

    return stack.join('');

};