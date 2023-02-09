//Appproach 1 - TLE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    while((n-k)>=0){
	        n=n-k;
	    }
	    cout<<n<<endl;
	}
	return 0;
}
//-------------------------------------------------------------
//Approach 2 

