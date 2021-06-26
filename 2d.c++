#include<iostream>
using namespace std;
int main()
{long long n,sum=0,x=0,y=0,b;
cin>>n;n--;
cin>>b;sum+=b;
x=b;
for(long long i=1;i<n;i++)
{cin>>b;//storing even indices of array b in x and odd indices in y 
if(i%2!=0)y=b;//at each step you need to store exactly 2 values
else x=b; //max value is b1+min(b1,b2)+min(b2,b3)...min(b(n-2),b(n-1))+b(n-1) solving the equation given
sum+=min(x,y);
}
sum+=b;
cout<<sum;
return 0;
}
