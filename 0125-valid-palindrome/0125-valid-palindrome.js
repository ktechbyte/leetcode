/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    if(s===" ") return true;
    const lowerCaseStr = s.replace(/[^A-Za-z0-9]/gi, "").toLowerCase();
    return lowerCaseStr === [...lowerCaseStr].reverse().join("") ? true:false;
};