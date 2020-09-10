#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    cin >>tc;
    for(i=1;i<=tc;i++)
    {
        int n,z,sum=0;
        cin >> n;
        int a[n];
        for(z=1;z<=n;z++)
        {
            cin >> a[z];
            if(a[z]<0)
            {
                a[z]=0;
            }
            sum=sum+a[z];

        }

        printf("Case %d: %d\n",i,sum);
    }
}
