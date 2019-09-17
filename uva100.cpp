#include<iostream>
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
    int i,j,k,cunti,m=1;

    cin>>i>>j;

   for(k=i;k<j;k++)
   {
        cunti=1;
    while(k > 1)
    {


        if(k%2==0)
        {
            k=k/2;


        }
        else
        {
            k=3*k+1;
        }

            cunti++;

    }
if(cunti>m)
{
    m=cunti;
}

   }
cout<<" "<<m;
}
