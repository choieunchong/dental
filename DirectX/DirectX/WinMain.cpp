﻿#include "stdafx.h"
#include "SystemClass.h"
#include <iostream>



int APIENTRYMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevinstance,
	_In_ LPWSTR lpCmdLinem, _In_ int nCmdShow)
{ // System 객체 생성
	SystemClass* System = new SystemClass;
	if (!System)
	{
		return -1;
	}

	//System 객체 초기화 및 실행
	if (System->Initialize())
	{
		System->Run();
	}

	// System 객체 종료 및 메모리 반환
	System->Shutdown();
	delete System; // 메모리 삭제
	System = nullptr;

	return 0;
}




