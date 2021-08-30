#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countVowels(string str){
        
        int count = 0;

        for (int v=0; str[v]!='\0'; v++){
            if(str[v] == 'a' || str[v] == 'e' || str[v] == 'o' || str[v] == 'u' || str[v] == 'i')
            {count++;}
        }
        return count;
}
};

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.countVowels(s) <<  endl;
    }


    return 0;
}


/* 
Input:
s = geeks
Output: 
2 
*/