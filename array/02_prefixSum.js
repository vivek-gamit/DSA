function subarraySum(arr, k) {
    let map = new Map()
    map.set(0, 1)

    let sum = 0
    let count = 0

    for (let i = 0; i < arr.length; i++) {
        sum += arr[i]

        if (map.has(sum - k)) {
            count += map.get(sum - k)
        }

        map.set(sum, (map.get(sum) || 0) + 1)
    }

    return count
}

let arr = [1,2,3,4,5,6]
let k = 3

console.log(subarraySum(arr,k));
