#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* pointAllの数だけ平面座標中の(0,1)x(0,1)の領域にランダムに点を打ち、そのうち、原点を中心とする半径1の4分円に入った点の数をpointInとする。
   1 * pointIn / pointAll で4分円の面積が求まるが、4分円の面積はPI/4であるので、それを4倍すればPIの近似値が計算できる
*/

double montecarlo(int pointAll) { // モンテカルロ法で、4分円の面積を求める関数
  int pointIn=0; // 4分円に入った点の数
  int i;
  double x, y; // ランダムに打った点のx,y座標
  
  for (i=0; i<pointAll; i++) {
    x = (double) rand() / RAND_MAX; // randは0からRANDMAXの間の値を返す。(RAND_MAXは環境依存。)RAND_MAXで割ることで、0から1までの範囲で、十分細かく点が取れる
    y = (double) rand() / RAND_MAX;
    /*
    x = drand48(); // これは、0以上1未満の実数を発生させる関数で、上の代わりに用いることもできる
    y = drand48();
    */
    if (x*x + y*y < 1.0) pointIn++; // 点が4分円の中に入っていれば、pointInを1増やす
  }

  return (double) pointIn / pointAll;
}

int main() {
  int pointAll;
  scanf("%d", &pointAll); // 試行回数を入力
  srand(time(NULL)); // 今の時間を疑似乱数のseedにすることで、毎回の実行で異なる疑似乱数を発生させる。
  /*
  srand48(time(NULL)); // drand48()のseed
  */

  printf("%d\n", RAND_MAX); // この環境中のRAND_MAXの値を念のため確認
  printf("%f\n", 4 * montecarlo(pointAll)); // モンテカルロ法で求めた円の面積、つまり円周率PIの近似値を表示

  return 0;
}
