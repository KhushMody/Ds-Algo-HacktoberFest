#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test>0)
    {
        int second,count=0,n,i,old=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);  // Sort the array in ascending order
        for(i=0;i<n;i++)
        {
            if(old!=a[i])
            {
                count++;  //Count as you find a new maximum
                old=a[i];  // Change the old variable to the latest maximum element found in the sorted array.
            }
            
        }
        cout<<count<<"\n";
        test--;
    }
    return 0;
}
