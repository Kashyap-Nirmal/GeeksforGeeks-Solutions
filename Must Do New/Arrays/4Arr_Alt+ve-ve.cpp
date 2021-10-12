/*
    Must do New
    https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
    080521
*/
class Solution{
public:
    void rearrange(int arr[], int n) {
	    int i=0,j=0,min_,max_,diff;
	    vector<int> positiveIndex;
	    vector<int> negativeIndex;
	    for(i=0;i<n;i++){
	        if(arr[i]>=0)
	            positiveIndex.push_back(arr[i]);
	        else
	            negativeIndex.push_back(arr[i]);
	    }
        min_=min(positiveIndex.size(),negativeIndex.size());
        for(i=0;i<min_;i++){
            arr[i*2]=positiveIndex[i];
            arr[i*2+1]=negativeIndex[i];
	    }
	    if(positiveIndex.size()>negativeIndex.size())
            negativeIndex=positiveIndex;
        diff=negativeIndex.size()-min_;
	    for(i=0;i<diff;i++){
	        arr[2*min_+i]=negativeIndex[min_+i];
	    }
	}
};
