int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int m = INT_MAX;
    if(A.size() == 1) return A[0];
    for(int i=0; i<A.size()-1; i++){
        int mine = A[i]^A[i+1];
        m = min(m, mine);
    }
    return m;
}

