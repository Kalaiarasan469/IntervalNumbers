#include <iostream>
using namespace std;
class Interval
{
int e,s,i=0,j=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s>>e;
	if(s>100000||e>1000000){get();}
	}
void prnt()
{
    	cout<<"OUTPUT"<<endl;
for(i=s+1;i<e;i++)
{
    if(i%2==1)
    {
cout<<i<<" ";
}
    }
}
};
int main()
{
Interval i;
i.get();
i.prnt();
return 0;
}