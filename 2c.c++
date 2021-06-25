#include <iostream>
#include<unordered_map>
typedef long long ll;
using namespace std;
const ll MOD = 1000000007;
unordered_map<ll,ll> Fib;
ll fib(ll n)//fibonacci-fib
{   if(n<0) return 0;
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = ((fib((n+1)/ 2))% MOD)*((fib(n/2))% MOD)+((fib((n-1)/2))% MOD)*((fib((n-2) / 2))% MOD);
    Fib[n]%=MOD;
    return Fib[n];
}
//the problem can be seen as splitting a stair into parts without breaks and using AND rule to count the total no of paths
//in a part without breaks,0->n has fib(n) possible paths.(solving the reccurence p(n)=p(n-1)+p(n-2) obtained via combinatorics)
int main()
{ll n,prod=1,m,x=-1,y=-1;
cin>>n>>m;
while(m--)
{cin>>y;
prod=(prod*fib(y-x-2))% MOD; // x+1 to y-1,same as 0 to y-x-2  
x=y;
}
prod=prod*fib(n-y-1) % MOD; // y+1 to n,same as 0 to n-y-1
cout<<prod;    
}