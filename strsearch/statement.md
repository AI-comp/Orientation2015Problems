早稲田探し
=

Problem Statement
-


Input
-
入力は複数のデータセットで構成され、1つのデータセットは以下の形式で表される。
> N<br>
> S<sub>1</sub><br>
> S<sub>2</sub><br>
> :<br>
> S<sub>N</sub><br>

ここでNは入力を表すデータセットの個数、S<sub>i</sub>は各行の文字列を表す。

入力の終わりは、データセットの代わりに1つの0が入力される。

Constraints
-
入力は、以下の条件をすべて満たす。

- 3 <= N <= 30
- 1 <= i <= N なる全てのiに対して、S<sub>i</sub>の文字数をL<sub>i</sub>とすると L<sub>i</sub> = N

Output
-
出力は、各データセットに対する"WSD"の出現回数を1行で出力せよ。

Sample Input
-
    5
    WSDSW
    SDWDS
    DWSWD
    SDWDS
    WSDSW
    0

Sample Output
-
    8
