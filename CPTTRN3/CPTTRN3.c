#include <stdio.h>

int main() {
	int n, i, j, r, c;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &r, &c);
		r = r * 3 + 1;
		c = c * 3 + 1;
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(i == 1 || j == 1 || i == r || j == c || (i - 1) % 3 == 0 || (j - 1) % 3 == 0) printf("*");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
