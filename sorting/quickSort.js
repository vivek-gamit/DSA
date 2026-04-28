    function quckSort(arr){
        if(arr.length <= 1){
            return arr
        }

        let pivot = arr[arr.length-1]

        let left = []
        let right = []

        for(let i=0; i<arr.length-1; i++){
            if(arr[i] < pivot){
                left.push(arr[i])
            }else{
                right.push(arr[i])
            }
        }

    let sortedleft =   quckSort(left)
    let sortedright =  quckSort(right)

        return [...sortedleft,pivot,...sortedright]
    }

    let arr = [64,25,12,22,11]

    console.log(quckSort(arr));
