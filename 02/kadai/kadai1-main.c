#include <stdio.h>
#include <stdlib.h>

void yomiage(long long n);

int main() {
	char ss[256];
	long long n;

	printf("Number ? ");
	fgets(ss, sizeof(ss), stdin); // 数値を文字列として入力し
	n = atoll(ss); // さらに 数値に変換する処理のコード
	printf("%lld = ", n);
	yomiage(n);
	printf("\n");

	return 0;
}

long long yomiage(n){
	
}