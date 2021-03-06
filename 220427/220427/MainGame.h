#pragma once
#include "Include.h"
#include "Obj.h"
#include "Player.h"
#include "Feild.h"

class CMainGame
{
public:
	CMainGame();
	~CMainGame();

public:
	void Initialize(void);
	void Update(void);
	void Late_Update(void);
	void Render(void);
	void Release(void);

public:
	void Key_Input(void);

private:
	HDC		m_hDC;

	TCHAR		m_szFPS[64];	// 멀티 바이트 기반에서는 CHAR로 유니 코드 기반에서는 유니코드로 처리해주는 매크로
	int			m_iFPS;
	DWORD		m_dwTime;

	/*CObj* m_pPlayer;
	CObj* m_pUlt;*/
	std::list<CObj*> m_Objlist[OBJ_END];
};