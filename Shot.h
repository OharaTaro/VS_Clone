#pragma once

#include "Vec2.h"

class Shot
{
public:
	Shot();
	virtual ~Shot();

//	// �g�p����O���t�B�b�N��ݒ肷��
//	void SetHandle(int handle) { m_handle = handle; }

	void Init();
	void Update();
	void Draw();

private:

//	int m_handle;

	bool m_isExist;	// ���݂��Ă��邩

	Vec2 m_pos;	// ���݈ʒu
	Vec2 m_vec;	// �ړ���
};

