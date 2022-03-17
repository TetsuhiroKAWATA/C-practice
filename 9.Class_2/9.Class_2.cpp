// 9.Class_2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

class Acls {
public:
    int a;
    virtual void disp();
};

class Bcls {
public:
    int b;
    void disp();
};

void Acls::disp() {
    std::cout << "Aclsのa=" << a << "\n";
}

void Bcls::disp() {
    std::cout << "Bclsのb=" << b << "\n";
}

int main()
{
    Acls* test[10];

    Acls* aa;
    aa = new Acls;

    Bcls* bb;
    bb = new Bcls;

    test[0] = aa;
    test[1] = bb;

    test[0]->disp();
    test[1]->disp();
    //やってみた。無理だった。Visual studio の仕様かな？

    std::cout << "Hello World!\n";
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
