#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d", a&~(1<<(b-1)));
	return 0;
}
