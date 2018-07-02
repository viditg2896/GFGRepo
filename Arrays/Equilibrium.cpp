#include <iostream>
using namespace std;

int main() {
	//code
	int t,i,n,lsum,rsum,flag,j;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    flag=0;
        for(i=0;i<n;i++){
            lsum=rsum=0;
            for(j=0;j<i;j++){
                lsum+=arr[j];
            }
            for(j=i+1;j<n;j++){
                rsum+=arr[j];
            }
            if(lsum==rsum){
                flag=1;
                break;
            }
        }
	    if(flag==1)
	        cout<<i+1<<endl;
	    else
	        cout<<-1<<endl;
	    t--;
	}
	return 0;
}