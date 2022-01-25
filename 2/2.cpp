// 2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "double =" << sizeof(double) << "\n";
    cout << "long double =" << sizeof(long double) << "\n";

    const int fixed = 10000;
    //fixed = 1;
    //上記はエラーになる(constがついてるから)
    //似たようなのが#define

    char numbertest = 65;
    char texttest = '65';//ちなみに、char型は-128から127まで扱えるのでこれでもバグったりはしない。
    char alpha = 'A';
    cout << numbertest << texttest << alpha << "\n";

    string atama = "前半";
    string shippo = "後半";
    string renketu = atama + shippo;
    char Cstyle[80];
    strcpy_s(Cstyle, renketu.c_str());

    cout << atama << "/" << shippo << "/" << renketu << "/" << Cstyle << "\n";

    char Auto [] = "123456";
    cout << Auto << "\n";
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
