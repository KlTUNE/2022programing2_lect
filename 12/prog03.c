#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
    int num; // データ部
    struct elem *next; //ポインタ部
}Elem;

void print_list(Elem *root){
    while (root != NULL){
        printf("%d ",root -> num);
        root = root -> next;
    }
    printf("\n");
}

Elem *add_elem(Elem *root, int num){
    Elem *p=(Elem *)malloc(sizeof(Elem));
    p -> num = num;
    p -> next = root;
    return p;
}

int main(void){
    Elem *root=NULL;

    root = add_elem(root, 10);
    print_list(root);

    return 0;
}