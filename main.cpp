#include <Novice.h>
#include"GameManager.h"
const char kWindowTitle[] = "LE2C_23_ヤベ_タクマ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* gameManager = new GameManager();

	//ゲームループ
	gameManager->Run();


	delete gameManager;
	// ライブラリの終了
	Novice::Finalize();
	return 0;
	
}

