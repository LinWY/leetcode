#include<iostream>
using namespace std;
struct Node
{
int Data;
Node*next;
};
class list
{
Node*head;
public:
list(){head=NULL;}
void insertlist(int aData,int bData);
void deletelist(int aData);
void outputlist();
Node*gethead(){return head;}
};

void list::insertlist(int aData,int bData) //设aData是结点a中的数据，bData是结点b中的数据
{
Node*p,*q,*s; //p指向结点a，q指向结点a_k，s指向结点b
s=(Node*)new(Node); //动态分配一个新结点
s->Data=bData; //设b为此结点
p=head;
if(head==NULL) //若是空表，使b作为第一个结点
{
head=s;
s->next=NULL;
}
else
if(p->Data==aData) //若a是第一个结点
{
s->next=p;
head=s;
}
else
{
while(p->Data!=aData && p->next!=NULL)//查找结点a
{
q=p;
p=p->next;
}
if(p->Data==aData) ///若有结点a
{
q->next=s;
s->next=p;
}
else //若没有结点a；
{
p->next=s;
s->next=NULL;
}
}
}
void list::deletelist(int aData) //设aData是要删除的结点a中的数据成员
{
Node*p,*q; //p用于指向结点a,q用于指向结a的前一个结点
p=head;
if(p==NULL) //若是空表
return;
if(p->Data==aData) //若a是第一个结点
{
head=p->next;
delete p;
}
else
{
while(p->Data!=aData&&p->next!=NULL) //查找结点a
{
q=p;
p=p->next;
}
if(p->Data==aData) //若有结点a
{
q->next=p->next;
delete p;
}
}
}
void list::outputlist()
{
Node*current=head;
while(current!=NULL)
{
cout<<current->Data<<" ";
current=current->next;
}
cout<<endl;
}