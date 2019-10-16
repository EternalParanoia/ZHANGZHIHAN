#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
typedef struct Node
{
    int num;
    string name;
    int score;
    struct Node *next;
}node;
node *input()
{
    int a;
    string b;
    int c;
    node *head,*p,*q;
head=(node*)malloc(sizeof(node));
head->next=NULL;
q=head;
while(1)
{
    cin>>a;
    if(a==0)
    {
        q->next=NULL;
        break;
    }
    else{
        cin>>b>>c;
        p=(node*)malloc(sizeof(node));
        p->num=a;
        p->name=b;
        p->score=c;
        q->next=p;
        q=q->next;
    }
}
    return head;
}
void show(node*h){
    node *hua;
    hua=h;
    while(hua->next!=NULL)
    {
        hua=hua->next;
        cout<<hua->num<<" "<<hua->name<<" "<<hua->score<<endl;
    }
}
int main()
{
    node *h;
    h=input();
    show(h);
    return 0;
}

