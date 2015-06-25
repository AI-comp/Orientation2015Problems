島と橋
=

Problem Statements
-

カズー氏は群島国家「サカモ島国」の管理者である。この国には、V個の島(1からVまでの番号で管理されている)と、2つの異なる島をつなぐE個の橋がある。
島Xから島Yにいくつかの橋を通って移動できるとき、XとYは「相互移動可能」と呼ぶことにする。

カズー氏は、交通インフラの整備をするため、もともと船で行き来をしていた島同士に新しくいくつかの橋をかけ、V個の島全てのペアについて、「相互移動可能」にすることにした。
目的達成のために、新しい橋は少なくともいくつ必要か求めよ。
ただし、全ての島のペアについて既に「相互移動可能」である状態ならば、0 を出力せよ。

Input
-

入力は以下の形式で表される。

> D<br>
> V<sub>1</sub> E<sub>1</sub><br>
> S<sub>11</sub> G<sub>11</sub><br>
> S<sub>12</sub> G<sub>12</sub><br>
> :<br>
> S<sub>1E<sub>1</sub></sub> G<sub>1E<sub>1</sub></sub><br>
> V<sub>2</sub> E<sub>2</sub><br>
> S<sub>21</sub> G<sub>21</sub><br>
> S<sub>22</sub> G<sub>22</sub><br>
> :<br>
> S<sub>2E<sub>2</sub></sub> G<sub>2E<sub>2</sub></sub><br>
> :<br>
> V<sub>D</sub> E<sub>D</sub><br>
> S<sub>D1</sub> G<sub>D1</sub><br>
> S<sub>D2</sub> G<sub>D2</sub><br>
> :<br>
> S<sub>DE<sub>D</sub></sub> G<sub>DE<sub>D</sub></sub><br>

ここでDはデータセットの個数である。また、i番目のデータセットにおいて、V<sub>i</sub>は島の数、E<sub>i</sub>は橋の数、S<sub>ij</sub>およびG<sub>ij</sub>はj番目の橋がつないでいる島の番号である。

Constraints
-

入力は、以下の条件をすべて満たす。

* 1 <= D <= 100
* 1 <= i <= D を満たすすべての整数iについて、
    * 2 <= V<sub>i</sub> <= 1000
    * 0 <= E<sub>i</sub> <= 1000
    * さらに、 1 <= j <= E<sub>i</sub> を満たすすべての整数jについて、
        * 1 <= S<sub>ij</sub> <= V<sub>i</sub>
        * 1 <= G<sub>ij</sub> <= V<sub>i</sub>
        * S<sub>ij</sub> != G<sub>ij</sub>

Sample Input
-

    3
    3 0
    3 3
    1 2
    2 3
    3 1
    5 2
    1 2
    3 4
    
Sample Output
--

    2
    0
    2
    
