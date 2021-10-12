/*
	https://practice.geeksforgeeks.org/problems/next-permutation5226/1/?problemType=functional&page=1&sortBy=submissions&company[]=Infosys&query=problemTypefunctionalpage1sortBysubmissionscompany[]Infosys
	090821
	Solution+Rushabh
	Infosys
*/
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        /*
        next_permutation(arr.begin(), arr.end());
        return arr;
        */
        /*
            int k = -1;
            for(int i=0; i<N-1; i++){
                if(arr[i] < arr[i+1]){
                    k = i;
                }
            }
            if(k == -1){
                reverse(arr.begin(), arr.end());
                return arr;
            }
            int l = N-1;
            for(int i=N-1; i>k; i--){
                if(arr[k]<arr[i]){
                    l = i;
                    break;
                }
            }
            swap(arr[k], arr[l]);
            reverse(arr.begin() + k + 1, arr.end());
            return arr;
        */
        int ind = 0;
        vector<int> v = arr;
        for(int i = N-2;i >= 0;i--){
            if(v[i] < v[i+1]){
                ind = i;
                break;
            }
        }
        for(int i = N-1;i > ind;i--){
            if(v[i] > v[ind]){
                swap(v[i], v[ind]);
                ind++;
                break;
            }
        }
        for(int i = 0;i < (N-ind)/2;i++)
            swap(v[i+ind], v[N-i-1]);
        return v;
        /*
        My Code
			vector<int> tempR=arr;
			sort(tempR.begin(),tempR.end(),greater<int>());
			if(temp==tempR)
				return arr;
			vector<int> temp=arr;
			sort(arr.begin(),arr.end());
			int i=0,t;
			for(i=0;i<N && arr!=temp;i++)
			{
				if(temp[i]>arr[i])
					break;
			}
			if(i==N && temp!=arr)
				return arr;
			if(i>0)
			{
				t=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=t;    
			}
			return arr;
        */
    }
};