#include <stdio.h>

int main(void) {
    /* 課題0405: 車輪型ロボットを考える．車輪の半径をr/2[m]とする．このロボットを距離x[m]だけ走らせたい時，
       どれだけモーターを回転させればよいか，回転角度a [度]を求めるプログラムを作成せよ．ただし，
       r=4;
       円周率=3.141592
       とする．また，xの値はキーボードからdoubleとして入力するものとする．
       これらの値すべてをdouble型として計算した計算結果のa(桁数指定なし)を表示するようなプログラムとせよ．
    */

    const double r = 4.0;
    const double PI = 3.141592;
    const double radius = r / 2.0;
    double x, a;

    /* 車輪の半径は r/2 なので radius = 2.0 */
    /* 360度で円周の長さだけ進むので，360度で 2 * PI * radius = 4PI[m] 進む */
    /* したがって，x[m] 進むには a = x * 360 / (2 * PI * radius) = 90x / PI [度] */

    scanf("%lf", &x);

    a = (360.0 * x) / (2.0 * PI * radius);

    printf("%f\n", a);

    return 0;
}
