#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	//code
	int t,n,minLen,index,cnt,i,j;
	string temp;
	cin>>t;
	while(t){
	    cin>>n;
	    vector <string> str;
	    cnt = 0;
	    while(n){
	        cin>>temp;
            cnt++;
	        minLen = temp.length();
	        str.push_back(temp);
	        if(temp.length()<minLen){
	            minLen = temp.length();
	            index = cnt;
	        }
	        n--;
	    }
	    int diff[minLen];
	    for(i=0;i<str.size();i++){
	        if(i == index){
	            continue;
	        }
	        else{
	            for(j=0;j<minLen;j++){
	                diff[j] = str[index][j] - str[i][j];
	            }
	        }
	    }
	    int mincom=0;
	    for(i=0;i<minLen;i++){
	        if(diff[i]==0)
	            mincom++;
	    }
	    if(mincom==0){
	        cout<<-1;
	    }
	    else{
	        for(i=0;i<mincom;i++){
	            cout<<str[0][i];
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}