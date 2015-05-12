早稲田探し
=

Problem Statement
-

早稲田大学の新歓期といえば、サークルの勧誘をする既存生、様々なビラを大量に抱えたスーツ姿の新入生、そして書店に山積みにされるマイルストーンである。

ある日、買ってきたマイルストーンをなんとなく眺めていたあなたは、ページの片隅に気になる記事を見つけた。

> "早稲田"探し!?<br>
> 次の正方形に並んだ文字列ブロックの中に、「WSD」と上下左右のいずれかに並んでいる場所はいくつあるでしょうか？<br>
> 答えがわかった方は090-xxxx-yyyy(代表: 坂本一憲)まで！<br><br>
> WSDSW<br>
> SDWDS<br>
> DWSWD<br>
> SDWDS<br>
> WSDSW<br><br>
> 待ってろ(素敵な)キャンパスライフゥゥゥ！！！(爆)<br>

実際に数えてみたところ、どうやらこの文字列の中には8つの「WSD」があるらしい。

自分の答えが正しいかどうか気になったあなたは、プログラムを書いて確かめてみることにした。

Input
-

入力は以下の形式で表される。

> D<br>
> N<sub>1</sub><br>
> S<sub>11</sub><br>
> S<sub>12</sub><br>
> :<br>
> S<sub>1N<sub>1</sub></sub><br>
> N<sub>2</sub><br>
> S<sub>21</sub><br>
> S<sub>22</sub><br>
> :<br>
> S<sub>2N<sub>2</sub></sub><br>
> :<br>
> N<sub>D</sub><br>
> S<sub>D1</sub><br>
> S<sub>D2</sub><br>
> :<br>
> S<sub>DN<sub>D</sub></sub><br>


ここでD文字列ブロックの個数、N<sub>i</sub>はi番目の文字列ブロックのサイズ、S<sub>ij</sub>はi番目の文字列ブロックのj行目の文字列を表す。

Constraints
-

入力は、以下の条件をすべて満たす。

* 1 <= D <= 100
* 1 <= i <= D を満たすすべての整数iについて、
    * 3 <= N<sub>i</sub> <= 30
    * さらに、1 <= j <= N<sub>i</sub> を満たすすべての整数jについて、
        * S<sub>ij</sub>の文字数をL<sub>ij</sub>とすると L<sub>ij</sub> = N<sub>i</sub>
        * S<sub>ij</sub>の各文字はすべて{'W', 'S', 'D'}のいずれか

Output
-

出力は、各データセットに対する"WSD"の出現回数を1行で出力せよ。

Sample Input
-

    2
    5
    WSDSW
    SDWDS
    DWSWD
    SDWDS
    WSDSW
    4
    WSDS
    SWDS
    WDSW
    SDDW

Sample Output
-

    8
    2
