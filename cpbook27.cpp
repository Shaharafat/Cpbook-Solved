#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,k,l;
    cin>>i;
    for(j=1;j<=i;j++)
    {
        cin>>a[0]>>a[1]>>a[2];
        for(l=0;l<2;l++)
        {
            if(a[l]>a[l+1])
                swap(a[l],a[l+1]);
        }
        if(a[0]>a[1])
            swap(a[0],a[1]);
        cout<<"Case "<<j<<": "<<a[0]<<" "<<a[1]<<" "<<a[2]<<'\n';
    }
    return 0;
}
