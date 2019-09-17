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
   int n,i,a,b;
   cin>>n;

   for(i=1;i<=n;i++)
  {
      cin>>a>>b;
      if(a>b)
      {
          cout<<">"<<endl;

      }
      else if(a<b){
        cout<<"<"<<endl;
      }
      else
      {
          printf("=\n");
      }
  }
}
