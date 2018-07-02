#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
	//Winner of an election where votes are represented as candidate names
    int t,n,i;
    cin>>t;
    while(t){
        cin>>n;
        string s;
        map <string,int> mymap;
        for(i=0;i<n;i++){
            cin>>s;
            if(mymap.find(s)==mymap.end()){
                mymap[s] = 1;
            }
            else
                mymap[s]++;
        }
        multimap <int,string, greater<int> > map1;
        map <string,int> :: iterator i1;
        for(i1=mymap.begin();i1!=mymap.end();i1++){
            map1.insert(make_pair(i1->second,i1->first));
        }
        cout<<map1.begin()->second<<" "<<map1.begin()->first<<endl;
        t--;
    }
	return 0;
}