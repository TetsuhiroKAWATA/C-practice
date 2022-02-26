// 6,pointer.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;

void showDT(int* dt, int dtNum); 
void editDT(int* dt, int dtNum);
void noEdit(const char* K);

int main()
{
    int x = 123, y;
    int* a, b;//ぽいんたaと通常の変数bを定義
    int* c, * d;//ポインタｃ、ポインタdを定義

    a = &x;
    y = *a;
    cout << "x = " << x << "  &x = " << &x << "  y = " << y << "  *a = " << *a << "  a = " << a << "\n";
    //&がついていると、ポインタが指す変数の値ではなく、ポインタが指す変数のアドレスを呼ぶことができたりする
    //ポインタ字体が格納しているのは指している変数のアドレスなので、aとだけ書いたらポインタaが指している場所のアドレス(=&x)が表示される

    int dt[5] = { 10,20,30,40,50 };

    int* p;
    int n, m;
    int* q;
    p = dt;
    n = *p;
    cout << "n = " << n << " *p = " << *p << " *dt = " << *dt << "\n";

    int size = sizeof dt / sizeof dt[0];

    for (int i = 0; i < sizeof dt / sizeof dt[0]; i++) {
        //sizeof関数でメモリの大きさを測れる。前半部分で配列全体のメモリの大きさを測り、後半でメモリ一つ分の大きさを測っている
        n = *(p + i);
        m = *(dt + i);//値が欲しいだけなら、nでもmでも結果は同じになる
        //q = &(p + i);これだとだめらしい
        q = &dt[i];//色々やったけど、アドレスが欲しい場合はこれしか通らないっぽい？
        cout << "n = " << n << " &n = " << q << " m = " << m << "\n";
    }

    showDT(p, size);
    showDT(dt, size);//これの結果からわかるように、dt自体がポインタ。なので本当は上のp = dt;は割と無駄だったりする。

    *dt = 100;
    *(dt+1) = 1000;
    showDT(dt, size);

    p = p+3;
    cout << "*p = " << *p << "\n";
    p = p - 3;

    cout << "\n++と+1の違い" << "\n";
    for (int i = 0; i < size; i++) {
        n = *(p++);
        cout << "n = " << n << "\n";
    }

    //配列名(ここではdt)はあくまで先頭を指し続ける。下のような文で代入することはできない。
    //dt = p;

    int number1 = 123, * pointer = &number1;//こういう初期化もできる

    char ss[6] = "ABCDE";
    char* pointer2 = ss;//char型ならこういう初期化

    editDT(dt, size);
    showDT(dt, size);

    char k[4] = "ABC";
    char* K = k;
    cout << "K = " << K << "\n";
    noEdit(K);

    //復習：constは値を変えられない奴。staticはメモリ領域の保持

    std::cout << "Hello World!\n";
}

void showDT(int* dt, int dtNum) {
    for (int i = 0; i < dtNum; i++) {
        cout << "dt[" << i << "] = " << dt[i] << "\n";
    }
    cout << "\n";
}

void editDT(int* dt, int dtNum) {
    //cout << dt[dtNum / 2];
    dt[dtNum / 2] *= 2;
    //cout << dt[dtNum / 2] << "\n";
}

void noEdit(const char* K) {
    cout << *K << "\n";//これはOK(constは値の固定だから)
    //*K = "KKK";//これはダメ。
    //K = "KKK";これは大丈夫だったから注意が必要かも
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
