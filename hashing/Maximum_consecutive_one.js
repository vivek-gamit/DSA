function Maxone(arr, k){
let zeros = 0
let count = 0
let maxLen = 0

for(let i=0; i<arr.length; i++){
    if(arr[i] === 0) zeros++
    if(zeros > k){
        count = 0
    }else{
        count++
    }

    maxLen = Math.max(maxLen,count)
}

return maxLen

}

let arr = [1,1,0,0,0,1,1,1,0]
let k = 2

console.log(Maxone(arr,k));//7
