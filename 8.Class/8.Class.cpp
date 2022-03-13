// 8.Class.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

class ClsX {
private:
    int x;
public:
    ClsX() { x = 0; }
    ClsX(int n) { x = n; }
    void setX(int n) { x = n; }
    int getX() { return x; }
    void disp() { cout << "x=" << x << '\n'; }
    //void dispX() { cout << "x=" << x << '\n'; }こう書いてもいいけどなんか同じ関数名にしたほうが楽らしい
};
//ここまでクラスX

//class ClsXYZ: public ClsX, public ClsXYみたいな感じで二つ以上継承できるようになっている。
//class ClsXKZ: public ClsXYみたいな感じにすると、XYがXを継承しているためXも間接的に継承したことになる、らしい

class ClsXY : public ClsX {//継承の書き方。public 以外にもいろいろあるらしい。詳しくは教科書297とか
private: 
    int y;
public:
    ClsXY();
    ClsXY(int n1, int n2);
    void setY(int n);
    int getY();
    void disp();
    //void dispXY();
};
//クラスXYのクラス宣言


//コンストラクタ
ClsXY::ClsXY() :ClsX(){//<-こういう風に描けば基底クラスのコンストラクタを呼び出せる
    //setX(0);<-こういう書き方もできるけど
    y = 0;
}

//引数が二つあるコンストラクタ
ClsXY::ClsXY(int n1, int n2) :ClsX(n1){
    //setX(n1);
    y = n2;
}

void ClsXY::setY(int n) {
    y = n;
}

int ClsXY::getY() {
    return y;
}

void ClsXY::disp() {
    ClsX::disp();//こうすれば、ClsXYからもClsXのdispを呼べる
    cout << "y=" << y << '\n';
}

int main()
{
    ClsX* dtx;
    ClsXY* dt;

    dtx = new ClsX(1000);
    dt = new ClsXY(10, 20);//教科書と違ってポインタで考えるとこういう話になる。

    cout << "------ClsXの確認\n";
    dtx->disp();//clsXの方のdisp

    cout << "------ClsXYの確認\n";
    dt->disp();//ClsXYの方のdisp

    cout << "------ClsXY経由でClsXのdispを呼ぶ\n";
    dt->ClsX::disp();

    //作るのめんどくさいからやらないけど、protectedっていうのもあって(public,privateの仲間)
    //それをやるとクラス内ではpublic,クラス外からはprivateという扱いになる

    /*disp->dispXYとかそういう感じだった時代の表記
    cout << "------ClsXYの確認\n";
    dt->dispX();
    dt->dispXY();

    cout << "------setX,setYを使う\n";
    dt->setX(100);
    dt->setY(200);
    dt->dispXY();

    cout << "------getX,getYを使う\n";
    cout << "dt.x=" << dt->getX() << '\n';
    cout << "dt.y=" << dt->getY() << '\n';
    //std::cout << "Hello World!\n";
    */

    return 0;
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
