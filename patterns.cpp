#include<iostream>
using namespace std;
void patt1(int n)
{
    /* 
    * * * 
    * * *   
    * * *
    */
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void patt2(int n)
{
    /* 
    * 
    * *
    * * *
    * * * *
    * * * * *
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void patt3(int n)
{
    /* 
    * * * 
    * *    
    * 
    */
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    /*
    1 2 3 4
    1 2 3
    1 2
    1
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" " ;
        }
        cout<<endl;
    }

    /*
    1 1 1 1
    2 2 2
    3 3
    4
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++){
            cout<<i<<" " ;
        }
        cout<<endl;
    }
}

void patt4(int n)
{
    /*            
   *
  ***
 *****
*******
    */
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i-1;j++){      cout<<" ";  }
        
        for(int j=1;j<=2*i-1;j++){      cout<<"*";  }

        for(int j=0;j<=n-i-1;j++){      cout<<" ";  }

        cout<<endl;
    }

    /*
    *
   ***
  *****
 *******
*********
**********
 ********
  ******
   ****
    **
    */

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++){      cout<<" ";  }
        
        for(int j=1;j<2*n-(2*i-1);j++){      cout<<"*";  }

        for(int j=0;j<i;j++){      cout<<" ";  }

        cout<<endl;
    }

}

void patt5(int n)
{
    /* 
* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
    */
   for(int i=1;i<=2*n-1;i++)
    {
        int st;
        if(i<=n){st=i;}
        else{    st=2*n-i;}
        
        
        for(int j=0;j<st;j++){
            cout<<"* ";
        }
        cout<<endl;
       
    }
}

void patt6(int n)
{
    /* 
1
01
101
0101
10101
    */
   int st=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){st=1;}
        else{st=0;}
        for(int j=0;j<=i;j++){
            cout<<st;
            st=1-st;
            
        }
        cout<<endl;
    }
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
    int num=1;
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num+=1;
            
        }
        cout<<endl;
    }
    /*
A
A B
A B C
A B C D
A B C D E    
    */
    for(int i=0;i<n;i++)
    {
       
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
            
            
        }
        cout<<endl;
    }

   
}

int main()
{
    int n;
    cout<<"Enter the Num:";
    cin>>n;
    patt6(n);
    return 0;
}