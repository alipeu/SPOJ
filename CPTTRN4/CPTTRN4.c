#include <stdio.h>

int main() {
	int n, i, j, r, c, h, w;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d %d", &r, &c, &h, &w);
		r = r * (h + 1) + 1;
		c = c * (w + 1) + 1;
		for(i = 1; i <= r; i++) {
			for(j = 1; j <= c; j++) {
				if(i == 1 || j == 1 || i == r || j == c || (i - 1) % (h + 1) == 0 || (j - 1) % (w + 1) == 0) printf("*");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
