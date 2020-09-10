#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    cin >> tc;
    for(i=1;i<=tc;i++)
    {
        int m,n,result;
        cin >> m >> n;
        if((m*n)%2!=0)
        {
            result=((m*n)+1)/2;
        }
        else
        {
            result=(m*n)/2;
        }
        printf("Case %d: %d\n",i,result);

    }
}
