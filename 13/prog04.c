#include <stdio.h>
#include <stdlib.h>

typedef struct melem {
    char name[256];
    int height;
    int weight;
    struct melem *next;
}Melem;

void print_mlist(Melem *root){
    while (root != NULL){
        printf ("%s %dcm %dkg\n",root->name ,root->height ,root->weight);
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

int main (void){
    Melem *root=NULL;
    Melem p1={"kaji",180,60,root};
    root = &p1;

    print_mlist(root);

    return 0;
}