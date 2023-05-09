#pragma once
#include <Windows.h> // �����츦 ����/�����ϴ� �Լ����� ȣ���� �� �ִ�

class InputClass; // ���� ����
class GraphicsClass; // ���� ����

class SystemClass
{

public:
	SystemClass(); //������
	SystemClass(const SystemClass&); 
	~SystemClass(); // �Ҹ��� 

	bool Initialize(); //�ʱ�ȭ �Լ�
	void Shutdown(); 
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	void InitalizeWindows(int&, int&);
	void ShutdownWindows();
	LPCWSTR m_applicationName; // �������
	HINSTANCE m_hinstance; 
	HWND m_hwnd;
	bool Frame();
	InputClass* m_Input = nullptr;
	GraphicsClass* m_Graphics = nullptr;

};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
static SystemClass* ApplicationHanle = 0;