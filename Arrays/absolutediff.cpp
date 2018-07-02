#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector <int> numtoarr(int n){
    vector <int> res,temp;
    int i;
    while(n){
        temp.push_back(n%10);
        n/=10;
    }
    for(i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
    return res;
}
int main() {
	//Given an array.Print all numbers less than k in the array, with the fact that absolute difference between any adjacent digits should be 1.
	int t,i,n,k,j,p,flag;
	vector <int> temp;
	cin>>t;
	while(t){
	    cin>>n>>k;
	    int arr[n];
	    vector <int> ans;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]<k){
	            temp=numtoarr(arr[i]);
	            if(temp.size()==1){
	                ans.push_back(arr[i]);
	            }
	            else{
	                flag=0;
	                for(j=0;j<temp.size()-1;j++){
	                    p=j+1;
	                    if(abs(temp[j]-temp[p])==1){
	                       flag++; 
	                    }
	                }
	                if(flag==temp.size()-1){
	                    ans.push_back(arr[i]);
	                }
	            }
	        }
	    }
	    if(ans.size()>0){
	        for(i=0;i<ans.size();i++){
	            cout<<ans[i]<<" ";
	        }
	    }
	    else
	        cout<<-1;
	    cout<<endl;
	    t--;
	}
	return 0;
}