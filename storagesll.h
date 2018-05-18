/*Storage, Singly Linked List; DigitStore*/
/*definitions*/
typedef struct item item;

/*header element*/
struct item {
	int value;
	char *name;
	item *next;
};

/*functions*/
/*set*/
void set(int pvalue, char *pname);

/*retrieve*/
char* get(int pvalue);

/*delete, note wont return confirmation*/
void clear(int pvalue);

