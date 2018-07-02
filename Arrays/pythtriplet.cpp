#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int tripletcheck(vector <int> arr){
    int i;
    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++){
        arr[i]=arr[i]*arr[i];
    }
    for(i=arr.size()-1;i>=2;i--){
        int l=0;
        int r=i-1;
        while(l<r){
            if(arr[l]+arr[r]==arr[i])
                return 1;
            else if(arr[l]+arr[r]<arr[i]){
                l++;
            }
            else
                r--;
        }
        //This snippet is also correct
        /*for(j=0;j<arr.size();j++){
            for(k=j+1;k<arr.size();k++){
               if(arr[j]+arr[k]==arr[i])
                    return 1;
            }
        }*/
    }
    return 0;
}
int findElement(vector <int> arr,int k){
    int i,flag=0;
    for(i=0;i<arr.size();i++){
        if(arr[i]==k){
            flag=1;
        }
    }
    return flag;
}
int main() {
	//Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
	int t,n,i,flag,temp;
	cin>>t;
	while(t){
	    cin>>n;
	    vector <int> arr;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        if(findElement(arr,temp)==0){
	            arr.push_back(temp);
	        }
	    }
	    flag=tripletcheck(arr);
	    if(flag==1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    t--;
	}
	return 0;
}