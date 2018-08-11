#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//code
	int t,n,price,chocbuy,chocbalance,i;
	cin>>t;
	while(t){
	    cin>>n;
	    chocbuy = chocbalance = 0;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>price;
	    chocbuy += arr[0];
	    int chocdiff;
	    for(i=0;i<n-1;i++){
	        chocdiff = arr[i]-arr[i+1];
	        chocbalance+=chocdiff;
	        if(chocbalance<0){
	            chocbuy-=chocbalance;
	            chocbalance=0;
	        }
	    }
	    cout<<chocbuy*price<<endl;
	    t--;
	}
	return 0;
}