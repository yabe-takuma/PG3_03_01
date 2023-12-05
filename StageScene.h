#pragma once
#include"Scene.h"
#include"Input.h"
class StageScene : public IScene {
public:
	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
	Input* input_ = nullptr;

};

