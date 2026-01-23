#include <bits/stdc++.h>
using namespace std;
 void insert_first(vector<int>&v,int pos,int val){
    v.resize(v.size()+1);
    //v[v.size()-1]=val;
    for(int i=v.size()-1;i>pos;i--)
    v[i]=v[i-1];
    v[pos]=val;
}

int main()
{
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];
int x,val;
cin>>x>>val;
insert_first(v,x,val);
for(int y:v)
cout<<y<<" ";

    return 0;
}
