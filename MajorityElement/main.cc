int Solution::majorityElement(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ct=0, check = A.size()/2;
    for(int i=0; i<A.size(); i++){
        ct = count(A.begin(), A.end(), A[i]);
        if(ct > check) return A[i];
    }
}
