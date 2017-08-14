/*
 * Hello,
 * Unfortunately I didnt have time to find solutions to errors, but I hope
 * I was thinking in a good direction and still get some points.
 * first I created 2 structures - person and node, which include struct persons.
 * then I created 2 helping functions - create new node(using malloc function from 
 * starnard library - it allocates memory for the new node) and create head of node.
 * then, looping throuout my node I checked if next node is not null and then print the output.
 * thanks to having struct person in the node, I could get into all mambers of person via node.
 * I didnt check anything online during the exam except when you gave us time BEFORE the exam to look up 
 * how to ceate node and head. 
 */

/*
#include <stdio.h>
#include <stdlib.h>
// part A:
struct person {
	int ID;
	char *first[10];
	char *last[10];
}; 
// declaring node structure:
struct node {
	int value;
	struct person p;
	struct node *next;
};

///// creating new node:
struct node* create(int value, struct person p1,struct node* next){
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
	new_node ->value = value; 
	new_node -> p = p1;
	new_node->next=next;
	return new_node;
}
////// creating head of node:
 struct node* head;
struct node* create_head(struct node* head,int value, struct person p1){
	struct node* new_node = create(value, p1, head);
	head = new_node;
	return head;
}


void look_up_name(struct person *ptr, int ID){
	while(struct *node next != NULL){ 
	if (struct node.p.ID != '\0')
		
		printf("%c/n", struct person.first)
	else
		printf("No such ID in database");
}
}

int main() {
void look_up_name(struct person *ptr , int ID);


return 0;
}

*/

int main(){
	return 0;
}
