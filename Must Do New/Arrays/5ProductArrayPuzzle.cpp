/*
    080521/090521
    https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1
    Must do New
    Editorial
*/
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector <long long int>product;
        long long temp=1;
        for(int i=0;i<n;i++){
            product.push_back(temp);
            temp=temp*nums[i];
        }
        temp=1;
        for(int i=n-1;i>=0;i--){
            product[i]*=temp;
            temp=temp*nums[i];
        }
        return product;
    }
};
