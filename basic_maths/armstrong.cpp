#include<iostream>
using namespace std;

void rev_num(int n)
{
    int d=0;
    int sum=0;
    do{
        d=n%10;//for the extract
        d=(d*d*d);
        sum+=d;
        n/=10;
    }while(n>0);
    cout<<sum;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    rev_num(n);
}