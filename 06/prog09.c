#include<stdio.h>
#include<stdlib.h>

int main(void){
    int count;
    char name[129];
    FILE *fp;
    fp=fopen("meibo.txt","a");

    printf ("回数:");
    scanf ("%d",&count);

    for (int i=0;i<count;i++){
      printf ("名前:");
      scanf ("%s",name);
      fprintf(fp, "\n%s", name);
    }
    fclose(fp);

    return 0;
}