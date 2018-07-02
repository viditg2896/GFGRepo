#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	//code
	int i,t,n,temp;
	cin>>t;
	while(t){
	    cin>>n;
	    vector <int> arr;
        int ind;
        for(i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
	    for(i=0;i<n;i++){
	        //temp = arr[i];
	        ind = arr[i];
	        //cout<<ind;
            //arr[i] = arr[arr[i]];
	        cout<<arr[ind]<<" ";
	        //arr[arr[i]] = temp;
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}