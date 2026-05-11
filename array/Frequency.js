function frequency(arr){

    let map = new Map()

    for(let num of arr){
        map.set(num, (map.get(num) || 0) + 1)
    }
     return map
}

let arr = [1,1,2,2,2,4,5,6]
console.log(frequency(arr));
