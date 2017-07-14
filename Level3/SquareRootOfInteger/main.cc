int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==0 || A==1) return A;
    int l = 1, r=A, ans, mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if(mid <= A/mid){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return mid;
}
