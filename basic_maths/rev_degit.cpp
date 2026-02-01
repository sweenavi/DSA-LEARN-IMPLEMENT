#include<iostream>
using namespace std;

void extract_deg(int n)
{
    int d=0;
    do{
        d=n%10;//for the extract
        cout<<d<<endl;
        n/=10;
    }while(n>0);

}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    extract_deg(n);
}