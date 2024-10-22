#include "SceneMain.h"
#include "DxLib.h"

#include "Bg.h"
#include "Player.h"
#include "Enemy.h"

namespace
{
	// このシーンで使用するグラフィックファイル名
	const char* const kBgFilename = "data/image/mapchip.png";
	const char* const kPlayerFilename = "data/image/player000.png";
	const char* const kEnemy000Filename = "data/image/enemy000.png";
}

SceneMain::SceneMain():
	m_frameCount(0)
{
	m_bgHandle = LoadGraph(kBgFilename);
	m_playerHandle = LoadGraph(kPlayerFilename);
	m_enemyHandle = LoadGraph(kEnemy000Filename);

	m_pBg = new Bg{};
	m_pBg->SetHandle(m_bgHandle);

	m_pPlayer = new Player{};
	m_pPlayer->SetHandle(m_playerHandle);

	m_pEnemy = new Enemy{};
	m_pEnemy->SetHandle(m_enemyHandle);
}

SceneMain::~SceneMain()
{
	delete m_pBg;
	m_pBg = nullptr;
	delete m_pPlayer;
	m_pPlayer = nullptr;
	delete m_pEnemy;
	m_pEnemy = nullptr;

	DeleteGraph(m_bgHandle);
	DeleteGraph(m_playerHandle);
	DeleteGraph(m_enemyHandle);
}

void SceneMain::Init()
{
	m_pBg->Init();
	m_pPlayer->Init();
	m_pEnemy->Init();
}

void SceneMain::Update()
{
	m_frameCount++;

	m_pBg->Update();
	m_pPlayer->Update();
	m_pEnemy->Update();
}

void SceneMain::Draw()
{

	m_pBg->Draw();
	m_pPlayer->Draw();
	m_pEnemy->Draw();

#ifdef _DEBUG
	// デバッグ表示
	DrawString(0, 0, "SceneMain", GetColor(255,255,255));
	DrawFormatString(0,16, GetColor(255, 255, 255), "Frame:%d", m_frameCount);
#endif
}
