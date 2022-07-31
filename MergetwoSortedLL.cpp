#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }

};
void TakeInput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while( data!=-1){
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{ 
       // Node* temp = head;
       // temp = newNode;
        tail = newNode;
        tail=tail->next;
        }
        
    }
    cin>>data;
  }
  //return head;

Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
{
    //Write your code here
     Node*fh=NULL;
    Node*ft=NULL;
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }
    else{
   
    
    if(h1->data<h2->data){
        fh=h1;
        ft=h1;
        h1=h1->next;
    }
    else if(h2->data<=h1->data){
        fh=h2;
        ft=h2;
        h2=h2->next;
        
    }
    
    while(h1!=NULL && h2!=NULL){
        if(h1->data<h2->data){
            ft->next=h1;
            ft=ft->next;
            h1=h1->next;
        }
        else {
            ft->next=h2;
            ft=ft->next;
            h2=h2->next;
        }
    }
void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
