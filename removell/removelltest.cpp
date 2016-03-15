#include<iostream>
#include<stdio.h>
#include<string.h>
#include"LinkedList.h"

using namespace std;

Node* removeNthFromEnd(Node* head, int n) {
     	Node* p=head;
        Node* q=head;
        Node* m=NULL;
        if(head==NULL||head->next==NULL)
        {
            head=NULL;
            return p;
        }
        
        for(int i=0;i<n;i++)
        {
            q=q->next;
        }
        while(q)
        {
            m=p;
            q=q->next;
            p=p->next;
        }
		if(p==head)
		{
			head=head->next;			
		}
		else
		{           
           m->next= m->next->next;      
		}
		return p;
    }

void main()
{
	list ilist;
	
    ilist.insertlist(0,1);
	ilist.insertlist(1,2);

	Node* n=removeNthFromEnd(ilist.gethead(),2); 
	cout<<"头指针："<<ilist.gethead()->Data<<endl;
	cout<<"结果："<<n->Data<<endl;
	system("pause");
}
