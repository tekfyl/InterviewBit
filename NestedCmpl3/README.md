# Solution Approach

In the first iteration, the j loop runs N times.

In the second iteration, the j loop runs N / 2 times. 

In the ith iteration, the j loop runs N / 2^i times. 

So, the total number of runs of loop = N + N / 2 + N / 4 + ... 1 

= **N * ( 1 + 1/2 + 1/4 + 1/8 + ... ) < 2 * N** 
