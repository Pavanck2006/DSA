class Solution {
public:
    vector<int> nextPermutation(vector<int>& A) {

        // Step 1: Get size of the array
        int n = A.size();

        // Step 2: 'ind' will store the index where
        // A[ind] < A[ind + 1] (from right side)
        int ind = -1;

        // Step 3: Find the first decreasing element from the right
        // This tells us where the next permutation change starts
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                ind = i;      // store index
                break;
            }
        }

        // Step 4: If no such index is found,
        // the array is in descending order
        // So the next permutation is the smallest one
        if (ind == -1) {
            reverse(A.begin(), A.end());
            return A;
        }

        // Step 5: Find the smallest element greater than A[ind]
        // from the right side of the array
        for (int i = n - 1; i > ind; i--) {
            if (A[i] > A[ind]) {
                swap(A[i], A[ind]);   // swap them
                break;
            }
        }

        // Step 6: Reverse the elements after index 'ind'
        // to get the next smallest permutation
        reverse(A.begin() + ind + 1, A.end());

        // Step 7: Return the modified array
        return A;
    }
};
