function printsumofN(n){
    if(n===0) return 0;

    return n + printsumofN(n-1)
}
console.log(printsumofN(10));
