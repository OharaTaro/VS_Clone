#pragma once
#include "Vec2.h"
class Enemy
{
public:
	Enemy();
	virtual ~Enemy();

	// �g�p����O���t�B�b�N��ݒ肷��
	void SetHandle(int handle) { m_handle = handle; }

	void Init();
	void Update();
	void Draw();

private:

	// �g�p����O���t�B�b�N
	int m_handle;

	bool m_isExist;	// ���݂��Ă��邩

	Vec2 m_pos;	// ���݈ʒu
	Vec2 m_vec;	// �ړ���
};

