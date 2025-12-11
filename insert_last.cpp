#include <bits/stdc++.h>
using namespace std;
 void insert_last(vector<int>&v,int val){
    v.resize(v.size()+1);
    v[v.size()-1]=val;
}

int main()
{
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];
int x;
cin>>x;
insert_last(v,x);
for(int y:v)
cout<<y<<" ";

    return 0;
}