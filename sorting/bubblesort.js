function bubblesort(nums){
     
    for(let i=0; i<nums.length; i++){
        let swapped = false

        for(let j=0; j<nums.length-i-1; j++){
            if(nums[j] > nums[j+1]){
                [nums[j], nums[j+1]] = [nums[j+1], nums[j]]
                swapped = true
            }
            
        }

        if(!swapped) break;
    }

    return nums

}

let nums = [64, 25, 12, 22, 11]

console.log(bubblesort(nums));
