#include<iostream>
#include<string>
using namespace std;
int main()
{string a;int b=0,k=0,n;
cin>>n;
while(n--)
{b=0;k=0;
cin>>a;
for(int i=0;i<int(a.length());i++)
{ if (b<0)
     break;
    if(a[i]=='<')
        b+=1; //b is the number of < symbols in stack
    if(a[i]=='>')
        b-=1;//b is reduced everytime a > is found/< is removed
    if (b==0)
        k=i+1;//a part becomes proper prefix bracket whenever there are equal no of < and > in that portion
}
cout<<k<<"\n";
}
return 0;
}
