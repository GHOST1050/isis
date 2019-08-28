#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m;
    vector<int> b;
    string in,out;
    cout<<"enter plain text \n";
    getline(cin,in);
    cout<<"enter key : ";
    cin>>n;
    cout<<"enter order\n";
    for(i=0;i<n;i++)
    {
        cin>>m;
        b.push_back(m);
    } 
    if(in.size()%n!=0)
    {
        m=n-(in.size()%n);
        for(i=0;i<m;i++)
            in.append("x");
    }
    vector<string> a(n, "");
    vector<string> c(n, "");
    for(i=0;i<in.size();i++)
    {
        a[i%n].push_back(in[i]);
    }
    for(i=0;i<n;i++)
    {
        c[b[i]-1]=a[i]; 
    }
    out=c[0];
    for(i=1;i<n;i++)
    {
        out.append(c[i]);
    }
    cout<<out;
    //cout<<c[1];
    cout<<"\n\ndecrypt\n\n";
    for(i=0;i<out.size();i++)
    {
        
    } 
    return 0;
}