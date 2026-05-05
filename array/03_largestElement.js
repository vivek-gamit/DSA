function largestElement(nums){
    if(nums.length === 0) return -1
    nums.sort((a,b) => {
        return b-a
    })
    
    return nums[0]
}
let arr = [0,0,0]
//Output: 90
console.log(largestElement(arr));

