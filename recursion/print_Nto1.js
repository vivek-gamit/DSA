function printNto1(n){
    if(n===0) return 0;

    console.log(n);
    printNto1(n-1);
    
}

printNto1(10)