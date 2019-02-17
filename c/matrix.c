#include <stdio.h>

int main() {
  int a[2][3] = {{}}; // 2行3列の行列a
  int b[3][2] = {{}}; // 3行2列の行列b
  int i,j,k,s; // i,j,k: forループ用, s: 積をとった後の行列の各成分

  for (i=0; i<2; i++)
    for (j=0; j<3; j++)
      scanf("%d", &a[i][j]); // 2x3行列の入力

  for (i=0; i<3; i++)
    for (j=0; j<2; j++)
      scanf("%d", &b[i][j]); // 3x2行列の入力
  
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) { //積をとった後は、2x2行列になる
      s=0;
      for (k=0; k<3; k++) {
	s += a[i][k]*b[k][j]; // 積をとった後の行列の(i,j)成分
      }
      printf("%d ", s);
    }
    printf("\n");
  }

  return 0;
}
