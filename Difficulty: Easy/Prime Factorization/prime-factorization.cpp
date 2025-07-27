void printPrimeFactorization(int n) {
    int i=2;
    while (n!=1){
        if (n%i==0){
            n=n/i;
            cout<<i<<" ";
        }
        else{
            i++;
        }
}
}