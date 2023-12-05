#include "TitleScene.h"

void TitleScene::Initialize() { input_->GetInstance(); }

void TitleScene::Update() {
	if (input_->TriggerKey(DIK_SPACE)) {
		sceneNo = STAGE;
	}

}

void TitleScene::Draw() {}

