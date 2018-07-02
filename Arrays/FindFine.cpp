#include <iostream>
using namespace std;

int main() {
	/*
    Given an array of penalties, an array of car numbers and also the date. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.
    */
	int t,i,n,dt,netfine;
	cin>>t;
	while(t){
	    cin>>n>>dt;
	    netfine=0;
	    int fine[n],nos[n];
	    for(i=0;i<n;i++){
	        cin>>nos[i];
	    }
	    for(i=0;i<n;i++){
	        cin>>fine[i];
	    }
	    if(dt%2==0){
	        for(i=0;i<n;i++){
	            if(nos[i]%2==1){
	                netfine+=fine[i];
	            }
	        }
	    }
	    else{
	        for(i=0;i<n;i++){
	            if(nos[i]%2==0){
	                netfine+=fine[i];
	            }
	        }
	    }
	    cout<<netfine<<endl;
	    t--;
	}
	return 0;
}