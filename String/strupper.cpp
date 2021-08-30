#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string caseConversion(string str){
        
        //Your code here
        //transform(str.begin(),str.end(),str.begin(),::toupper);
        for (int i=0; i<str.length(); i++)
            putchar(toupper(str[i]));
        
    }
};


int main() {
		
	string s;
	cin >> s;
	Solution obj;
	cout << obj.caseConversion(s) << endl;
	
	return 0;
	
}
