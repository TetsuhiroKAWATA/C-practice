#include <iostream>//iostreamはある場所のファイルの名前を指定するものらしい。
#include <string>//string型を使う時に必要らしい

using namespace std;//ネームスペースの設定らしい

int main()
{
    cout << "Hello World!\n";//Console OUTputらしい
    /*ネームスペースがない時の記述
    std::cout << "Hello World!|n";*/

    //変数宣言
    int x;

    x = 510.823;

    //int型も普通に出力
    cout << "X = " << x << "\n";
    //補足：<<の使い方
    cout << "C" << "+" << "+" << "\n";

    //次：入力
    int inX;
    string inS;

    cout << "数字入れろ";
    cin >> inX;//Console INput
    cout << "文字入れろ";
    cin >> inS;

    cout << inX << inS << "\n";

    //C++では、int 3nnn; みたいに、先頭に数字が入った変数は使えません。他でもそうだったかもしれんけど先頭数字になんかしないからわからん
    //あと$記号も使えないらしい。

    //リテラル
    int i8, i10, i16;
    double ff, fe, fee;

    i8 = 0765;//8進数の765
    i10 = 765;
    i16 = 0x765;

    ff = 12.345;
    fe = 1.2345E1;//ffと同値・・・のはず
    fee = 1234.5e-2;//ffと同値のはずやで

    cout << i8 << " " << i10 << " " << i16 << "\n" << ff << " "  << fe << " " << fee << "\n";

    //使わないだろうけど文字リテラル
    //分からなくなりがちだけど、intに入れる文字コード
    int riteraru;
    riteraru = 'A';//65を入れているのと同義
    cout << riteraru << "\n";

    //C言語ではchar配列とstring(#include <string>が必要)で文字列を表現できる
    char testChar[10] = "hmhm";
    string testString = "hmhmhm";
    cout << testChar << testString << "\n";

    strcpy_s(testChar, "書き換え");//strcpyだとエラー吐かれました
    testString = "書き換えよう";
    cout << testChar << testString << "\n";

    return 0;
}