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
    int n,b,h,x,i,j,p,arr;

   while(scanf("%d%d%d%d",&n, &b ,&h, &x)==4)
    {  int minn=5000000;
       for(i=1;i<=h;i++)
       {
             cin>>p;

           for(j=1;j<=x;j++)
         {
            cin>>arr;
            if(arr>=n)
            {
              int bdg=n*p;
              if(bdg<minn)
              {
                  minn=bdg;
              }
            }
         }
       }



          if(minn<=b)
            {
                cout<<minn<<endl;
            }
            else
            {
              cout<<"stay home"<<endl;
            }

    }
}


