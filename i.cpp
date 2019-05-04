#include <iostream>
using namespace std;

int r,c,x,y;

main()
{
	cout<<"How many rows: ";
	cin>>r;
	cout<<"How many columns: ";
	cin>>c;
	for(x=1;x<=r;x++)
	{
		for(y=1;y<=c;y++)
			cout<<"*";
			cout<<endl;
	}
}
