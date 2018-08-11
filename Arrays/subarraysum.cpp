#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
	//code
	int t,n,sum,i;
	cin>>t;
	while(t){
	    cin>>n>>sum;
	    int arr[n];
	    unordered_map <int,int> summap;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int curr_sum = 0;
	    //map ke ander 0-i elements ka sum and index (i) save hoga, example 1st,1st&2nd,1st2nd3rd etc
	    for(i=0;i<n;i++){
	        curr_sum+=arr[i];
	        //Easy check
	        if(curr_sum==sum){
	            cout<<1<<" "<<i+1<<endl;
	            break;
	        }
	        //ek point ke baad curr_sum exceed hoga sum se, jitne se exceed hoga...agar map mei available hai
	        //toh hum utne elements skip karadenge...ie map mei found index se 1 aage se sahi wali subarray print kara denge 
	        if(summap.find(curr_sum-sum)!=summap.end()){
	            cout<<summap[curr_sum-sum]+2<<" "<<i+1<<endl;
	            break;
	        }
	        if(i<n)
	        summap[curr_sum]=i;
	    }
	    if(i==n)
	        cout<<-1<<endl;
	    t--;
	}
	return 0;
}