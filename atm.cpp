#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int amt;
    float bal;

    cin>>amt>>bal;

    if(((float)amt)>(bal-0.50))
        cout<<fixed<<setprecision(2)<<bal;
    
    else if(amt%5!=0)
        cout<<fixed<<setprecision(2)<<bal;
    
    else
    {
        cout<<fixed<<setprecision(2)<<(bal-amt-0.50)<<endl;
    }
    return 0;
}
