#pragma once
class Bg;
class Player;
class Enemy;
class SceneMain
{
public:
	SceneMain();
	virtual ~SceneMain();

	void Init();
	void Update();
	void Draw();

private:

	int m_frameCount;

	// グラフィック
	int m_bgHandle;
	int m_playerHandle;
	int m_enemyHandle;

	Bg* m_pBg;			// 背景
	Player* m_pPlayer;	// プレイヤー

	Enemy* m_pEnemy;	// 敵
};

