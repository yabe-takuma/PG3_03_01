#pragma once
enum SCENE { TITLE, STAGE, CLEAR };

class IScene {
protected:
	//シーン番号を管理する基底クラス
	static int sceneNo;
	const char* keys_;
	const char* preKeys_;

public:
	//継承先で実装される関数
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	//仮想デストラクタを用意しないと警告される
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo();

	//各シーンにキー入力用のセッターを持たせる
	//ただ各シーンにキー入力を必ず使うとも限らないので
	//入力用のマネージャーを作ったほうがいい
	void Setkeys(char* keys, char* preKeys);


};

