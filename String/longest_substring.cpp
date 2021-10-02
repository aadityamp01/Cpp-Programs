#include <bits/stdc++.h>
using namespace std;

class longest_substring{
    public:
        void long_str(int n, string str){
        int nums;
        nums=1;
        for(int i=0;i<n;i++)
        {  
            if( (int( str[i]))< int(str[i+1]))
            {
                cout<<nums<<" ";nums++;
            }
            else
            {
                cout<<nums<<" ";nums=1;
            }
        }
        cout<<endl;
    }
};

int main (){
    int t;
    cin >> t;
    int d=0;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        cout<<"Case #"<<d+1<<":"<<" ";
        d++;
        longest_substring obj;
        obj.long_str(n, s);
    }   
    return 0;
}
