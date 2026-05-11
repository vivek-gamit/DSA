function maximum(arr){

    let max = arr[0]

    for(let i=1; i<arr.length; i++){
        if(max < arr[i]){
            max = arr[i]
        }
    }
    return max
}

let arr = [11,21,33,5,1,7,99]
console.log(maximum(arr));
