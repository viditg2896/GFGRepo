#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
int main()
 {
	//First element to occur k times
	int t,n,k,temp,i,ans;
	cin>>t;
	while(t){
	    cin>>n>>k;
	    ans = -1;
	    unordered_map <int,int> mymap,ind;
	    set <int> indices;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>temp;
	        arr[i] = temp;
	        ind.insert(make_pair(temp,i));
	        if(mymap.find(temp)==mymap.end()){
	            mymap[temp] = 1;
	        }
	        else{
	            mymap[temp]++;
	        }
	    }
	    unordered_map <int,int> :: iterator i1,i2;
	    for(i1=mymap.begin();i1!=mymap.end();i1++){
	        if(i1->second == k){
	            i2 = ind.find(i1->first);
	            indices.insert(i2->second);
	        }
	    }
	    if(indices.size()>0)
	        cout<<arr[*(indices.begin())]<<endl;
	    else
	        cout<<-1<<endl;
	    t--;
	}
	return 0;
}