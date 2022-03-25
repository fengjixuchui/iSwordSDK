//******************************************************************************
/*++
	FileName:		isword_common.h
	Description:

--*/
//******************************************************************************
#ifndef __isword_common_0E0533C1_62F5_4052_94C4_D07EF8A9AD82__
#define __isword_common_0E0533C1_62F5_4052_94C4_D07EF8A9AD82__
//******************************************************************************
#include <iSwordSDK.h>
#include <iSwordProtocol.h>
#include <stdio.h>
//******************************************************************************
inline void CheckSignError(HRESULT hr)
{
	if (hr == HRESULT_FROM_WIN32(ERROR_INVALID_IMAGE_HASH)) {
		printf("============= ע�� ===============\n");
		printf("����������Ҫǩ��������ǰ����ǩ����\n");
		printf("���û����ʽ��ǩ��֤�飬����ʹ�ò���ǩ������ϸ�ο���\n");
		printf("1. ��������ģʽ�� https://docs.microsoft.com/zh-cn/windows-hardware/drivers/install/the-testsigning-boot-configuration-option\n");
		printf("2. ����������ǩ���� https://docs.microsoft.com/zh-cn/windows-hardware/drivers/install/test-signing-a-driver-file\n");
		printf("================================\n");
		system("PAUSE");
	}
}
//******************************************************************************
inline void WaitForExit(const char* message)
{
	printf("%s\n", message);

	system("PAUSE");
}
//******************************************************************************
#endif
