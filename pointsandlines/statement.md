点と直線
=

Problem Statement
-

平面上に幾つか点(座標は全て整数である)が与えられる。平面上に、最も多くの点を通過するような直線を1本だけ引くとき、通過する点の数を求めよ。

Input
-

入力は以下の形式で表される。

> D<br>
> N<sub>1</sub><br>
> x<sub>11</sub> y<sub>11</sub><br>
> x<sub>12</sub> y<sub>12</sub><br>
> :<br>
> x<sub>1N<sub>1</sub></sub> y<sub>1N<sub>1</sub></sub><br>
> N<sub>2</sub><br>
> x<sub>21</sub> y<sub>21</sub><br>
> x<sub>22</sub> y<sub>22</sub><br>
> :<br>
> x<sub>2N<sub>2</sub></sub> y<sub>2N<sub>2</sub></sub><br>
> :<br>
> N<sub>D</sub><br>
> x<sub>D1</sub> y<sub>D1</sub><br>
> x<sub>D2</sub> y<sub>D2</sub><br>
> :<br>
> x<sub>DN<sub>D</sub></sub> y<sub>DN<sub>D</sub></sub><br>

ここでDはデータセットの個数である。さらに、i番目のデータセットにおいて、N<sub>i</sub>は点の個数、x<sub>ij</sub>およびy<sub>ij</sub>はj番目の点の座標である。

Constraints
-

入力は以下の条件をすべて満たす。

* 1 <= D <= 100
* 1 <= i <= D を満たすすべての整数iについて、
    * 2 <= N<sub>i</sub> <= 50
    * さらに、1 <= j <= N<sub>i</sub> を満たすすべての整数jについて、
        * -100 <= x<sub>ij</sub> <= 100
        * -100 <= y<sub>ij</sub> <= 100

Output
-

出力は、各データセットごとに直線が通過する点の個数を1行で出力せよ。

Sample Input
-

    2
    5
    0 0
    -1 -1
    1 1
    2 2
    3 -3
    6
    5 0
    0 -2
    0 1
    0 7
    1 3
    2 4

Sample Output
--

    4
    3

