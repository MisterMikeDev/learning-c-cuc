#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create_list() {
    struct node* head = (struct node *)malloc(sizeof(struct node));
    head->data  = -1;
    head->next = NULL;
    return head;
}

void add_node(int nData, struct node* head) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = nData;
    newNode->next = NULL;

    struct node* ptr = head;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = newNode;
}

void print_data(struct node *head) {
    if(head ==  NULL) {
        printf("Empty List\n");
        return;
    }

    struct node* ptr = head;
    /*while(ptr->next != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }*/
    do{
        printf("%d ", ptr->data);
        ptr =  ptr->next;
    }  while(ptr->next != NULL);
}



int main()
{
    struct node* head = create_list();  

    add_node(7, head);
    add_node(15, head);
    add_node(17, head);
    add_node(19, head);
    add_node(25, head);

    printf("Data:\n");
    print_data(head);

    //printf("size of int = %d\n", sizeof(int));
    //printf("size of struct node =%d\n", sizeof(struct node));




    return 0;
}