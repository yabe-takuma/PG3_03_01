#include "TitleScene.h"
#include"Novice.h"
void TitleScene::Initialize() { }

void TitleScene::Update() {
	if (keys_[ DIK_SPACE ]&&!preKeys_[DIK_SPACE]) {
		sceneNo = STAGE;
	}

	Novice::ScreenPrintf(640, 360, "Title");

	Novice::ScreenPrintf(640, 500, "Push SPACE");

}

void TitleScene::Draw() { Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid); }

