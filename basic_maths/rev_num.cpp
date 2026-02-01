#include<iostream>
using namespace std;

void rev_num(int n)
{
    int rev=0,last_d=0;
    do{
        last_d=n%10;//for the extract
        // cout<<rev<<endl;
        n/=10;
        rev=rev*10+last_d;
        
    }while(n>0);
    cout<<rev;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    rev_num(n);
}