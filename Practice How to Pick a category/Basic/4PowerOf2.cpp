/*
	https://practice.geeksforgeeks.org/problem-page.php?pid=246
	Practice
	240621	
*/
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        bool ans=false;
		//Using inbuilt function. Googled function
        if(log2(n)-(int)log2(n)==0)
            ans=true;
        return ans;
		
		/*
		=>//Submitted
		
		=>M1:
			=>Base change property approach:
		if(n == 0) return false;
        if(n == 1) return true;
        double ans = log10(n)/log10(2);
        if(ans == (int)ans) return true;
        return false;
		
		//M2:
			=>Bruteforce: [Be careful of the boundary elements of n. In this case 0.
			If not taken care it goes into TLE.]			
		bool ans=false;
        if(n==1)
            return true;
        if(n%2!=0 || n==0)
            return false;
        while(n%2==0 && n!=2)
            n/=2;
        if(n==2)
            ans=true;
        return ans;
		
		=>M3: 
			=>//(Similar to M1 but see the while condition)			
		long long temp = n;
        while(temp%2==0 && temp > 1){
            temp /= 2;
        }
        if(temp == 1) return true;
        return false;
		
		=>M4:
			=>//Set bit approach:
		if(n == 0) return false;
        return !(n&(n-1));
		
		*/
		
        /*
			My code: 
			
			=>//M1 :            
			bool ans=false;
			if(n==1)
				return true;
			long double temp=(long double)((long double)log(n)/(long double)log(2));
			cout<<(long double)log(n)/(long double)log(2)<<"\n";
			cout<<temp<<" "<<ceil(temp)<<" "<<floor(temp)<<"\n";
			if(ceil(temp)==floor(temp))
				ans=true;
			return ans;
			
			=>// M2: [Gives TLE for n=0.]
			if(n==1)
				return true;
			if(n%2!=0)
				return false;
			while(n%2==0 && n!=2)
				n/=2;
			if(n==2)
				ans=true;
			return ans;             
        */
    }
};