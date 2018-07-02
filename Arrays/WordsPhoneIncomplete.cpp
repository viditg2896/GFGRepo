#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct NumAlpha{
    int num;
    string alphas;
}n[10];
void initialize(){
    for(int i=0;i<10;i++){
        n[i].num=i;
    }
    n[0].alphas = "";
    n[1].alphas = "";
    n[2].alphas = "abc";
    n[3].alphas = "def";
    n[4].alphas = "ghi";
    n[5].alphas = "jkl";
    n[6].alphas = "mno";
    n[7].alphas = "pqrs";
    n[8].alphas = "tuv";
    n[9].alphas = "wxyz";
}
int main() {
	//code
	int t,tot,i,temp,j;
	cin>>t;
    initialize();
	while(t){
	    cin>>tot;
	    int nos[tot];
	    for(i=0;i<tot;i++){
	        cin>>nos[i];
	    }
        vector <string> strs;
        for(i=0;i<tot;i++){
            strs.push_back(n[nos[i]].alphas);
        }
        int counters[strs.size()],iterators[strs.size()];
        for(i=0;i<strs.size();i++){
            counters[i]=strs[i].length();
            iterators[i]=0;
        }
        while(1){
            cout<<strs[i][iterators[j]];
        }
        vector <string> result;
        string dummy="";

	    t--;
	}
	return 0;
}