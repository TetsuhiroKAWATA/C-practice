// EX.memoAndSort.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "Memo.h"

void makeClass(int* fill, Memo* memo[]);

int main()
{
    using std::string;
    using std::cout;
    using std::cin;

    const int FNum = 20;
    string Command;
    string dataName, tmp;
    int dataNum;
    int fill = 0;
    int* filler = &fill;
    Memo* memo[FNum];

    //メモ開始処理
    cout << "メモ開始" << '\n';
    cout << "作成可能な項目数は" << FNum << "個です\n";
    makeClass(filler, memo);
    fill++;
    cout << "Cshowでヘルプを表示" << '\n';
    
    do {
        cout << "コマンドを入力してください" << '\n';
        cin >> Command;
        if (Command == "fin") {
            break;
        }
        else if (Command == "new") {
            makeClass(filler, memo);
            fill++;
        }
        else if (Command == "set") {
            cout << "どの項目にセットしますか？ 数字を入力してください\n";
            for (int i = 0; i < fill; i++) {
                cout << i << ':' << memo[i]->putObjName() << '\n';
            }
            cin >> Command;
            cout << "データ名を入力:";
            cin >> dataName;
            cout << "個数を入力:";
            cin >> tmp;
            if (!(std::all_of(tmp.cbegin(), tmp.cend(), isdigit))) {
                cout << "数字を入れてくだしあ。\n";
            }
            else {
                dataNum = atoi(tmp.c_str());
                memo[atoi(Command.c_str())]->setData(dataName, dataNum);
            }
        }
        else if (Command == "show") {
            for (int i = 0; i < fill; i++) {
                cout << "項目" << i << "=名前:" << memo[i]->putObjName() << '\n';
                memo[i]->showData();
            }
        }
        else if (Command == "Cshow") {
            cout << "new で新しい項目を追加\n";
            cout << "set で任意の項目にデータを追加\n";
            cout << "show で全ての保存データを列挙\n";
            cout << "fin でプログラムを終了\n\n";
        }
        else {
            cout << "正しい値を入力してください。コマンドの確認にはCshowを入力してください\n";
        }
    } while (1);

    //最後の出力処理
    for (int i = 0; i < fill; i++) {
        memo[i]->outPut();
        cout << "出したのはこれ" << i;

        delete memo[i];
    }
    cout << "内容を出力しました。終了します。" << '\n';
    return 0;
}

void makeClass(int* filler, Memo* memo[])
{
    std::string Name;

    memo[*filler] = new Memo;
    std::cout << "項目を一つ作成しました" << '\n';
    std::cout << "項目名を入力してください" << '\n';
    std::cin >> Name;
    memo[*filler]->setObjName(Name);
    std::cout << "項目名をセットしました。" << '\n';
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
