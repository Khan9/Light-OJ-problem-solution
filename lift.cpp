#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        int my_position,lift_position,time,diff,floors;
        cin >>my_position;
        cin >>lift_position;
        diff=my_position - lift_position;
        if(diff < 0)
        {

            diff=-diff;

        }
        time=(diff*4)+my_position*4+19;

        printf("Case %d: %d\n",i,time);
    }

}
