// EX.memoAndSort.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "Memo.h"

void makeClass(int* fill, Memo* memo[]);

int main()
{
    const int FNum = 20;
    std::string Command;
    std::string dataName, tmp;
    int dataNum;
    int fill = 0;
    int* filler = &fill;
    Memo* memo[FNum];

    //メモ開始処理
    std::cout << "メモ開始" << '\n';
    std::cout << "作成可能な項目数は" << FNum << "個です\n";
    makeClass(filler, memo);
    fill++;
    
    do {
        std::cout << "コマンドを入力してください" << '\n';
        std::cin >> Command;
        if (Command == "fin") {
            break;
        }
        else if (Command == "new") {
            makeClass(filler, memo);
            fill++;
        }
        else if (Command == "set") {
            std::cout << "どの項目にセットしますか？\n";
            for (int i = 0; i < fill; i++) {
                std::cout << i << ':' << memo[i]->putObjName() << '\n';
            }
            std::cin >> Command;
            std::cout << "データ名を入力:";
            std::cin >> dataName;
            std::cout << "個数を入力:";
            std::cin >> dataNum;//警告！この入力に文字を入れるとバグが発生する。

            memo[atoi(Command.c_str())]->setData(dataName, dataNum);
        }
        else if (Command == "show") {
            for (int i = 0; i < fill; i++) {
                std::cout << "項目" << i << ":名前" << memo[i]->putObjName() << '\n';
                memo[i]->showData();
            }
        }

    } while (1);

    //最後の出力処理
    for (int i = 0; i < fill; i++) {
        memo[i]->outPut();
        std::cout << "出したのはこれ" << i;

        delete memo[i];
    }
    std::cout << "内容を出力しました。終了します。" << '\n';
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
