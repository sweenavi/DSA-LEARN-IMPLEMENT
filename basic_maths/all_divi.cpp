#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
#include<vector>

void print_divi(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
        
    }
    //o(n)
}

void best(int n)
{
    vector<int> div;
    for(int i=0;i<=sqrt(n);i++)
    {
        if(n%i==0 )
        {
            div.push_back(i);
            if(n/i!=i)
            {
                div.push_back(n/i);
            }
        }
    }

    for(auto v:div)
    {
        cout<<v<<endl;
    }
//o(logn)
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print_divi(n);
    cout<<"Best:"<<endl;
    best(n);
    return 0;

}