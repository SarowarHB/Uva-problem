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
    int salary[3],i,j,n;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>salary[j];
        }
        sort(salary,salary+3);
        cout<<"Case"<<" "<<i<<":"<<" "<<salary[1]<<endl;
    }
    return 0;
}
