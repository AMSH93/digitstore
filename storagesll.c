#include "storagessl.h"
#include <stdlib.h>

/* Root item */
static item *root = NULL;


/*set function*/
void set(int pvalue, char* pname){
	item *nitem = (item*)malloc(sizeof(item));
	nitem->value = pvalue;
	nitem->name = pname;
	nitem->next = NULL;

	if(root==NULL){
		root=nitem;
		return;
	}
	item *current=root;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=nitem;
}

