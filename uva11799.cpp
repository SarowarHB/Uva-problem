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
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);

        cout<<"Case "<<i<<": "<<arr[n-1]<<endl;
    }
}
