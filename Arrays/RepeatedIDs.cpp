#include <iostream>
#include <vector>
using namespace std;
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
	//Print the non repeated selected I.D. of employees in a new line in the same sequence they appear in Input.
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
	    for(i=0;i<arr.size();i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}