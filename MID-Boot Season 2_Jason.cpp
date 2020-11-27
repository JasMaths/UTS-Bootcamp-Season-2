#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int patient;
	int priority;
	struct node* next;
}Node;

Node* NewNode(int pa,int pr) {
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->patient=pa;
	temp->priority = pr; 
	temp->next = NULL;
	
	return temp;
}

int peek(Node** head) { 
	return (*head)->patient; 
} 

void pop(Node** head) { 
	Node* temp = *head; 
	(*head) = (*head)->next; 
	free(temp); 
} 

void push(Node** head, int pa, int pr) { 
	Node* start = (*head); 
	Node* temp = NewNode(pa, pr); 

	if ((*head)->priority > pr) { 

		temp->next = *head; 
		(*head) = temp; 
	} 
	else { 
		while (start->next != NULL && 
			start->next->priority < pr) { 
			start = start->next; 
		} 
		temp->next = start->next; 
		start->next = temp; 
	} 
} 


int main () {
	int N1,N2,Y,H,D,hasil,Pr;
	char Nation[255], Name[255], A[255],M[255];
	scanf("%d %d",&N1,&N2);
	for(int i=0;i<N1;i++){
	scanf("%d %s %d - %s",&D,M,&Y,Name);
}
	hasil=N1-N2;
	printf("Need %d more cure\n",hasil);
	for(int j=0;j<hasil;j++){
		printf("%d %s %d - %s\n",D,M,Y,Name);
	}
	
	return 0;
}