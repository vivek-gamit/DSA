/*
#
##
###
####
###
##
#
*/

let n=5
for(let i=1; i<=n; i++){
    let row=""
    for(let j=1; j<=i; j++){
        row+="#"
    }
    console.log(row);
    
}

/* it is also posible using only logic in first loog where we only write condition for i=n-1 === 3 ans decrease one by one i-- */
for(let i=1; i<=n-1; i++){
    let row=""
    for(let j=1; j<=n-i; j++){
        row+="#"
    }
    console.log(row);
    
}