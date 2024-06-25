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

void out_list(Elem *root, FILE *f){
    while (root != NULL){
        fprintf(f,"%d\n",root -> num);
        root = root -> next;
    }
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
    char num_all[128], *num_char, com[5];
    int num;
    Elem *root=NULL;
    FILE *fp, *f;

    fp = fopen("numlist.txt","r");

    while (fgets(num_all,128,fp) != NULL){
        num_char = strtok(num_all,"\n");
        num = (int)atof(num_char);
        root = add_elem(root, num);
    }
    print_list(root);

    while (strcmp(com, "q") != 0){
        scanf ("%s",com);
        if (strcmp(com, "a") == 0){
            scanf ("%d",&num);
            root = add_elem(root, num);
        }
        else if (strcmp(com, "d") == 0){
            scanf ("%d",&num);
            delete_elem(root, num);
        }
        else if (strcmp(com, "p") == 0){
            print_list(root);
        }
    }

    print_list(root);
    f = fopen("numlist.txt","w");
    out_list(root, f);

    fclose(f);
    fclose(fp);
    free_list(root);
    return 0;
}