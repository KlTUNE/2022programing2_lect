#include<stdio.h>
#include<string.h>

int main(void){
    char str[128]="foo,bar,hoge,fuga";
    int count = (int)strlen(str);
    int i;

    for (i=0;i<count;i++){
      if (str[i] == 44){
        printf("\n");
      }
      else {
        printf("%c",str[i]);
      }
    }
    printf("\n");

    return 0;
}