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
    char line[128], name[256], com[5], *str;
    int height, weight;
    Melem *root=NULL;
    FILE *fp, *fout;

    fp = fopen("meibo.csv","r");

	while (fgets(line,256,fp) != NULL){
        str = strtok(line,",\n");
        strcpy(name,str);
        str = strtok(NULL,",\n");
        height = (int)atof(str);
        str = strtok(NULL,",\n");
        weight = (int)atof(str);
        root = add_melem(name, height, weight, root);
	}

    fclose(fp);

    while (strcmp(com, "q") != 0){
        scanf ("%s",com);
        if (strcmp(com, "a") == 0){
            scanf (" %[^,],%d,%d", name, &height, &weight);
            root = add_melem(name, height, weight, root);
        }
        else if (strcmp(com, "d") == 0){
            scanf ("%s", name);
            root = delete_melem(name, root);
        }
        else if (strcmp(com, "p") == 0){
            print_mlist(root);
        }
    }

    fout = fopen("meibo.csv","w");

    while (root != NULL){
        fprintf(fout,"%s,%d,%d\n",root->name, root->height, root->weight);
        root = root -> next;
    }

    free_list(root);
    fclose(fout);
    return 0;
}