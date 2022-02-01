// 3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <iomanip>//setprecision等を利用するのに必要(マニピュレータ関係のアレ)
using namespace std;

int main()
{
    int x = 100;
    double y = 30.0;
    double z;
    z = x / y;
    cout << z << "\n";

    int a = 1;
    cout << a++ << "\n";
    a--;
    cout << ++a << "\n";

    /*char ch2;
    cin.get(ch2);
    cout.put(ch2);//getとputがついになっているというだけの話らしい。getは空白をとることができる。
    cout << "\n" << "1入力" << "\n";*/
    /*char ch;
    cin >> ch;
    cout << ch << "\n";//coutなのかcinなのか分からんが、これの後にcin.get->cout.putは反応してくれない
    */
    /*char ch3;
    while (cin.get(ch3)) {
        ch3 = toupper(ch3);
        cout.put(ch3);//Ctrl+zで終了
    }*/

    /*string s1;
    cin >> s1;
    cout << s1 << "\n";//空白が取れず、空白までしか読み取られない
    */
    string s2;
    getline(cin, s2);
    cout << s2 << "\n";

    string s3, s4;
    cout << "文字列を二つ" << "\n";
    cin >> s3 >> s4;
    cout << "s3 = " << s3 << "\ns4 = " << s4 << "\n";

    //マニピュレータとやら
    cout << "進数いじり\n";
    int n1;
    cin >> n1;
    cout << n1 << "\n";
    cout << hex << n1 << "\n\n";
    cout << dec;//上のhexで16進表示になっているのでここで直さないと次以降も16になっちゃう。

    //文字寄せ。文字でやっても同じ
    cout << "文字寄せ\n";
    int i = 1234;
    cout << ":" << setw(6) << i << ":\n";//setwは表示幅の設定
    cout << left << ":" << setw(6) << i << ":\n";
    cout << right << ":" << setw(8) << i << ":" << i << ":\n";
    cout << ":" << setw(2) << i << ":\n\n";

    cout << "一般形式、固定小数点形式、科学表記形式\n";
    double testdouble = 1234.567856785678;
    cout << testdouble << "\n";
    cout << fixed;
    cout << testdouble << "\n";
    cout << scientific << testdouble << "\n\n";
    cout.unsetf(ios_base::floatfield);//リセット

    cout << "setprecision(8)と一般固定科学\n";
    cout << setprecision(8) << testdouble << fixed << "\n" << testdouble << "\n" << scientific << testdouble << "\n\n";

    cout << "リセット\n";
    cout.unsetf(ios_base::floatfield);//リセット
    cout << testdouble << "\n\n";

    int last;
    cout << "数字を入れる。\n";
    cin >> last;
    cout << "10進数:" << last << "\n";
    cin >> oct >> last;
    cout << "8進数:" << last << "\n";
    cin >> hex >> last;
    cout << "16進数:" << last << "\n";


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
