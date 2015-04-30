軍人将棋
=

Problem Statement
-
軍人将棋とは、古き良き時代に子供たちの間でよく遊ばれていたボードゲームである。細かなルールなどは[Wikipedia](http://ja.wikipedia.org/wiki/%E8%BB%8D%E4%BA%BA%E5%B0%86%E6%A3%8B)などが詳しい。

軍人将棋には駒の強さがあり、2つの駒が戦ったとき、相手の駒より自分の駒が強ければ相手の駒が盤面上から取り除かれ、逆ならば自分の駒が取り除かれる。
以下の表は、軍人将棋に使われる駒と、その強さを表した表である。

|駒の名前(英語略称)|大将|中将|少将|大佐|中佐|少佐|大尉|中尉|少尉|ヒコーキ|タンク|騎兵|工兵|スパイ|地雷|
|:------------:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|大将(GEN)|=|o|o|o|o|o|o|o|o|o|o|o|o|x|=|
|中将(LTG)|x|=|o|o|o|o|o|o|o|o|o|o|o|o|=|
|少将(MJG)|x|x|=|o|o|o|o|o|o|o|o|o|o|o|=|
|大佐(COL)|x|x|x|=|o|o|o|o|o|x|x|o|o|o|=|
|中佐(LTC)|x|x|x|x|=|o|o|o|o|x|x|o|o|o|=|
|少佐(MAJ)|x|x|x|x|x|=|o|o|o|x|x|o|o|o|=|
|大尉(CPT)|x|x|x|x|x|x|=|o|o|x|x|o|o|o|=|
|中尉(1LT)|x|x|x|x|x|x|x|=|o|x|x|o|o|o|=|
|少尉(2LT)|x|x|x|x|x|x|x|x|=|x|x|o|o|o|=|
|ヒコーキ(PLA)|x|x|x|o|o|o|o|o|o|=|o|o|o|o|o|
|タンク(TNK)|x|x|x|o|o|o|o|o|o|x|=|o|x|o|=|
|騎兵(CAV)|x|x|x|x|x|x|x|x|x|x|x|=|o|o|=|
|工兵(ENG)|x|x|x|x|x|x|x|x|x|x|o|x|=|o|o|
|スパイ(SPY)|o|x|x|x|x|x|x|x|x|x|x|x|x|=|=|
|地雷(MIN)|=|=|=|=|=|=|=|=|=|x|=|=|x|=|=|

表の文字が「o」ならば表の左側の駒が上側の駒に勝ち、「x」ならば負け、「=」ならば引き分けである。
(なお、ルール上地雷と地雷が戦闘を行うことはないが、便宜上ここでは引き分けとしてある)

あなたの仕事は、これらの駒同士の勝敗判定を行うプログラムを作成することである。

Input
-
入力は以下の形式で表される。

> N<br>
> F<sub>1</sub> E<sub>1</sub><br>
> F<sub>2</sub> E<sub>2</sub><br>
> :<br>
> F<sub>N</sub> E<sub>N</sub><br>

Nはデータセットの個数、F<sub>i</sub>は味方の駒の英語略称、E<sub>i</sub>は敵の駒の英語略称である。

Constraints
-

入力は、以下の制約をすべて満たす。

- 1 <= N <= 1000
- F<sub>i</sub>, E<sub>i</sub> = { "GEN", "LTG", "MJG", "COL", "LTC", "MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY", "MIN" }

Output
-
出力は、味方の駒が勝つならば"FRIEND"、敵の駒が勝つならば"ENEMY"、引き分けならば"DRAW"と出力せよ(ダブルクォーテーションは含まない)。

Sample Input
-
    3
    GEN COL
    TNK MIN
    GEN SPY

Sample Output
-
    FRIEND
    DRAW
    ENEMY

