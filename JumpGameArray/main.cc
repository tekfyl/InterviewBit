int Solution::canJump(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    vector<int> vis(n,0);
    vis[0] = 1;
    for(int i=0; i<n; i++){
        if(vis[i])
        for(int j=i; j<min(i+A[i]+1,n); j++){
            vis[j] = 1;
        }
    }
    return vis[n-1];
}

