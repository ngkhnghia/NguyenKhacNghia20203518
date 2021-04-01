#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	char m[100];
	float l;
	printf("Ten ban la: ");
	gets(m);
	printf("\nNhap chieu cao cua ban: ");
	scanf("%d", &n);
	printf("Em ten la: %s", m);
	printf("\nChieu cao cua em la: %d cm", n);
	return 0;
}
