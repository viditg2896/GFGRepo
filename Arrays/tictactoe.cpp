#include<math.h>
#include<algorithm>
#include<vector>
#include<stdlib.h>
using namespace std;
//In this problem - O will never win because in every case countX=countO+1
//Function checks if X won
int checkXwin(char tictac[3][3]){
    int wincount = 0,i,j,flag;
    //Checking rows
    for(i=0;i<3;i++){
        flag=0;
        for(j=0;j<3;j++){
            if(tictac[i][j]=='X'){
                flag++;
            }
        }
        if(flag==3){
            wincount++;
            //X cant win legally in more than 1 row
            break;
        }
    }
    //Checking columns
    for(i=0;i<3;i++){
        flag=0;
        for(j=0;j<3;j++){
            if(tictac[j][i]=='X'){
                flag++;
            }
        }
        if(flag==3){
            wincount++;
            //X cant win legally in more than 1 column
            break;
        }
    }
    //diagonal case
    if(tictac[0][0]=='X' && tictac[1][1]=='X' && tictac[2][2]=='X')
        wincount++;
    if(tictac[0][2]=='X' && tictac[1][1]=='X' && tictac[2][0]=='X')
        wincount++;
    return wincount;
}
//If this function returns a value greater than 0 - the tictactoe matrix is illegal
int checkOwin(char tictac[3][3]){
    int wincount = 0,i,j,flag;
    for(i=0;i<3;i++){
        flag=0;
        for(j=0;j<3;j++){
            //cout<<tictac[i][j];
            if(tictac[i][j]=='O'){
                flag++;
                //cout<<tictac[i][j]<<" "<<i<<" "<<j<<endl;
            }
        }
        if(flag==3){
            wincount++;
        }
    }
    for(i=0;i<3;i++){
        flag=0;
        for(j=0;j<3;j++){
            if(tictac[j][i]=='O'){
                //cout<<j<<" "<<i<<endl;
                flag++;
            }
        }
        if(flag==3){
            wincount++;
        }
    }
    if(tictac[0][0]=='O' && tictac[1][1]=='O' && tictac[2][2]=='O')
        wincount++;
    if(tictac[0][2]=='O' && tictac[1][1]=='O' && tictac[2][0]=='O')
        wincount++;
    return wincount;
}
int main()
{
	//code
	int t,i,j,k,xcount,ocount;
	string s;
	cin>>t;
    cin.ignore();
	while(t){
	    xcount=ocount=k=0;
	    getline(cin,s);
	    vector <char> arr;
	    for(i=0;i<s.length();i=i+2){
	        arr.push_back(s[i]);
	    }
	    char tictac[3][3];
	    for(i=0;i<3;i++){
	        for(j=0;j<3;j++){
	            //cout<<s[k]<<" ";
	            tictac[i][j]=arr[k];
	            //cout<<arr[k]<<" ";
	            if(arr[k]=='X')
	                xcount++;
	            else
	                ocount++;
	            k++;
	        }
	        //cout<<endl;
	    }
	    int xwins = checkXwin(tictac);
	    int owins = checkOwin(tictac);
	    //cout<<xwins<<" "<<owins<<endl;
	    //cout<<xwins<<" "<<owins<<endl;
	    if(xcount-ocount==1 && flag1==1 && flag2==1 && owins==0){
	        cout<<"Valid"<<endl;
	    }
	    else
	        cout<<"Invalid"<<endl;
	    t--;
	}
	return 0;
}