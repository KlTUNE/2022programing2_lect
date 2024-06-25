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

void free_list(Elem *root){
    while (root != NULL){
        free(root);
        root = root -> next;
    }
}

Elem* add_elem(Elem *root, int num){
    Elem *p = (Elem *)malloc(sizeof(Elem));
    Elem *prev = NULL;
    Elem *temp = root;
    while (temp != NULL){
        if (temp -> num > num){
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    p -> num = num;
    if (prev==NULL){
        p -> next = root;
        return p;
    }
    else {
        p -> next = temp;
        prev -> next = p;
        return root;
    }
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