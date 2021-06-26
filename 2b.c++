//Naive implementation. Doesn't pass the difficult version of test
#include<iostream>
#include<array>
typedef long long ll;
using namespace std;
int main()
{ll n,q=1,l=0,r=0,v,max=-1;array<ll,1000000> a;
cin>>n;
cin>>q;max=n;
for(int i=0;i<n;i++)
a[i]=i+1;//Initialise the array
while(q--)
{cin>>l>>r>>v;
for(int i=l-1;i<=r-1;i++)
{a[i]+=v;//Update
if(a[i]>max)
max=a[i];}//check max value
}
cout<<max;
return 0;
}
