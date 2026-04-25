function selectionSort(nums){

    for(let i=0; i<nums.length; i++){
        let minIndex = i

        for(let j=i+1; j<nums.length; j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j
            }
        }

        [nums[i], nums[minIndex]]= [nums[minIndex], nums[i]]
    }

    return nums
}

let nums = [64, 25, 12, 22, 11]

console.log(selectionSort(nums));
