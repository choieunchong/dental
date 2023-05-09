#pragma once
#include <Windows.h> // 윈도우를 생성/제거하는 함수들을 호출할 수 있다

class InputClass; // 전방 선언
class GraphicsClass; // 전방 선언

class SystemClass
{

public:
	SystemClass(); //생성자
	SystemClass(const SystemClass&); 
	~SystemClass(); // 소멸자 

	bool Initialize(); //초기화 함수
	void Shutdown(); 
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	void InitalizeWindows(int&, int&);
	void ShutdownWindows();
	LPCWSTR m_applicationName; // 멤버변수
	HINSTANCE m_hinstance; 
	HWND m_hwnd;
	bool Frame();
	InputClass* m_Input = nullptr;
	GraphicsClass* m_Graphics = nullptr;

};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
static SystemClass* ApplicationHanle = 0;