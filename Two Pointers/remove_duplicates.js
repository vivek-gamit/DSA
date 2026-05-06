
function removeDuplicates(nums) {
    

    let i = 1
    for(let j=1; j<nums.length; j++){
        if(nums[i] !== nums[j-1] ){
                nums[i] = nums[j-1]
                i++
        }

    }

    return nums
};

let arr = [1,1,2,3]

 console.log(removeDuplicates(arr));
 