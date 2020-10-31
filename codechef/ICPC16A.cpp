#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int x1,y1,x2,y2;
	for(int i=0;i<t;i++)
	 {
       cin>>x1>>y1>>x2>>y2;
       if(x1==x2&&y1!=y2)
        {
            if(y1<y2)
            cout<<"up";
            else
            cout<<"down";
        }
       else if(x1!=x2&&y1==y2)
       { if(x1>x2)
          cout<<"left";
          else
          cout<<"right";
        }
      else
      cout<<"sad";

      cout<<"\n";

    }

	return 0;
}
