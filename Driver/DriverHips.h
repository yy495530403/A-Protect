#ifndef _DRIVER_HIPS_H_
#define _DRIVER_HIPS_H_

#include "ntifs.h"
#include "ntos.h"
#include "ldasm.h"

typedef BOOLEAN (__stdcall *SeSinglePrivilegeCheck_1)(
	__in  LUID PrivilegeValue,
	__in  KPROCESSOR_MODE PreviousMode
	);

SeSinglePrivilegeCheck_1 OldSeSinglePrivilegeCheck;

int SeSinglePrivilegeCheckPatchCodeLen = 0;
PVOID SeSinglePrivilegeCheckRet;

int SeSinglePrivilegeCheckHooked = FALSE;

ULONG ulNtLoadDriverBase,ulNtLoadDriverSize;
ULONG ulZwSetSystemInformationBase,ulZwSetSystemInformationSize;

ULONG ulSeSinglePrivilegeCheck;
ULONG ulReloadSeSinglePrivilegeCheck;

extern BYTE *ImageModuleBase;
extern ULONG SystemKernelModuleBase;
extern ULONG SystemKernelModuleSize;

extern PEPROCESS ProtectEProcess;

//extern BOOL bDisLoadDriver;

ULONG GetSystemRoutineAddress(
	int IntType,
	PVOID lpwzFunction
	);

#endif