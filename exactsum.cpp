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
    int n,m,i,j,x,y,k,l,rsl,mn;

    while(scanf("%d",&n)!=EOF)
    {
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cin>>m;

    mn=999999;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
             x=arr[i];
             y=arr[j];
             rsl= abs(x-y);

            if(x+y==m&&rsl<mn)
            {
                 k=x;
                 l=y;
                mn=rsl;

            }
        }
    }
   printf("Peter should buy books whose prices are %d and %d.\n\n",k,l);

 }
}
