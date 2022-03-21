// 12.app_memo.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	std::string ss, infile, outfile;

	std::cout << "入力ファイル名 = ";
	std::cin >> infile;

	std::cout << "出力ファイル名 = ";
	std::cin >> outfile;

	fin.open(infile.c_str());
	if (fin.fail()) {
		std::cout << "入力ファイルをオープンできません\n";
		return 1;
	}

	fout.open(outfile.c_str());
	if (fout.fail()) {
		std::cout << "出力ファイルをオープンできません\n";
		return 1;
	}

	getline(fin, ss);
	std::cout << ss << '\n';
	while (!fin.eof()) {//この書き方だと最後に改行が無いと最後の行が読まれない。理由は不明。調べる
		fout << ss << '\n';
		getline(fin, ss);
		std::cout << ss << '\n';
	}

	fin.close();
	fout.close();

	std::cout << "正常に終了しました";

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
