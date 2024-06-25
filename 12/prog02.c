#include <stdio.h>

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

int main(void){
    Elem *root=NULL;
    Elem l1={10,root};
    root=&l1;
    Elem l2={7,root};
    root=&l2;
    Elem l3={4,root};
    root=&l3;

    print_list(root);

    return 0;
}