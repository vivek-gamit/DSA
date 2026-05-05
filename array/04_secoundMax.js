function secoundMax(nums) {
    if(nums.length < 2) return -1 

    let max = -Infinity
    let secMax = -Infinity

    for(let i=0; i<nums.length; i++){
        if(nums[i] > max){
            secMax = max
            max = nums[i]
        }
        else if(nums[i] > secMax && nums[i] !== max){
            secMax = nums[i]
        }
    }

    return secMax === -Infinity ? -1 : secMax
}

let arr = [12, 35, 1, 10, 34, 1]
console.log(secoundMax(arr));
