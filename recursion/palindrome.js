var isPalindrome = function(s) {
    let result = "";

    for(let char of s){
        if(
        (char >= 'a' && char <= 'z')||
        (char >= 'A' && char <= 'Z') ||
        (char >= '0' && char <= '9')
        ){
            result += char;
        }
    }

    let str = result.replace(/\s/g,"").toLowerCase()

    let left = 0;
    let right = str.length - 1;

    while(left < right){
        if(str[left] !== str[right]){
            return false
        }
        left++;
        right--;
    }

    return true
};

console.log(isPalindrome("madam"));
