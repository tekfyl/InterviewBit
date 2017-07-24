You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int x=0, n=A.size(), twice=0, missing=0;; 
    vector<int> v; 
    for(int i=1; i<=n; i++ ) x ^= i, x ^= A[i-1];
    int firstSetBit = x & ~(x-1);
    for(int i=0; i<A.size(); i++) A[i]&firstSetBit ? twice ^= A[i] : missing ^= A[i];
    for(int i=1; i<=n; i++) i&firstSetBit ? twice ^= i : missing ^= i;
    
    int sum = accumulate(A.begin(), A.end(), 0);
    if(n*(n+1)/2 == sum+missing-twice) v.push_back(twice), v.push_back(missing);
    else v.push_back(missing), v.push_back(twice);
    
    return v;
}

