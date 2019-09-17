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
    string str;
    int i=0;

    while(cin>>str && str != "*"){

            if(str=="Hajj")
            {
                cout<<"Case "<<++i<<": "<<"Hajj-e-Akbar"<<endl;
            }
            else if(str == "Umrah")
            {
                cout<<"Case :"<<++i<<": "<<"Hajj-e-Asghar"<<endl;
            }
        }
        return 0;
}

