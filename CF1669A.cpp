#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>y;
    while(y--){
    cin>>x;
    if(x<=1399)cout<<"Division 4"<<endl;
    else if(x>=1400 && x<=1599)cout<<"Division 3"<<endl;
    else if(x>=1600 && x<=1899)cout<<"Division 2"<<endl;
    else if(x>=1900)cout<<"Division 1"<<endl;
    }

}
