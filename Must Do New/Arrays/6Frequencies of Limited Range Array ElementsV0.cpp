/*
	https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
	Must do new
	090521/160521
	Space complexity:O(N). Expected Space complexity: O(1). Needs improvization.
*/
void frequencyCount(vector<int>& arr,int N, int P)
{ 
	int count[P]={0},j=0;
	for(int i=0;i<N;i++){
		count[arr[i]-1]++;
	}
	for(j=0;j<P && j<N;j++)
		arr[j]=count[j];
	for(j=P;j<N;j++)
		arr[j]=0;
}