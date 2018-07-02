#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int firstneg(queue <int> x){
    while(!x.empty()){
        if(x.front()<0){
            return x.front();
        }
        x.pop();
    }
    return 0;
}
int main()
 {
	//First Negative Integer with window size k
	int t,n,k,i,temp,ans,flag,j;
	cin>>t;
	while(t){
	    cin>>n;
	    vector <int> arr;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    cin>>k;
	    vector <int> result;
	    for(i=0;i<arr.size();i++){
	        queue <int> window;
	        for(j=i;j<k+i;j++){
                if(j<arr.size())
	                window.push(arr[j]);    
	        }
            if(window.size()==k)
	            result.push_back(firstneg(window));
	    }
	    for(i=0;i<result.size();i++){
	        cout<<result[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}