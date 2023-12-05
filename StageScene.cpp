#include "StageScene.h"

void StageScene::Initialize() { input_->GetInstance(); }

void StageScene::Update() {
	if (input_->TriggerKey(DIK_SPACE)) {
		sceneNo = STAGE;
	}
}

void StageScene::Draw() {}

