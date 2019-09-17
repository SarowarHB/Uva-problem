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
    int n;
    int arr[3000],i;
    int x[2000];
    while(scanf("%d",&n)==1)
    {
       for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k=0;
         for(i=0;i<n-1;i++)
        {

               x[k]=abs(arr[i+1]-arr[i]);
               k++;
        }
        bool ok=true;
        sort(x,x+k);
        for(i=0;i<k;i++)
        {
            if(x[i]!=i+1)
            {
                ok=false;
                break;
            }

        }
        if(ok==true)
        {
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }

    }
}
