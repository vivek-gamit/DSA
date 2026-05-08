function three_sum(nums, k){

    nums.sort((a,b) => a-b)

    let n = nums.length - 1

    for(let i=0; i<=n; i++){

        if(i > 0 && nums[i] === nums[i-1]){
            continue
        }

        let left = i+1
        let right = n

        while(left < right){
            let sum = nums[i] + nums[left] + nums[right]

            if(sum === k){
               return true
                left++
                right--

                while(left < right && nums[left] === nums[left-1]){
                    left++
                }
                while(left < right && nums[right] === nums[right+1]){
                    right--
                }
            }
            else if(sum < k){
                left++
            }else{
                right--
            }
        }

       

    }
     return false

}

let arr = [98, 85, 48, 56, 65, 67, 91]
let target = 206

console.log(three_sum(arr,target));
