#include <iostream>
using namespace std;
#define MAX 10000
int main() 
{
    bool binMap[MAX]={0};

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[10000];
        int min;
        cin>>n;
        for(int i=0;i< n;i++)
        {
            cin>>a[i];
        }
        for(int i= n-1;i >= 0; i--)
        {
            if(binMap[a[i]]==true)
            {
                min=i;
            }
            else
                binMap[a[i]]=true;
        }

        if(min!=-1)
        {
            cout<<min+1<<endl;
        }
        else
        {
            cout<<"-1";
        }
    }
    return 0;
}