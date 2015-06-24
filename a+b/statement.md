A+B
=

Problem Statement
-

与えられた二つの整数の和を求めよ。

なお、この問題は入出力の練習のために用意されている。
問題の末尾にサンプルプログラムなどが示されているので、参考にせよ。

Input
-

入力は以下の形式で表される。

> N<br>
> A<sub>1</sub> B<sub>1</sub><br>
> A<sub>2</sub> B<sub>2</sub><br>
> :<br>
> A<sub>N</sub> B<sub>N</sub><br>

ここでNはデータセットの個数、A<sub>i</sub>およびB<sub>i</sub>はi番目のデータセットにおいて和を求める2つの整数である。

Constraints
-

入力は以下の条件をすべて満たす。

* 1 <= N <= 100
* 1 <= i <= N を満たすすべての整数iについて、
    * -10000 <= A<sub>i</sub> <= 10000
    * -10000 <= B<sub>i</sub> <= 10000

Output
-

出力は、各データセットに対して、A+Bを1行ずつ出力せよ。

Sample Input
-

    3
    1 9
    20 -39
    -103 229

Sample Output
-

    10
    -19
    126


Sample Program
-

#### C

```
#include <stdio.h>

int main() {
	int n, a, b, i;
	scanf("%d", &n);
    for (i = 0; i < n, i++) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        }
        int answer = 0;
        /* EDIT HERE */
        printf("%d\n", answer);
    }
    return 0;
}
```

#### Java

```
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int answer = 0;
            // EDIT HERE
            System.out.println(answer);
        }
    }
}
```

#### C++

```
#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0, i < 0; i++) {
        int answer = 0;
        // EDIT HERE
        cout << answer << endl;
    }
}
```

#### Python 3.3

```
while 1:
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    break
  answer = 0 # EDIT HERE
  print(answer)
```

#### Ruby 2.0

```
while true
  a, b = gets.split.map(&:to_i)
  break if a == 0 and b == 0
  answer = 0 # EDIT HERE
  puts answer
end
```


Note
-

コンパイルやファイル入出力、プログラムの実行などは、プログラミング言語によって方法が異なるので注意すること。以下にはCとJavaの例を記載する。

#### C

* コンパイル・実行

```
gcc main.c
./a.out
```

* ファイルから入力する

```
./a.out < in.txt
```

* ファイルへ出力する

```
./a.out > out.txt
```

* ファイル入出力を同時に行う

```
./a.out < in.txt > out.txt
```

#### Java

* コンパイル・実行

```
javac Main.java
java Main
```

* ファイルから入力する

```
java Main < in.txt
```

* ファイルへ出力する

```
java Main > out.txt
```

* ファイル入出力を同時に行う

```
java Main < in.txt > out.txt
```

