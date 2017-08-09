#include <bits/stdc++.h>
using namespace std;

int func(vector<int>arr)
{
	int n=arr.size();
	int num=0,d=0;

	
	
		for(int i=n-1;i>=0;--i)
	{
          num=num+arr[i]*pow(10,d++);
	}
	return num;


}

int main()
{
  int t,n,i,ele,num1,num2;
      vector<int>a,b,c;
cin>>t;
  
      while(t--)
      {num1=0;
      num2=0;
   
         cin>>n;
         for( i=0;i<n;++i)
         {
         	cin>>ele;
         	a.push_back(ele);
         }
         
         sort(a.begin(),a.begin()+n);

          for( i=0;i<n;++i)
          {
          	if(i%2==0)
              b.push_back(a[i]);

            else
            	c.push_back(a[i]);
          }

          num1=func(b);
          num2=func(c);
        

          cout<<num2+num1<<endl;
          a.erase(a.begin(),a.end());
           b.erase(b.begin(),b.end());
            c.erase(c.begin(),c.end());

      }

  

}