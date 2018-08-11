#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	//A set is a self-balancing BST
	int t,n,i,temp,k;
	cin>>t;
	while(t){
	    cin>>n;
	    set <int> tree;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        tree.insert(temp);
	    }
	    cin>>k;
	    int sum = 0;
	    set <int> :: iterator it = tree.begin();
	    while(k){
	        sum += *it;
	        k--;
	        it++;
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}