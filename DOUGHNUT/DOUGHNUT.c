#include <stdio.h>

int main() {
	int n, c, k, w;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d", &c, &k, &w);
		if(w * c <= k) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
