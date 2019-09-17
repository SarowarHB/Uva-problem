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
    int k,m,n,i,x,y;
   while(scanf("%d",&k)<=1&&k!=0){


   cin>>m>>n;
   for(i=0;i<k;i++)
   {
       cin>>x>>y;
       if(m==x||n==y)
       {
           cout<<"divisa"<<endl;
       }
       else if(m<x&&n<y)
       {
           cout<<"NE"<<endl;
       }
       else if(m>x&&n<y)
       {
           cout<<"NO"<<endl;
       }
       else if(m>x&&n>y)
       {
           cout<<"SO"<<endl;
       }
       else if(m<x&&n>y)
       {
           cout<<"SE"<<endl;
       }
   }
   }


}
