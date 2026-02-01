#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    pair<int,int> p={11,12};
    cout<<p.first<<","<<p.second;

    pair<int,pair<int,int>> p1={11,{22,33}};
    cout<<p1.first<<","<<p1.second.first<<","<<p1.second.second;

    pair<int, int>a[]={{11,22},{66,77}};
    cout<<a[0].first;

}

void vect()
{
    vector<int> v;//empty vec
    v.push_back(11);//add
    v.emplace_back(22);//dyanamically inc its size and then it adds

    vector<pair<int,int>> p;
    p.push_back({44,55});
    p.emplace_back(78,43);//it doesnt need ot add within curly braces because it is auto assue that it is pair

    vector<int>v1(5,100);//5 elem of 100 values or another with o initialized
    vector<int>v2(v1);//copy

    vector<int>::iterator i =v.begin();//it direclty point s to the mem add
    i++;
    cout<<*i<<"";//pointer to get actual value

    //as like iterator from begin it can be v.end() also but not directly mem loc of last elem rather than 1 extra shifted
    //rend() rev end poiints to starts rbegin () to end

    cout<<v.back();

    for(vector<int>::iterator i =v.begin(); i!=v.end();i++)
    {//rathher use all intitialization us auto i=v.begin() or for each loop as auth i:v

        cout<<*i<<endl;
    }

    v.erase(v.begin()+1);//it will erase the values from begin+1 adn auto shifts its furtherr elem to by -1
    //v.insert(v.begin(),300) ||v.inesert(v.begin()+1,2,10) loc,how_many_time,val
    //v.size() v.pop_back() v.swap(v1) v.clear() v.empty
}

void li()
{
    list<int> ls;
    //ls.push_back(),emplace_back(),push_front and othwr same as vec
}
void deq()
{
    deque<int>dq;
    dq.push_back(67);//{67}
    dq.emplace_back(89);//{67,89}
    dq.push_front(63);//{63,67,89}

    dq.pop_back();
}
void stk()
{
    stack<int>st;
    st.push(3);
    st.emplace(8);
    st.top();
    st.pop();
    st.size();
    st.empty();//bool val

    stack<int> st1,st2;
    st1.swap(st2);


    //same for the q,,with back(),front()
    //priority_queue<int>pq..doing same as q as per greater val -max heap or descending
    //priority_queue<int,vector<int>,greater<int>pq -min heap or ascending
}

void sets()
{
    set<int> st;//stores unique and sorted
    st.insert(32);
    //emplace begin end rbrgin()

    auto i=st.find(32);//it is like iterator if find then returns bool val if find if no then st.end ie. end 
    st.erase(i);//alsa can give dorect elem
    //also have fun like upper_bound and lower_bound

    //all time compl is log

    //another option of the set multiset<int>st which stores sorted elem but doesnet unique
    //while erase it will erase all occ of it
    //if want to erase only 1st occ the..v.erase(v.find(3))
}


void maps()
{
    //it is like key and val pair
    map<int,int>mp;//1st is key and sec is val//and it same like set
    map<int,pair<int,int>>mp1;//2,{3,4}
    mp.insert({4,5});
    //empplce
    mp[2]=10;


}

void extra()
{
    //sort(v.begin(),v.end());
    //for decsending just as comparator -greater<int>
    pair<int,int> a[]={{1,2},{3,4}};
    bool comp(pair<int,int> p1, pair<int,int> p2)
    {
        if(p1.first > p2.first) return true;
        else return false;

    }

    sort(a,a+n,comp);

    //int n=7;
    //int cnt=__builtin_popcount();///it converts into bin and cnt how many set counts ie.1

    //string s='123';
    /*
    do{
    cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())
    */
   //it will give all the permutatons of the string
    
}

int main()
{
    //pairs();
    vect();
}