#pragma once

// �w�i�N���X
class Bg
{
public:
	Bg();
	virtual ~Bg();

	// �g�p����O���t�B�b�N��ݒ肷��
	void SetHandle(int handle) { m_handle = handle; }

	void Init();
	void Update();
	void Draw();

private:
	int m_handle;
};

