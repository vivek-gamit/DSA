/*
*********
#*******#
##*****##
###***###
####*####
*/

let n=5

for(let i=0; i<n; i++){
    let row=""
    //spcae
    for(let j=0; j<i; j++){
        row+=" "
    }
    for(let j=1; j<2*n-i*2; j++){
        row+="*"
    }
    console.log(row);
    
}