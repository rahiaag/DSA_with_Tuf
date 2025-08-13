class Solution {
public:
    void printSquare(int n) {
    for(int i=0; i<n; i++) {
        if(i == 0 || i == n-1)
            cout << string(n,'*') << "\n";
        else
            cout << "*" << string(n-2,' ') << "*" << "\n";
    }
    }
};
