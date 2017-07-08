#include <iostream>
#include <stdlib.h>
using namespace std;

void condition(char,char);
void map_draw();
void game();

char arr[9]={'0','1','2','3','4','5','6','7','8'};
bool end=false;

int main()
{
	map_draw();
	
	game();

	return 0;
}


void condition(char arr[],char ch)
{ 
if(arr[0]==ch&& arr[4]==ch&& arr[8]==ch)
	end=true;
else if(arr[2]==ch&& arr[4]==ch&& arr[6]==ch)
	end=true;

else if(arr[0]==ch&& arr[1]==ch&& arr[2]==ch)
	end=true;
else if(arr[3]==ch&& arr[4]==ch&& arr[5]==ch)
	end=true;
else if(arr[6]==ch&& arr[7]==ch&& arr[8]==ch)
	end=true;

else if(arr[0]==ch&& arr[3]==ch&& arr[6]==ch)
	end=true;
else if(arr[1]==ch&& arr[4]==ch&& arr[7]==ch)
	end=true;
else if(arr[2]==ch&& arr[5]==ch&& arr[8]==ch)
	end=true;

 if (end)
 {
 	if (ch=='X')
 		cout<<endl<<endl<<"player 1 wins";

 	else if (ch=='O')
 		cout<<endl<<endl<<"player 2 wins";
 } 
                      
    
    

}

void game()
{
int u=2,x;

  while(!end)
  {
      if(u%2==0)
      {
      	//player 1
      	cout<<endl<<"player 1:";
      	cin>>x;
      	arr[x]='X';
      	cout<<endl;
      	system("cls");
      	map_draw();
      	cout<<endl;
      	condition(arr,'X');

      }

      else 
      {
      	//player 2
      	cout<<endl<<"player 2:";
      	cin>>x;
      	arr[x]='O';
      	cout<<endl;
      	system("cls");
      	map_draw();
      	cout<<endl;
      	condition(arr,'O');
      }

      u+=1;
      
  }
 

}


void  map_draw()
{

cout<<arr[0]<<'|'<<arr[1]<<'|'<<arr[2]<<endl;
cout<<'_'<<" "<<"_"<<" "<<"_"<<endl;
cout<<arr[3]<<'|'<<arr[4]<<'|'<<arr[5]<<endl;
cout<<'_'<<" "<<"_"<<" "<<"_"<<endl;
cout<<arr[6]<<'|'<<arr[7]<<'|'<<arr[8];


}