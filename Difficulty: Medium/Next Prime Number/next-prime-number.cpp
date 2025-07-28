// User function Template for C++

bool checkPrime(int n){
    if (n==2){
        return true;
    }
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n) {
    int val=n+100;
    int result=INT_MAX;
    for (int i=n+1;i<val;i++){
        if (checkPrime(i)==true){
            result=min(result,i);
        }
    }
    return result;
    
}