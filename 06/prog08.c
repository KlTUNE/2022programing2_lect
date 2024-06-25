#include<stdio.h>
#include<stdlib.h>

int main(void){
    int flag,i,j,k;
    FILE *fp;
    fp=fopen("prime.txt","w");

  for( i=2;i<=100;++i ) {
    flag = 0;
    for( j=2;j<i;++j ){
      if( i%j==0 ) {
        flag = 1;
        break;
      }
    }
    if( flag==0 ){
    //   printf("%d\n", i);
      fprintf(fp, "%d\n", i);
    }
  }

    fclose(fp);

    return 0;
}