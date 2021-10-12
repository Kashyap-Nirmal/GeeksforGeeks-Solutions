/*
	https://practice.geeksforgeeks.org/problems/large-factorial4721/1/#
	Must do coding.
	Rushabh's code.
	090521/160521
*/
vector<long long> factorial(vector<long long> a, int n) {
    //We took 100000+1 because 0<=a[i]<=100000. I.E. 0 and 1st 100000 elements are there.
    //vector<long long> arr(100001,1) This will intialize all 100001 elements to 1.
    vector<long long> arr(100001,1),ans(n);
    long long i=0;
    for(i=2;i<100001;i++)
		arr[i]=(arr[i-1] * i) % 1000000007;
    for(i=0;i<n;i++) 
		ans[i]=arr[a[i]];
	return ans;
}