#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

class consecutive_prime{
    public:
    vector<long long> primenum;
    void cprimes(){        
        int z = MAX;
        int zsq = sqrt(z);
        int visited[z/2+500] = {0};
        for (int i=1; i<=(zsq-1)/2; i++)
        for (int j=(i*(i+1))<<1; j<=z/2; j=j+2*i+1)
        visited[j] = 1;
        primenum.push_back(2);
        for (int i=1; i<=z/2; i++)
        if (visited[i] == 0)
        primenum.push_back(2*i + 1);
    }

    int binarySearch(int beg, int end, int item)  
    {  
        int mid;  
        if(end >= beg)   
        {     
            mid = (beg + end)/2;  
            if(mid ==0 || mid == primenum.size()-1)  
            {  
                return primenum[mid];  
            }  
            else if(primenum[mid] == item)   
            {  
                return primenum[mid - 1];   
            }  
            else if(primenum[mid] <item && primenum[mid+1] > item)  
            {  
                return primenum[mid];  
            }  
            else if (item < primenum[mid])
                return binarySearch(beg, mid-1, item);

            else
                return binarySearch(mid+1, end, item);
        }        
        return 0;   
    }
    
    void solve(int z){
        int x=int(sqrt(z));
        cprimes();
        int res=binarySearch(0, primenum.size()-1, x);
        int temp=z/res;
        if(temp*res==z) cout<<z;
        else{
            int res1=binarySearch(0, primenum.size()-2, x-1);
            cout<<res1*res;
        }
        cout<<endl;
    }
};

int main (){
    int t;
    cin >> t;
    int d=1;
    while (t--){
        int z;
        cin >> z;
        cout<<"Case #"<<d<<": ";
        consecutive_prime obj;
        obj.solve(z);
        d++;
    }   
    return 0;
}


/* #define MAX 1000000
vector<int> primes;

void Solution()
{
 int n = MAX;
 int nNew = sqrt(n);
 int marked[n/2+500] = {0};
 for (int i=1; i<=(nNew-1)/2; i++)
  for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1)
   marked[j] = 1;
 primes.push_back(2);
 for (int i=1; i<=n/2; i++)
  if (marked[i] == 0)
   primes.push_back(2*i + 1);
}
int binarySearch(int left,int right,int n)
{
 if (left<=right)
 {
  int mid = (left + right)/2;
  if (mid == 0 || mid == primes.size()-1)
   return primes[mid];
  if (primes[mid] == n)
   return primes[mid-1];

  if (primes[mid] < n && primes[mid+1] > n)
   return primes[mid];
  if (n < primes[mid])
   return binarySearch(left, mid-1, n);
  else
   return binarySearch(mid+1, right, n);
 }
 return 0;
}

void solve(int n){
    int x=int(sqrt(n));
    Solution();
    int res=binarySearch(0, primes.size()-1, x);
    int temp=n/res;
    if(temp*res==n) cout<<n;
    else{
        int res1=binarySearch(0, primes.size()-2, x-1);
        cout<<res1*res;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int n;
        cin>>n;
        cout<<"Case #"<<i<<": ";
        solve(n);
        ++i;
    }
} */