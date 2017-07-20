int Solution::maxProfit(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int p=0;
    if(A.size()<2) return 0;
    for(int i=0; i<A.size()-1; i++){
        if(A[i+1] > A[i]) p+=A[i+1]-A[i];
    }
    return p;
}

