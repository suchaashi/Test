// MFCLibrary1.h : MFCLibrary1.DLL �̃��C�� �w�b�_�[ �t�@�C��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��


// CMFCLibrary1App
// ���̃N���X�̎����Ɋւ��Ă� MFCLibrary1.cpp ���Q�Ƃ��Ă��������B
//

class CMFCLibrary1App : public CWinApp
{
public:
	CMFCLibrary1App();

// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
