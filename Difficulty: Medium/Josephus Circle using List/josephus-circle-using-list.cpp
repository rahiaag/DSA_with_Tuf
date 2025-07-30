// User function Template for C++

int josephus(int n, int k) {
    vector<int>v;
    for (int i=1;i<=n;i++){
        v.push_back(i);
    }
    int index=k-1;
    
    while (v.size()>1){    // It's kind of rotation
        index=index%v.size();
        v.erase(v.begin()+index);
        index+=k-1;
    }
    return v[0];
     
}