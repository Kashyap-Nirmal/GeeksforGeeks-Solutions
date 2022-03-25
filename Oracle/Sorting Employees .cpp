/*
	https://practice.geeksforgeeks.org/problems/sorting-employees5907/1/?page=2&company[]=Oracle&sortBy=submissions#
	Solution. Sorting struct using comp func.
	24/3/2022
*/
static bool comp(node a, node b){
    if(a.salary==b.salary){
        return a.name<b.name;
    }
    return a.salary<b.salary;
    
    /*
         return (a.salary<b.salary || (a.salary==b.salary && a.name<=b.name));
    */
}

class Solution{

	public:
	void sortRecords(node arr[], int n)
	{
	    sort(arr,arr+n,comp);
	}
};