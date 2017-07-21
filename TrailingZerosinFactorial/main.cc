int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // Keep dividing n by powers of 5 and update count
    int sum=0; 
    while(A/5) sum+=A/5, A/=5; 
    return sum;
}

