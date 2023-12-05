#pragma once
#include<memory>
#include"Scene.h"
#include"ClearScene.h"
#include"StageScene.h"
#include"TitleScene.h"
#include"Input.h"


class GameManager {
private:
	//シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_; //現在のシーン
	int preSceneNo_; //前のシーン

	Input* input_ = nullptr;

public:
	GameManager(); //コンストラクタ

	~GameManager(); //デストラクタ

	int Run(); //この関数でゲームループを呼び出す

};

