#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;
// total width 21
int main()
{
    int input,i,j,space,dif,width=21,len;
    string s;
    vector<vector<string>> str;
    cout<<"Enter the number of input line : "<<endl;
    cin>>input;
    getchar();
    vector<string> ss;
    for(i=0;i<input;i++)
    {
        getline(cin,s);
        ss.push_back(s);
        str.push_back(ss);
        ss.clear();
    }
    for(i=0;i<str.size();i++)
    {
        s=str[i].back();
        cout<<s<<endl;
    }
    for(i=0;i<str.size();i++)
    {
        s=str[i].back();
        len=s.size();
        dif=width-len;
        space=dif/2;
        for(j=0;j<space;j++)
        {
            cout<<' ';
        }
        cout<<s<<endl;
    }
    return 0;
}
