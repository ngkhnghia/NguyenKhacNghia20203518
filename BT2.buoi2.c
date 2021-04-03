#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b;
	float c,d;
	printf("nhap vao so cong va thoi gian tieu thu:");
	scanf("%d%d", &a, &b);
	printf("cong suat su dung trung binh la: %.3f kwH", c=a/b/1000);    /*den day thi chay binh thuong*/
	#define gd 3500;                                                    /*tu day thi bi sai*/
	#define ngay 24;
	#define thang 30;
	printf("\nchi phi dien hang thang la: %.3f", d=c*gd*ngay*thang);   /*em cung cha hieu sai nhu the nao*/
	return 0;
}
