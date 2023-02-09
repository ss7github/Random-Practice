#include <iostream>
using namespace std;
int main(){
  
/*
  Variables t, a, and b have been declared as integer 
  and variables s and c have been declared as float 
  since to add percentage, c will be float format and to add into s, it should be in float format.
*/  
  int t, a, b;
	float s, c;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>s>>a>>b>>c;
	    
/*
Here the percent rise is added to value of s. 
Make sure to divide c by 100.0 in order to preserve the sign of c else if you divide by 100, 
the program will add the percentage even if c is negative.
*/
	    s += (s*(c/100.0));
	    
	    if(s>=a && s<=b) cout<<"yes"<<endl;

	    else cout<<"no"<<endl;
	}
	return 0;
}
