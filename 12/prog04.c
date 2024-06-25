#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
    int num; // データ部
    struct elem *next; //ポインタ部
}Elem;

void print_list(Elem *root){
    Elem *temp = root;
    while (temp != NULL){
        printf("%d ",temp -> num);
        temp = temp -> next;
    }
    printf("\n");
}

void free_list(Elem *root){
    Elem *temp = root;
    while (temp != NULL){
        free(temp);
        temp = temp -> next;
    }
}

Elem* add_elem(Elem *root, int num){
    Elem *p=(Elem *)malloc(sizeof(Elem));
    p -> num = num;
    p -> next = root;
    return p;
}

int main(void){
    Elem *root=NULL;

    root = add_elem(root, 10);
    root = add_elem(root, 30);
    root = add_elem(root, 20);
    print_list(root);
    free_list(root);

    return 0;
}