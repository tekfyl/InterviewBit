You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4

long long int len = A.size();
    long long int sumOfN = (len * (len+1) ) /2, sumOfNsq = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber1=0, missingNumber2=0;
    
    for(int i=0;i<A.size(); i++){
       sumOfN -= (long long int)A[i];
       sumOfNsq -= (long long int)A[i]*(long long int)A[i];
    }
    
    missingNumber1 = (sumOfN + sumOfNsq/sumOfN)/2;
    missingNumber2= missingNumber1 - sumOfN;
    vector <int> ans;
    ans.push_back(missingNumber2);
    ans.push_back(missingNumber1);
    return ans;
