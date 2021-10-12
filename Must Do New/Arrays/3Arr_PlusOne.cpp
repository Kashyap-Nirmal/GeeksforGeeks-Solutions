/*
    Must Do New
    https://practice.geeksforgeeks.org/problems/plus-one/1/
    080521
*/
class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        /*
            Dont forget to return because due to recursion changes are made in local vectors.
        */
        int j=N-1;
        if(j<0){
            arr.insert(arr.begin(),1);
            return arr;
        }
        arr[j]+=1;
        if(arr[j]>9){
            arr[j]=10-arr[j];
            arr=increment(arr,j);
        }
        return arr;
    }
};
