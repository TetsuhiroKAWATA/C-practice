﻿// 5,variable_and_scope.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;

string glob = "global variable";//実は定義した場所より↓で使えるという仕様があるらしい。気になることはほぼないけど・・・

void staticTest();

int main()
{
    std::cout << "Hello World!\n";

    int n = 510;
    cout << "n=" << n << "\n";
    for (int n = 0; n < 3; n++) {
        cout << "n=" << n << "\n";
    }
    cout << "n=" << n << "\n";//ifとかforとかwhileとかで定義した変数はその中でだけ有効なので、同じ関数内であっても文字被りが許されるらしい
    
    {
        n = 823;
        cout << "n=" << n << "\n";
    }

    static int a = 10;
    //staticをつけると、プログラム実行中は常にメモリを確保し続ける。const(値を変更できなくなる)とごっちゃにならないように

    staticTest();
    staticTest();
    staticTest();//static変数は関数呼び出しの度に初期化されない。最初に初期化されて終わり。
}

void staticTest()
{
    static int x = 0;
    static int y;
    y = 0;

    x++;
    y++;
    cout << "x=" << x << "  ";
    cout << "y=" << y << "\n";
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
