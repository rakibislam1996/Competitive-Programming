#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node* createNode(int data,Node *next)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        exit(0);
        cout<<"Could not create a new node\n";
    }
    (*newNode).data = data;  /// newNode -> data = data;
    (*newNode).next = next;  /// newNode -> next = next;
    return newNode;
}

int main()
{
//    Node *nd;
//    nd = createNode(20,NULL);
//    cout<<(nd->data)<<endl;

    Node *head,*curr;
    head = createNode(0,curr);

    int n,data;
    cin >> n;
    for(int i=0;i<n;i++)
    {

        cin>>data;
        if(i==n-1)
        {
            curr = createNode(data,NULL);

        }
        Node *newNode;

        head->next = createNode(data,newNode);



    }
    while(head->next!=NULL)
    {
        Node *x = head->next;
        cout<<x->data<<endl;
        head = x->next;
    }



    return 0;
}

