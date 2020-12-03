# 課題3 レポート


## 課題  

以下の2つのアルゴリズムで文字列を検索するプログラムを作成する。  
- 力ずく法
- BM法

1. 使用するデータ  
以下のデータを使用する。ただし、検索対象文字列、検索する文字列は変更しても良い。  
    - StrOriginal: 検索対象データ
    - StrKey: 検索する文字列

2. 必須問題：実装する関数  
本課題では、以下の関数を実装する。C言語の標準ライブラリは使用しないこと。  
    (1) ForceSearch: 力ずく法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  

    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

    (2) BMSearch: BM法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  
 
    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

3. 補助関数  
なし

## ソースコードの説明
l.18,22 文字列の長さを調べる
l.26 比較開始位置を先頭にする。比較対象がなくなるまで繰り返す
l.27 posがkey_lenより小さかったら繰り返す
l.29 比較場所の文字を比較する
l.30　一致したら返す
l.33 一致しなければループから抜ける
l.52,56 文字列の長さを調べる
l.64 ずらし量テーブルを作成する
l.69 indexが最後尾より前のとき、続ける
l.76 キーの最後けら一文字ずつずらしていく
l.79 検索対象と検索文字が一致した場合
l.81 キーが一致したら返す
l.86 一致しなかったら繰り返しから抜ける
l.91 検索対象をずらす
l.93 新しいindexが元のindexより大きかったらindexを新しいindexに代入する
l.96 大きくなければindexの一つとなりにずらす



## 出力結果

```
Force Search. Find keyword at:wind in my hair.
On a dark deseart highway, cool wind in my hair.
wind
loop = 0
text=a, key=w
new_index = 7, index = 3, i = 0
On a dark deseart highway, cool wind in my hair.
    wind
loop = 0
text=r, key=w
new_index = 11, index = 7, i = 0
On a dark deseart highway, cool wind in my hair.
        wind
loop = 0
text=e, key=w
new_index = 15, index = 11, i = 0
On a dark deseart highway, cool wind in my hair.
            wind
loop = 0
text=r, key=w
new_index = 19, index = 15, i = 0
On a dark deseart highway, cool wind in my hair.
                wind
loop = 0
text=i, key=w
new_index = 21, index = 19, i = 0
On a dark deseart highway, cool wind in my hair.
                  wind
loop = 0
text=h, key=w
new_index = 25, index = 21, i = 0
On a dark deseart highway, cool wind in my hair.
                      wind
loop = 0
text=,, key=w
new_index = 29, index = 25, i = 0
On a dark deseart highway, cool wind in my hair.
                          wind
loop = 0
text=o, key=w
new_index = 33, index = 29, i = 0
On a dark deseart highway, cool wind in my hair.
                              wind
loop = 0
text=i, key=w
new_index = 35, index = 33, i = 0
On a dark deseart highway, cool wind in my hair.
                                wind
loop = 0
text=d, key=w
loop = 1
text=n, key=i
loop = 2
text=i, key=n
loop = 3
text=w, key=d
BM Search. Find keyword at:wind in my hair.

```

## 修正履歴

