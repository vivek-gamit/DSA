function prefixSum(arr){
    let prefix = []
    prefix[0] = arr[0]

    for(let i=1; i<arr.length; i++){
        prefix[i] = prefix[i-1] + arr[i]
    }

    return prefix
}
let arr = [1,2,3,4]
console.log(prefixSum(arr));
