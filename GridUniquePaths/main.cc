A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).

Path Sum: Example 1

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.

Example :

Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)


// pythin solution

    class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def uniquePaths(self, A, B):
        return math.factorial(A+B-2)/(math.factorial(A-1)*math.factorial(B-1))

// C++ Solution


int up(int m, int n) {
    // m+n-2 C n-1 = (m+n-2)! / (n-1)! (m-1)! 
    long long ans = 1;
    for (int i = n; i < (m + n - 1); i++) {
        ans *= i;
        ans /= (i - n + 1);
    }
    return (int)ans;
}

int Solution::uniquePaths(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return up(A,B);
}


