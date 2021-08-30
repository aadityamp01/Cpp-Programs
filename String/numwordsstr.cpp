#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countWords(string str){
        
        //Your code here
        int count = 0;
        for (int i = 0; i< str.length(); i++){
            int space = str[i];
            if (isspace(space)){count++;}
        }
        return count + 1;
    }
};

int main(){
    string str;
    getline(cin, str);
    Solution obj;
    cout << "Number of words in the string is: " << obj.countWords(str);
    return 0;
}

/* 
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{   
	    string s;
	    getline(cin, s);
	    Solution obj;
	    cout << obj.countWords(s) << endl;
	}
	return 0;
	
} */

/* 
Input:
s = World is hello

Output: 
3 */
