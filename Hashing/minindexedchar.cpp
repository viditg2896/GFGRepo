#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<set>
#include<iterator>
using namespace std;
int main()
 {
	//Given a string str and another string patt. Find the character in patt that is present at the minimum index in str. If no character of patt is present in str then print ‘No character present’.
	int t,i;
	cin>>t;
	while(t){
	    string s1,s2;
	    cin>>s1>>s2;
	    unordered_map <char,int> charindex;
	    set <int> indices;
	    for(i=0;i<s1.length();i++){
	        if(charindex.find(s1[i])==charindex.end()){
	            charindex[s1[i]] = i;
	        }
	    }
	    for(i=0;i<s2.length();i++){
	        if(charindex.find(s2[i])!=charindex.end()){
	            unordered_map <char,int> :: iterator it;
	            it = charindex.find(s2[i]);
	            indices.insert(it->second);
	        }
	    }
	    if(indices.size()>0)
	        cout<<s1[*(indices.begin())]<<endl;
	    else
	        cout<<"No character present"<<endl;
	    t--;
	}
	return 0;
}