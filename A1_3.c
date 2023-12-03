#include <stdio.h>
long long sum (int left, int right){
  int totalUpToRight = right * (right + 1) / 2;
  int totalUpToLeft = (left - 1) * ((left - 1) + 1) / 2;
  return (totalUpToRight - totalUpToLeft);
}

int main ()
{
  long n;
  printf ("Enter total rooms:\n");
  scanf ("%ld", &n);
  if (n == 1){
      printf ("Room no : %ld\n", n);
      return 0;
    }
  for (long i = 1; i <= n; i++){
    if (sum (0, i) == sum (i, n)){
	  printf ("Room No: %ld\n", i);
	  return 0;
	}

}
  printf ("The room does not exist\n");
  return 0;
}
