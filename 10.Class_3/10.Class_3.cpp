// 10.Class_3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

class XYset {
protected:
    int x, y;
public:
    XYset() { x = y = 0; }
    XYset(int n1, int n2) { x = n1; y = n2; }
    virtual void area() = 0;
};

class Triangle : public XYset {
public:
    Triangle() : XYset() { ; }//Triangleのコンストラクタ
    Triangle(int n1, int n2) : XYset(n1, n2) { ; }//引数二つの場合のコンストラクタ
    void area() { std::cout << "三角形の面積は～？：" << x * y / 2 << '\n'; }
};

class Square :public XYset {
public:
    Square() :XYset() { ; }
    Square(int n1, int n2): XYset(n1, n2) { ; }
    void area() { std::cout << "四角形の面積は～？：" << x * y << '\n'; }
};

int main()
{
    std::cout << "Hello World!\n";

    //XYset a;
    Triangle* t;
    t = new Triangle(20, 30);
    Square* s;
    s = new Square(20, 30);
    XYset* p;//ポインタはオブジェクトを確保する者ではないので、ポインタの宣言は可能

    t->area();
    s->area();

    p = t;
    p->area();

    p = s;
    p->area();
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
