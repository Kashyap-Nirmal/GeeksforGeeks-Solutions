/*
	https://practice.geeksforgeeks.org/problems/check-if-the-door-is-open-or-closed2013/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&company[]=TCS&company[]=Infosys&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]TCScompany[]Infosys#
	090921
	Rushabh Solution
	Done
	TCS
*/
class Solution {
  public:
    int arr[100000];
        bool isperfact(int n){
        int x = sqrt((double)n);
            return n == x*x;
        }
        int *checkDoorStatus(int N) {
            for(int i=1; i<=N; i++){
                if(isperfact(i))
                    arr[i] = 1;
                else
                    arr[i] = 0;
            }
            return (arr + 1);
        }
        /*
			My code
        int i=0,j=0;
        for(i=0;i<=N;i++)
            arr[i]=1;
        int * ptr=&arr[1];
        for(i=2;i<=N;i++)
        {
            for(j=1,ptr=arr;j*i<=N;j++,ptr++)
            {
                if(j==1)
                    ptr++;
                //ptr++;
                //arr[i*j]=(arr[i*j]==0)?1:0;
                *ptr=(*ptr==0)?1:0;
            }
        }
        for(i=1;i<=N;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        return ptr;
        */
};