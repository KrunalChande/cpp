#include"contactlist.h"
using namespace std;

contactlist::contactlist():head(0), size(0)
{}

 void contactlist::addToHead(const string& name)
 {
	 contact* newone = new contact(name);
	 if(head ==0)
		 head = newone;
	 else
	 {
		 newone->next=head;
		 head = newone;
	 }
	 size++;
 }

 void contactlist::printlist()
 {
	 contact* tp = head;
	 while(tp!=0)
	 {
		 cout<<*tp<<endl;
		 tp=tp->next;
	 }

 }

 void contactlist::insert(const std::string& name)
 {
	 contact*newNode = new contact(name);

	 if (head==0)
	 {
		 head = newNode;
	 }
	 else
	 {
		 contact* curr = head;
		 contact* trail = 0;

		 while(curr!=0)
		 {
			 if(curr->name >= newNode->name)
				 break;
			 else
			 {
				 trail = curr;
				 curr = curr->next;
			 }
		 }
		 if(curr==head)
		 {
			 newNode->next = head;
			 head = newNode;
		 }
		 else
		 {
			 newNode->next = curr;
			 trail->next = newNode;
		 }
	 }
	 size++;
 }

 void contactlist::deleteNode(const std::string& name)
 {
	 if(head ==0) cout<<"node cannot be deleted from empty list"<<endl;

	 else
	 {
		 contact* curr = head;
		 contact* trail = 0;

		 while(curr!=0)
		 {
			 if(curr->name == name) break;
			 else
			 {
				 trail = curr;
				 curr= curr->next;
			 }
		 }
		 if(curr ==0)
			  cout<<"contact with name: "<<name<< " not found"<<endl;
		 else
		 {
			 if(head ==curr)
			 {
				 head = head->next;
			 }
			 else
			 {
				 trail->next = curr->next;
			 }
			 delete curr;
			 size--;
		 }
	 }
 }
