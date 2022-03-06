// 7.ref.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;

struct Meibo {
    string name;
    int height;
    int weight;
};

struct Myst {
    int mbr1, mbr2;
};

union Mytype {
    int idt;
    short int sdt;
    char cdt;
};

enum Color{RED, BLUE, GREEN = 5, YELLOW};//この時、RED=0,BLUE=1,GREEN=5,YELLOW=6になるらしい(厳密にいうとちょっと違う可能性が微レ存)

Myst doubleUp(Myst k);

int main()
{
    int dt = 100;
    int& rf = dt;//dtをrfでさすみたいな感じの。ポインタと違って、参照がプログラム中にほかの変数を指すことはない。
    //ここで初期化することしかできないらしい。
    int* pt = &dt;//dtのアドレスを入れる、という明示が必要

    cout << "dt = " << dt << " rf = " << rf << "\n";

    rf = 200;
    cout << "dt = " << dt << " rf = " << rf << "\n";


    //////////////////////////////////////////////
    //構造体
    Meibo a, b;
    a.name = "後藤崇文";
    a.height = 510;
    a.weight = 114514;

    b = a;//構造体自体のコピーもできるらしい。構造体、というよりかは新しいデータ型みたいな感じらしい
    //ただ、厳密な機能はクラスらしい

    cout << a.name << " " << a.height << " " << a.weight << "\n";
    cout << b.name << " " << b.height << " " << b.weight << "\n";

    struct inner {
        int kkk;
        double ddd;//関数内に書くこともできるが、その場合関数内でのみ有効。また、このinnerはこれより下で有効
        Meibo k;
    };

    Meibo* p = &a;
    p->height = 19;//ポインタ越しの変更はこうやる
    p->name = "初見圭太";
    p->weight = 9999999;

    cout << p->name << " " << p->height << " " << p->weight << "\n";

    Meibo c = {"ｋんｋ", 165};//初期化。何もいれないと数値型は0に、stringは""になるらしい。
    cout << c.height << " " << c.name << " " << c.weight << "\n";

    int tintin[10];
    tintin[2] = 2;

    Meibo dt2[10];
    dt2[1].name = "aiuue";

    Myst m, n = { 1111,2222 };
    m = doubleUp(n);
    cout << "m.mbr1 = " << m.mbr1 << " m.mbr2 = " << m.mbr2 << "\n";

    Mytype test;
    test.idt = 678678;
    cout << test.idt << "\n";
    test.cdt = 'F';
    cout << test.idt << "\n";
    test.sdt = 1234;
    cout << test.idt << "\n";
    //共用体なるものの説明。同じメモリを複数の変数で共用するらしい。ちなみに初期化をすると、一番最初(今回はint)だけ初期化されるらしい。

    Color C;
    //C = 100;<-これは間違い
    C = GREEN;

    int nk = GREEN;//実はこれはいける。実際intに入ってるのは5

    std::cout << "Hello World!\n";
}

Myst doubleUp(Myst k) {
    Myst ret;
    ret.mbr1 = k.mbr1 * 2;
    ret.mbr2 = k.mbr2 * 2;
    return ret;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
