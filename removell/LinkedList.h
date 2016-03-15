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

void list::insertlist(int aData,int bData) //��aData�ǽ��a�е����ݣ�bData�ǽ��b�е�����
{
Node*p,*q,*s; //pָ����a��qָ����a_k��sָ����b
s=(Node*)new(Node); //��̬����һ���½��
s->Data=bData; //��bΪ�˽��
p=head;
if(head==NULL) //���ǿձ�ʹb��Ϊ��һ�����
{
head=s;
s->next=NULL;
}
else
if(p->Data==aData) //��a�ǵ�һ�����
{
s->next=p;
head=s;
}
else
{
while(p->Data!=aData && p->next!=NULL)//���ҽ��a
{
q=p;
p=p->next;
}
if(p->Data==aData) ///���н��a
{
q->next=s;
s->next=p;
}
else //��û�н��a��
{
p->next=s;
s->next=NULL;
}
}
}
void list::deletelist(int aData) //��aData��Ҫɾ���Ľ��a�е����ݳ�Ա
{
Node*p,*q; //p����ָ����a,q����ָ���a��ǰһ�����
p=head;
if(p==NULL) //���ǿձ�
return;
if(p->Data==aData) //��a�ǵ�һ�����
{
head=p->next;
delete p;
}
else
{
while(p->Data!=aData&&p->next!=NULL) //���ҽ��a
{
q=p;
p=p->next;
}
if(p->Data==aData) //���н��a
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