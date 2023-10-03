/*SubArray is the contigious part of an array.
   eg:- {1, 2, 3, 4}
        subarrays are:- {1}, {2}, {3}, {4}, {1,2}, {2,3},{3,4}, {1,2,3}, {2,3,4}, {1,2,3,4}
        
   A SubSequence is a sequence that can be derived by
   an array by selecting zero or more elements 
   without changing the order of the 
   remaining elements.

1. No. of subarrays of an array with n elements = nc2 + n = n(n+1)/2
2. No. of subsequence of an array with n elements = 2^n

NOTE:- Every subArry is a subsequence but every subsequence is not a subarray
*/
