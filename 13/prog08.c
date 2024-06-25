#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct melem {
    char name[256];
    int height;
    int weight;
    struct melem *next;
}Melem;

void print_mlist(Melem *root){
    while (root != NULL){
        printf ("%s %dcm %dkg\n",root->name, root->height, root->weight);
        root = root->next;
    }
}

Melem *add_melem(char name[256], int height, int weight, Melem *root){
    Melem *p = (Melem *)malloc(sizeof(Melem));
    Melem *prev = NULL;
    Melem *temp = root;
    while (temp != NULL){
        if (strcmp(temp->name, name) > 0){
            break;
        }
        if (strcmp(temp->name, name) == 0){
            strcpy(temp->name, name);
            temp->height = height;
            temp->weight = weight;
            return root;
        }
        prev = temp;
        temp = temp -> next;
    }
    strcpy(p->name, name);
    p->height = height;
    p->weight = weight;
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

Melem *delete_melem(char name[256], Melem *root){
    Melem *p = (Melem *)malloc(sizeof(Melem));
    Melem *prev = NULL;
    Melem *temp = root;
    while (temp != NULL){
        if (strcmp(temp->name, name) == 0){
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    if (prev==NULL){
        root = temp->next;
    }
    else {
        prev -> next = temp -> next;
    }
    free(temp);
    return root;
}

void free_list(Melem *root){
    Melem *temp;
    while (root != NULL){
        temp = root->next;
        free(root);
        root = temp;
    }
}

int main (void){
    Melem *root=NULL;
    root = add_melem("kaji", 180, 60, root);
    root = add_melem("tanaka", 140, 50, root);
    root = add_melem("satou", 190, 70, root);
    root = add_melem("kaji", 170, 80, root);

    print_mlist(root);

    printf ("\n");
    root = delete_melem("kaji", root);

    print_mlist(root);

    free_list(root);
    return 0;
}