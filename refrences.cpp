#include<bits/stdc++.h>
#include<string>
using namespace std;



int main()
{
    vector<string> str{"geeksforgeeks practice","geeksforgeeks ide","geeksforgeeks write"};
    
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i];
    }
    cout<<endl;

    for(auto x:str)
    cout<<x<<" ";

    cout<<endl;

    for(auto &x:str)
    cout<<x<<" ";

    cout<<endl;

    for(const auto &x:str)
    cout<<x<<" ";

    return 0;
}