#include <stdio.h>

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

int main (void){
    Melem *root=NULL;
    Melem p1={"kaji",180,60,root};
    root = &p1;
    Melem p2={"ken",170,50,root};
    root = &p2;
    Melem p3={"tanaka",190,70,root};
    root = &p3;

    print_mlist(root);

    return 0;
}