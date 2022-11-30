#include<iostream>
using namespace std;
int main()
{
 int row;
  int col;
  int tree;
  cin>>row;
  cin>>col;
  cin>>tree;
  if(tree<=col && tree >=1){
  	cout<<"Yes";
    return 0;
  }
  else if(tree%col==0 || tree%col==1){
  cout<<"Yes";
    return 0;
  }
  else{
    cout<<"No";
  }
}

//mango tree 2
#include<iostream>

using namespace std;

int main()

{

 int r,c,n;

 cin>>r>>c>>n;

 if(n<r || n>r*(c-1) || n%r==1)

   cout<<"Yes";

 else

   cout<<"No";

}