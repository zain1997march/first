#include <iostream>
using namespace std;

 struct node
 {
 	int data;
 	node * link;

 	node (int d)
 	{
          data=d;
          link=NULL;
    }
 };
void printList(node * head){
	//printing list
	node * curNode = head;
	while (curNode != NULL){
		cout << curNode->data << "--->";
		curNode = curNode->link;
	}
	cout << endl;
}

node * addNode(node * head, int d){
	if (head == NULL){
		head = new node(d);
		return head;
	}

	node * tmp = head;
	while(tmp->link != NULL) tmp = tmp->link;
	tmp->link = new node(d);
	return head;
}


int getLen(node * head){
	int cnt = 0;
	node * tmp = head;
	while(tmp != NULL){
		cnt++;
		tmp = tmp->link;
	}
	return cnt;
}

 node * func(node *head,int k)
 {
    int p=getLen(head)/k;

      node *tmp=head;
      node *next=NULL;
      node *n_tmp=NULL;
      node *j[10]={NULL};
  
   for(int i=1;i<=p;++i)
   {
       int n=1;
       n_tmp=tmp;

        while(n%k!=0)
        {
          tmp=tmp->link;
          n++;
        }
        j[i]=tmp;
         next=tmp->link;
         tmp->link=n_tmp->link;
         tmp->link->link=n_tmp;
         next->link=n_tmp;
         tmp=next;
         n=1;

      } 

         head=j[1];
return head;
   


 }

 int main()
 {
 	node * head=NULL;
 	int n,k;
 	cin>>n;
   for(int i=1;i<=n;++i)
   {
     head=addNode(head,i);

   }
printList(head);
       cin>>k;
head= func(head,k);
printList(head);


return 0;
 }