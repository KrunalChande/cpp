#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree()
{
	struct node* head = new node;
	struct node* second = new node;
	struct node* third = new node;
	//head = new node;
	head->data = 1;
	second->data = 2;
	third->data = 3;
	head->next=second;
	second->next=third;
	third->next=NULL;
	return head;
}

void printList(struct node* head)
{
	struct node* curr = head;
	while(curr !=NULL)
		{
		cout<<curr->data<<"|";
		curr=curr->next;
		}
	cout<<endl;
}

int listLength(struct node* head)
{
	struct node* curr = head;
	int i = 0;
	while(curr!=NULL)
		{
		i++;
		curr = curr->next;
		}
	return i;
}

void changeToNull(struct node** head)
{
	*head = NULL;
}

void addAtHead(struct node** head)
{
	struct node* newNode = new node;
	newNode->next=*head;
	newNode->data=0;
	*head = newNode;
}

int count(struct node* head, int n)
{
	int i = 0;
	struct node* curr = new node;
	curr = head;
	while(curr!=NULL)
	{
		if(curr->data==n) i++;
		curr = curr->next;
	}
	return i;
}

void addAtTail(struct node* head)
{
    int length = listLength(head);
    addAtTail(struct node* head, length);
}

void addAtTail(struct node* head, int n)
{
	struct node* newNode = new node;
	struct node* curr = new node;
	newNode->next = NULL;
	newNode->data = n;
	curr= head;
	while(curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = newNode;
}

int main()
{
	struct node* head = BuildOneTwoThree();
	printList(head);
	//changeToNull(&head);
	addAtHead(&head);
	addAtTail(head,5);
	printList(head);
	int c = count(head,n);
	cout<<"c is "<<c<<endl;
	int length = listLength(head);
	cout<<length<<endl;
	return 0;
}
