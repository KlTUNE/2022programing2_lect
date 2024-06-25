#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

Elem* delete_elem(Elem *root, int delnum){
    Elem *p = (Elem *)malloc(sizeof(Elem));
    Elem *prev = NULL;
    Elem *temp = root;
    while (temp != NULL){
        if (temp -> num == delnum){
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    if (prev==NULL){
        root = temp -> next;
    }
    else {
        prev -> next = temp -> next;
    }
    free(temp);
    return root;
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
    char num_all[128], *num_char;
    int num;
    Elem *root=NULL;
    FILE *fp;

    fp = fopen("numlist.txt","r");

    while (fgets(num_all,128,fp) != NULL){
        num_char = strtok(num_all,"\n");
        num = (int)atof(num_char);
        root = add_elem(root, num);
    }

    print_list(root);
    free_list(root);

    return 0;
}