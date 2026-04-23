function frequence(arr){
    let map = new Map()

    for(let num of arr){
        map.set(num, (map.get(num) || 0) + 1)
    }

    return map
}

var maxFrequencyElements = function(nums) {
    let map = new Map()

    for(let num of nums){
        map.set(num, (map.get(num) || 0)+ 1) 
    }

    let maxFreq = Math.max(...map.values())

    let total = 0
    for(let val of map.values()){
        if(val === maxFreq){
            total+=val
        }
    }

    return total
};

let arr = [1,2,2,3,3]
console.log(frequence(arr));
console.log(maxFrequencyElements(arr));

