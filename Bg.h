#pragma once

// 背景クラス
class Bg
{
public:
	Bg();
	virtual ~Bg();

	// 使用するグラフィックを設定する
	void SetHandle(int handle) { m_handle = handle; }

	void Init();
	void Update();
	void Draw();

private:
	int m_handle;
};

