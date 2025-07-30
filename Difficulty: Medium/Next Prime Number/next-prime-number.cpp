#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n==1)return false;
    if (n==2 || n==3)return true;
    if (n%2==0)return false;
    
    for (int i=3;i*i<=n;i+=2){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    
    int candidate=n+1;
    while (true){
        if (isPrime(candidate)){
            cout<<candidate;
            return 0;
        }
        candidate++;
    }
}
