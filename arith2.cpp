#include <stdio.h>
using namespace std;
int main() {
  char op;
  long long n, a, res;

//freopen("arith2.txt","r",stdin);
  scanf( "%lld", &n );
  while ( n-- ) {
    op = 0;
    scanf( "%lld", &res );
    while ( 1 ) {
      scanf( "%s", &op );
      if ( op == '=' ) {
        break;
      }

      scanf( "%lld", &a );
      switch ( op ) {
        case '+':
          res += a;
          break;
        case '-':
          res -= a;
          break;
        case '*':
          res *= a;
          break;
        case '/':
          res /= a;
          break;
      }
    }
    printf( "%lld\n", res );
  }

  return 0;
}
