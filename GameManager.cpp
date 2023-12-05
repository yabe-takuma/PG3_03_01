#include "GameManager.h"

GameManager::GameManager() {
	//各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	//初期シーンの設定
	currentSceneNo_ = TITLE;

	input_->GetInstance();
}

GameManager::~GameManager() {}

int GameManager::Run() {
	while (true) {
		//シーンのチェック
		preSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//シーン変更チェック
		if (preSceneNo_ != currentSceneNo_)
		{
			sceneArr_[currentSceneNo_]->Initialize();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Update(); //シーンごとの更新処理

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		false;

		//ESCキーが押された瞬間ループを抜ける
		if (input_->TriggerKey(DIK_ESCAPE) && input_->PushKey(DIK_ESCAPE)) {
			break;
		}

	}




	return 0;
}

