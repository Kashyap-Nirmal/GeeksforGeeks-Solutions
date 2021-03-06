/*
	https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
	Editorial
	Practice How to Pick a Category ?
	140621
*/
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        vector<int> ans;
        /* Initialize curr_sum as value of first element and starting point as 0 */
        int curr_sum = arr[0], start = 0, i;
        /* Add elements one by one to curr_sum and if the curr_sum exceeds the sum,
        then remove starting element */
        for (i = 1; i <= n; i++) {
            // If curr_sum exceeds the sum, then remove the starting elements
            while (curr_sum > sum && start < i - 1) {
                curr_sum = curr_sum - arr[start];
                start++;
            }
            // If curr_sum becomes equal to sum, then return true
            if (curr_sum == sum) {
                ans.push_back(start+1);
                ans.push_back(i);
                return ans;
            }
            // Add this element to curr_sum
            if (i < n)
                curr_sum = curr_sum + arr[i];
        }
        // If we reach here, then no subarray
        ans.push_back(-1);
        return ans;
    }
};