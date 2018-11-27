//maximise the tip of two WAITERS
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
bool comp(pair<int, int> x, pair<int, int> y)
{
    return (fabs(x.first-x.second)>fabs(y.first-y.second));
}
int main() {
	int t;
	cout<<"enter t\t";
	cin>>t;
	int n,x,y;
	while(t--)
	{
	  	cout<<"enter n,x,y\t";
	  cin>>n>>x>>y;
	  vector<pair<int,int> >a(n);
	  cout<<"enter tips of a ";
	  for(int i=0;i<n;++i) cin>>a[i].first;
	   for(int i=0;i<n;++i) cin>>a[i].second;
	  sort(a.begin(),a.end(),comp);
	  int ans=0;
	  for(int i=0;i < n;++i)
	  {
	      if(x > 0 && ((a[i].first>=a[i].second)||y==0))
	          {
	          ans+=a[i].first;
	          x--;
	      }
	      else if(y>0 &&((a[i].first<a[i].second)||x==0))
	          {
	          ans+=a[i].second;
	          y--;
	      }
	  }
	  cout<<ans<<endl;
	    
	}
	return 0;
}
