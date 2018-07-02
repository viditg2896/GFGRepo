#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<map>
using namespace std;
int main()
 {
    //Finds out most frequent word in a line - if frequency same then returns lexicographically smaller
	//Done using 2 multimaps (because frequency of words can be same)
	int t,n,i;
	cin>>t;
	while(t){
	    cin>>n;
	    string s;
	    //This will be used to keep words sorted by frequency in descending order
	    multimap <int,string,greater<int> > map1;
	    //This will be used to keep words sorted lexicographically
	    multimap <string,int> map2;
	    multimap <string,int> :: iterator i1;
	    for(i=0;i<n;i++){
	        cin>>s;
	        if(map2.find(s)==map2.end()){
	            map2.insert(make_pair(s,1));
	        }
	        else{
	            i1 = map2.find(s);
	            i1->second++;
	        }
	    }
	    for(i1=map2.begin();i1!=map2.end();i1++){
	        map1.insert(make_pair(i1->second,i1->first));
	    }
	    cout<<(map1.begin())->second<<endl;
	    t--;
	}
	return 0;
}