#include "Bg.h"
#include "DxLib.h"

#include "game.h"

namespace
{
	// �}�b�v�`�b�v1�̃T�C�Y
	constexpr int kChipWidth = 32;
	constexpr int kChipHeight = 32;

	// �}�b�v�`�b�v�̕~���l�ߐ�
	constexpr int kChipNumX = Game::kScreenWidth / kChipWidth;
	constexpr int kChipNumY = Game::kScreenHeight / kChipHeight;
}

Bg::Bg():
	m_handle(-1)
{
}

Bg::~Bg()
{
}

void Bg::Init()
{
}

void Bg::Update()
{
}

void Bg::Draw()
{
	for (int y = 0; y < kChipNumY; y++)
	{
		for (int x = 0; x < kChipNumX; x++)
		{
			DrawRectGraph(x * kChipWidth, y * kChipHeight, 0, 128, kChipWidth, kChipHeight, m_handle, true);
		}
	}
}
