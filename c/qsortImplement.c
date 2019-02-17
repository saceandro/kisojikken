#include <stdio.h>

int pivot(int a[], int i, int j) {
  int k = i+1;
  
  while (k<=j && a[i]==a[k])
    k++;
  
  if (k>j)
    return -1;

  if (a[i]<a[k])
    return k;

  return i;
}

int part(int a[], int i, int j, int s) {
  int l = i;
  int r = j;

  while (l<=r) {
    while (l<=j && a[l]<s)
      l++;
    while (i<=r && s<=a[r])
      r--;
    if (l>r)
      break;
    
    int v = a[l];
    a[l] = a[r];
    a[r] = v;
    
    l++;
    r--;
  }
  return l;
}

void subQuicksort(int a[], int i, int j) {
  if (i!=j) {
    int p = pivot(a, i, j);
    if (p!=-1) {
      int l = part(a, i, j, a[p]);
      subQuicksort(a, i, l-1);
      subQuicksort(a, l, j);
    }
  }
}

void quicksort(int a[], int n) {
  subQuicksort(a, 0, n-1);
}

int main() {
  //  int a[] = {3, 2, 6, 2, 3, 4, 2, 1, 0, 1, 3, 4};
  int a[100];
  int n/* =12 */ ,i;

  scanf("%d", &n);
  for (i=0; i<n; i++)
    scanf("%d", &a[i]);
  quicksort(a, n);

  for (i=0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
