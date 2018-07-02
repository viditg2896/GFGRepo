#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below method */
int present(vector <int> x,int k){
    for(int i=0;i<x.size();i++){
        if(x[i]==k)
            return 1;
    }
    return 0;
}
int distinct(vector <int> window){
    int i,j;
    vector <int> res;
    for(i=0;i<window.size();i++){
        if(!present(res,window[i]))
            res.push_back(window[i]);
    }
    return res.size();
}
void countDistinct(int A[], int k, int n)
{
    //Your code here
    int i,j;
    for(i=0;i<n-k+1;i++){
        vector <int> window;
        for(j=i;j<i+k;j++){
            window.push_back(A[j]);
        }
        cout<<distinct(window)<<" ";
    }
}