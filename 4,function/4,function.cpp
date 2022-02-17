// 4,function.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;

double average(double X, double Y);//関数プロトタイプというらしい。X,Yの部分はなくてもいい。簡単なのは実際の関数の頭をコピペすること
//関数プロトタイプはメイン関数の前に書く
//関数プロトタイプがなく、直下にメイン関数を置くとバグる。理由は関数の戻り値、引数の型とかが分からないから。
//そのエラーを回避する方法の一つがヘッダファイルなんだと思う。
int hairetu(int dt[]);
int deforuto(int a = 100, int b = 510);
void over();
void over(int o);
void over(string x);

//インライン関数では、呼び出された場所に関数が張り付けられるらしい。何万回も繰り返したりするときに有効
inline int IN(int d);

//関数テンプレートなるものもある
template <typename T> T/*このＴは戻り値*/ hikaku(T a, T b);
/*こう書いてもいい
template <typename T>
T hikaku(T a, T b);

また、こういうこともできる
template <typename T1, typename T2>
void dispdata(string ss, T1 d1, T2 d2);(typenameの複数定義、固定の型との並行利用)
*/

const int length1 = 5;

int main()
{
    std::cout << "Hello World!\n";
    double ave = average(12.3, 9);
    int dt[length1] = { 10,20,30,40,50 };

    int sum = hairetu(dt);//[]無しで渡せば配列を渡したことになるらしい。

    int normal = deforuto(dt[1], dt[2]);
    int excep = deforuto();

    over();
    over(3);
    over("ジャイアン");

    int sum2 = 0;
    for (int i = 0; i < 500; i++) {
        sum2 += IN(1);
    }

    int Ihikaku, n1 = 1000, n2 = 2000;
    double Dhikaku, d1 = 1000.2, d2 = 2000.3;
    string Shikaku, s1 ="aiai", s2 = "ieie";

    Ihikaku = hikaku(n1, n2);//この度に作ってるらしい。ただし、もしこの後にもう一度int型のhikakuが呼ばれた時は、ここで作ったコードを呼び出す。
    Dhikaku = hikaku(d1, d2);
    Shikaku = hikaku(s1, s2);

    //けっかはっぴょー
    cout << ave << "\n";
    cout << sum << "\n";
    cout << normal << ", " << excep << "\n";
    cout << sum2 << "\n";
    cout << "I=" << Ihikaku << "\nD=" << Dhikaku << "\nS=" << Shikaku << "\n";
}

double average(double X, double Y) 
{
    double Z = (X + Y) / 2;
    return Z;
}

int hairetu(int dt[])//ここで、int dt[]はdtの配列の最初の部分を指しているらしい。渡しているのは先頭アドレスに過ぎない
//のでポインタにしても動く
{
    int sum = 0;
    for (int i = 0; i < length1; i++) {
        sum += dt[i];
    }
    return sum;
}

int deforuto(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void over()
{
    cout << "引数無しover" << "\n";
}

void over(int o)
{
    cout << o << "をもらったover" << "\n";
}

void over(string x)
{
    cout << "\"" << x << "\"" << "をもらったover" << "\n";
}

int IN(int d) {
    return d;//関数の意味ねぇ・・・inlineのメモってことで堪忍な
}

template <typename T> T hikaku(T a, T b)
{
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
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
