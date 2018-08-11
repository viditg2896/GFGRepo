#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	/*
	There are n students in a class, each in possession of a different funny story.
	As the students were getting bored in the class, they decided to come up with a
	game so that they can pass their time. They want to share the funny stories with
	each other by sending electronic messages. Assume that a sender includes all the
	funny stories he or she knows at the time the message is sent and that a message
	may only have one addressee. What is the minimum number of messages they need to
	send to guarantee that everyone of them gets all the funny stories?
	*/
	//pehle sab ek ek karke apni story add krte hue nth bande tk bhejenge-(n-1) messages
	//fir nth banda final message jisme saari story hongi - sabko bhejdega-(n-1) messages 
	unsigned long long int t,n;
	cin>>t;
	while(t){
	    cin>>n;
	    unsigned long long int ans = n*(2);
	    ans=ans-2;
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}