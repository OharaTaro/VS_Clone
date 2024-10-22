#pragma once

#include "Vec2.h"

class Shot
{
public:
	Shot();
	virtual ~Shot();

//	// 使用するグラフィックを設定する
//	void SetHandle(int handle) { m_handle = handle; }

	void Init();
	void Update();
	void Draw();

private:

//	int m_handle;

	bool m_isExist;	// 存在しているか

	Vec2 m_pos;	// 現在位置
	Vec2 m_vec;	// 移動量
};

