#include <iostream>
using namespace std;

void hanoi(int n,char source,char destination,char helper)
{if(n==0)
	return;

     hanoi(n-1,'s','h','d');
     cout<<" move the "<<n<<" disk from "<<source<<" to "<<destination<<endl;
     hanoi(n-1,'h','d','s');
}

int main()
{
int n;cin>>n;

hanoi(n,'s','d','h');

}