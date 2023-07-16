#include <stdio.h>
#include <stdbool.h>

#define MAX_R 100

// checks if the given number is prime or not
bool is_prime(int n) {
if (n < 1) return false;
if(n==1) return true;
if (n == 2) return true;
if (n % 2 == 0) return false;
for (int i = 3; i * i <= n; i += 2) {
if (n % i == 0) return false;
}
return true;
}

int main(void) {
int t;
scanf("%d", &t);

while (t--) {
int l, r;
scanf("%d%d", &l, &r);

// Copy code
for (int i = l; i <= r; i++) {
  if (is_prime(i)) printf("%d ", i);
}
printf("\n");
}

return 0;
}