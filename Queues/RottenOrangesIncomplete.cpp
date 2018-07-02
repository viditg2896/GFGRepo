#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
 {
	//code
	int t,n,m,i,j,counter,flag,p,q,r,s;
	cin>>t;
	while(t){
	    cin>>n>>m;
	    int arr[n][m];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    counter=flag=0;
        //cout<<endl;
	    while(true){
	        flag=0;     
	        for(i=0;i<n;i++){
	            for(j=0;j<m;j++){
                    //cout<<arr[i][j]<<" ";
	                if(arr[i][j]==2){
                        p=i+1;q=j+1;r=i-1;s=j-1;
	                    if(p<n){
	                        if(arr[p][j]==1){
	                            arr[p][j]++;
	                            flag++;
	                        }
	                    }
	                    if(q<m){
	                        if(arr[i][q]==1){
	                            arr[i][q]++;
	                            flag++;
	                        }
	                    }
	                    if(r>=0){
	                        if(arr[r][j]==1){
	                            arr[r][j]++;
	                            flag++;
	                        }
	                    }
	                    if(s>=0){
	                        if(arr[i][s]==1){
	                            arr[i][s]++;
	                            flag++;
	                        }
	                    }
	                }
	            }
                //cout<<endl;
	        }
	        counter++;
            //cout<<endl;
	        if(flag==0)
	            break;
	    }
	    int ans = 0;
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if(arr[x][y]==1)
                ans = 1;
        }
    }
	    if(ans==1){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<counter<<endl;
	    }
	    t--;
	}
	return 0;
}