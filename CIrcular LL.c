#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head=NULL;
void DISP();
void DELETE();
void INSERT();
void init();


void main(){
	int choice,c;
	do{
		printf("Enter\n1:CREATE\n2:INSERT\n3:DELETE\n4:DISPLAY\n5:EXIT\n");
		scanf("%d",&choice);
		switch(choice){
		
			case 1:
				if(head!=NULL){
				
					printf("Are You sure you want to create a new link list(0/1)");
					scanf("%d",&c);
					if(1)
						init();
					else
					break;
				
				}
				else
				init();
				break;
			case 2:
				if(head==NULL)
					init();
					
				else
				INSERT();
				break;
			case 3:
				if(head==NULL)
				printf("No element to delete");
				else 
				DELETE();
				break;
			case 4:
				if(head==NULL)
				printf("List Empty");
				else
				DISP();
				break;
			case 5:
				break;
			default:
				printf("Invalid Choice");
				break;
				
				
		}
	}while(choice!=5);
}
void init(){
	node *temp;
	int e;
	temp=malloc(sizeof(node));
	printf("Enter the element to be inserted");
	scanf("%d",&e);
	temp->data=e;
	head=temp;
	temp->next=head;
}
void INSERT(){
	node *temp;
	node *k=head;
	int e;
	temp=malloc(sizeof(node));
	printf("Enter the element to be inserted ");
	scanf("%d",&e);
	temp->data=e;
	while(k->next!=head){
		k=k->next;
		
	}
	k->next=temp;
	temp->next=head;
}
void DELETE(){
	int value,pos,i;
	node *k=head;
	node *temp;
	
	if(head!=NULL){
		printf("Enter the position from which the link lsit needs to be deleted");
		scanf("%d",&pos);
		if(pos==1){
			
		if(head!=NULL){
			temp=head;
			while(temp->next!=head){
				temp=temp->next;
			}
			temp->next=head->next;
			head=temp;
		
	}
	else{
		printf("Empty Link List");
	}
		}
		else{
			for(i=2;i<pos;i++){
				k=k->next;
				if(k->next==head)
				break;
			}
			if(k->next==head){
				printf("DELETION from the given index not possible \n");
				
			}
			else{
				value=k->next->data;
				temp=k->next->next;
				k->next=temp;
				printf("The Deleted value is %d",value);
			}
		}
		
		
	}
	else{
		printf("Empty Link List");
	}
	
}
void DISP(){
	node *temp=head;
	while(temp->next!=head){
		printf("%d \n",temp->data);
		temp=temp->next;
			
	}
	printf("%d\n",temp->data);
}

