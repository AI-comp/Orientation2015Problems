団体戦
=

Problem Statement
-

カズノリ君は、とあるゲームの熱狂的なプレイヤーである。このゲームはチームを組んで行う競技であり、

* 団体戦では、自分のチームメンバーと相手のチームメンバーが一人ずつ順番に個人戦をする。
* 個人戦では、スコアが多い方が勝つ。同じスコアの場合は引き分けになる。
* 全ての個人戦が終わったとき、個人戦で多く勝ったチームが団体戦での勝者となる。勝った数が同じなら引き分けになる。

ある日、あなたはカズノリ君から試合のスコア記録係を頼まれた。
両チームのスコアから、どちらのチームが団体戦に勝利したかを判定せよ。

Input
-

入力は以下の形式で表される。

> M<br>
> N<sub>1</sub><br>
> R<sub>11</sub> R<sub>12</sub> ... R<sub>1N<sub>1</sub></sub><br>
> B<sub>11</sub> B<sub>12</sub> ... B<sub>1N<sub>1</sub></sub><br>
> N<sub>2</sub><br>
> R<sub>21</sub> R<sub>22</sub> ... R<sub>2N<sub>2</sub></sub><br>
> B<sub>21</sub> B<sub>22</sub> ... B<sub>2N<sub>2</sub></sub><br>
> :<br>
> N<sub>M</sub><br>
> R<sub>M1</sub> R<sub>M2</sub> ... R<sub>MN<sub>M</sub></sub><br>
> B<sub>M1</sub> B<sub>M2</sub> ... B<sub>MN<sub>M</sub></sub><br>

ここでMは団体戦の試合数、N<sub>i</sub>はi回目の団体戦における個人戦の試合数、R<sub>ij</sub>はi回目の団体戦でj番目に行われた個人戦の赤チームの選手のスコア、B<sub>ij</sub>はi回目の団体戦でj番目に行われた個人戦の青チームの選手のスコアである。

Constraints
-

入力は、以下の制約をすべて満たす。

* 1 <= M <= 100
* 1 <= i <= M を満たすすべての整数iについて、
    * 1 <= N<sub>i</sub> <= 1000
    * さらに 1 <= j <= N<sub>i</sub> を満たすすべての整数jについて、
        * -10000 <= R<sub>ij</sub> <= 10000
        * -10000 <= B<sub>ij</sub> <= 10000

Output
-

出力は、各団体戦ごとに、赤チームが勝つならば"RED"、青チームが勝つならば"BLUE"、引き分けならば"DRAW"を一行に出力せよ(ダブルクォーテーションは含まない)。

Sample input
-

    3
    5
    3 4 5 1 2
    1 2 3 4 5
    10
    1 2 3 4 5 6 7 8 9 10
    2 3 4 5 6 7 8 9 0 1
    7
    3 -3 3 -3 3 -3 3
    3 -3 3 2 -3 0 2

Sample Output
-

    RED
    BLUE
    DRAW