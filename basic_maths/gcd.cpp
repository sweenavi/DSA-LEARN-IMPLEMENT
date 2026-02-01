#include<iostream>
using namespace std;

void gcd(int n1,int n2)
{
    int gcd=1;
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
}

void hcf(int n1,int n2)
{
    int gcd=1;
    for(int i=min(n1,n2);i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
            break;
        }
    }
    cout<<gcd;
}

void eucledian(int n1,int n2)
{
    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;

    }
    if(n1==0) cout<<n2;
    else cout<<n1;

}
int main()
{
    int n1,n2;
    cout<<"Enter the number:";
    cin>>n1>>n2;
    gcd(n1,n2);
    hcf(n1,n2);
    eucledian(n1,n2);
    return 0;
}