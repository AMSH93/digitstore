#include "storagesll.h"
#include <stdlib.h>

/* Root item */
static item *root = NULL;


/*set function*/
void set(int pvalue, char* pname){
	item *nitem = (item*)malloc(sizeof(item));
	nitem->value = pvalue;
	nitem->name = pname;
	nitem->next = NULL;
	/*if root is equal to null, make this item root*/
	if(root==NULL){
		root=nitem;
		return;
	}
	item *current=root;
	/*This while command will check 'next' for where the next part of the
	list is. It will continue down the chain until it finds the bottom,
	and then make our item the next on the chain. */
	while(current->next!=NULL){
		current=current->next;
	}
	current->next = nitem;
}

/*get function*/
char* get(int pvalue){
	item *cur = root;
	while (cur!=NULL){
		if(cur->value==pvalue){
			return cur->name;
	}
	cur=cur->next;
	}
	return NULL;
}

