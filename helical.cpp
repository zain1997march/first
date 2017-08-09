#include <iostream>
#include <vector>
using namespace std;


int main()
{  
int i,j,r,c,count=0,x;
cin>>r>>c;
vector<vector<int> >arr;


 for(i=0;i<r;++i)
 {  vector<int >row;
 	for(j=0;j<c;++j)
 		{cin>>x;
 	     row.push_back(x);
        }
     arr.push_back(row);   
        
 }



cout<<endl;
  for(i=0;i<r;++i)
 { cout<<endl;
 	for(j=0;j<c;++j)
 	    cout<<arr[i][j]<<" ";
 }
 cout<<endl;
 cout<<endl;

 for(i=0;i<r;++i)
 {
 	if(count%2==0){
 	for(j=0;j<c;++j)
 	   cout<<arr[i][j];
 		}

 	else {
 	 for(j=c-1;j>=0;--j)
 	   cout<<arr[i][j];	
     }
     count++;
 }


}