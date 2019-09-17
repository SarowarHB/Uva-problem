#include<bits/stdc++.h>
/*
    Sarowar Hossain Bhuyain
    City University,Pnathapath,Dhaka,Bangladesh;

    Hacker Rank-Sarowar Hossain
    Uva-sarowar75856
    URI-SAROWAR_BHUYAIN
    Toph-sarowar_hsb

*/

using namespace std;

int main()
{
    int tk,sum=0,n,i;
    char d[100],r[100];
    cin>>n;

    while(n--)
    {
            cin>>d;
            if(strcmp(d,"donate")==0)
            {
                 cin>>tk;
                 sum=sum+tk;
            }
            else
            {
                cout<<sum<<endl;
            }
    }
    return 0;
}
