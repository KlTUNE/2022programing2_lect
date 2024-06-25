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
    Melem *p=(Melem *)malloc(sizeof(Melem));
    strcpy(p->name, name);
    p->height = height;
    p->weight = weight;
    p->next = root;

    return p;
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
    root = add_melem("ken", 140, 50, root);
    root = add_melem("tanaka", 190, 70, root);

    print_mlist(root);

    free_list(root);
    return 0;
}