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

	// �O���t�B�b�N
	int m_bgHandle;
	int m_playerHandle;
	int m_enemyHandle;

	Bg* m_pBg;			// �w�i
	Player* m_pPlayer;	// �v���C���[

	Enemy* m_pEnemy;	// �G
};

