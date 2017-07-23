int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int curr=-55555, imax=-55555;
    for(int i=0; i<A.size(); i++){
        curr += A[i];
        curr = max(A[i], curr);
        imax = max(imax, curr);
    }
    return imax;
}
// KAdane's Algorithm
