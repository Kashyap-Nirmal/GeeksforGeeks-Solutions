/*
	https://practice.geeksforgeeks.org/contest/code-battle/problems/#
	Smallest Mapped String
	050721
	Rushabh's soln.
*/
class Solution {
  public:
    string mappedString(string S) {
        set<char> s;
    	vector<char> v, srt;
    	map<char, char> m;
    	for(char i : S){
    		if(!s.count(i)) {
    			s.insert(i);
    			v.push_back(i);
    			srt.push_back(i);
    		}
    	}
    	sort(srt.begin(), srt.end());
    	for(int i=0; i<v.size(); i++)
    		m[v[i]] = srt[i];
    	for(auto &i : S){
    		i = m[i];
    	}
    	return S;
    }
};
/*
	My code:
		class Solution {
			public:
			string mappedString(string S) {
				int i=0,j=0;
				string temp=S;
				map<char,char> m,m1;
				sort(temp.begin(),temp.end());
				for(i=0;i<S.size();i++)    
					m1.insert(pair<char,char>(S[i],S[i]));
				for(i=0;i<S.size();i++)
					if(temp[i]<S[i] &&  m.find(S[i]) == m.end())
						m.insert(pair<char,char>(S[i],temp[i]));
				//cout<<m.size()<<"\n";
				for(i=0;i<S.size();i++)
				{
					if (m.find(S[i]) == m.end())
					{
						//cout<<"continue\n";
						continue;
					}
					else if(m1[S[i]]!='1')
					{
						//cout<<S[i]<<" "<<m[S[i]]<<" "<<S<<" ";
						m1[S[i]]=m[S[i]];
						m1[m[S[i]]]=S[i];
						/*
						for(j=0;j<S.size();j++)
							cout<<m1[S[j]];
						cout<<"\n";
						*/
					}
				}
				for(i=0;i<S.size();i++)
					S[i]=m1[S[i]];
			return S;
			}
		};
*/