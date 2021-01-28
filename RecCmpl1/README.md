# Solution Approach

It might seem at the first look that the program is O(log N). 
However, the last case 

return searchNumOccurrence(V, k, start, mid - 1) + 1 + searchNumOccurrence(V, k, mid + 1, end);


is the bottleneck step. 
Assuming all the values in the array are the same, we get the following relation : 

T(N) = 2 * T(N/2) + constant
= 4 * T(N/4) + constant ( 2 * constant = another constant )
= 8 * T(N/8) + constant
…
= N * T(N/N) + constant
= N + constant
= O(N)
