
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#define NOHOOK 0;
#define SSDTHOOK 1
#define SSDTINLINEHOOK 2
#define INLINEHOOK 3
#define WM_SHOWTASK (WM_USER +1)

/*
 * 初始化
 */
#define SAFE_SYSTEM 0x11111111


#define LIST_SSDT   0x11111112                                //列举被挂钩的SSDT函数
#define LIST_SSDT_ALL    0x11111113                           //列举所有SSDT函数  
#define SET_ALL_SSDT 0x11111114                               //恢复所有SSDT函数HOOK
#define SET_ONE_SSDT 0x11111115                               //恢复单个SSDT函数hook
#define SET_INLINE_HOOK 0x11111116                            //恢复单个SSDT inline hook


#define LIST_TCPUDP 0x11111117                                //列举所有网络连接



#define KILL_PROCESS_BY_PID 0x11111118                        //从进程pid结束一个进程
#define LIST_PROCESS 0x11111119                               //列举所有进程
#define DELETE_FILE 0x11111120                                //删除一个文件


#define LIST_PROCESS_MODULE 0x11111121                        //列举进程DLL模块
#define INIT_PROCESS_LIST_PROCESS_MODULE 0x11111122           //在列举进程DLL模块的时候，必须要初始化某些参数


#define LIST_INLINEHOOK 0x11111123                            //枚举ntos*的hook，包括inline hook，eat hook
#define ANTI_INLINEHOOK 0x11111124                            //绕过ntos* inline hook


#define KERNEL_SAFE_MODULE 0x11111125                         //开启内核安全模式
#define NO_KERNEL_SAFE_MODULE 0x11111126                      //关闭内核安全模式


#define LIST_SYS_MODULE 0x11111127                           //列举内核模块

#define EXIT_PROCESS 0x11111128                              //退出3600safe的时候，必须要对内核做清理的命令


#define LIST_SERVICES 0x11111129                             //列举系统服务
#define CHANG_SERVICES_TYPE_1 0x11111130                     //服务手动
#define CHANG_SERVICES_TYPE_2 0x11111131                     //服务自动
#define CHANG_SERVICES_TYPE_3 0x11111132                     //服务禁用
#define LIST_DEPTH_SERVICES 0x11111133                       //深度服务扫描

#define LIST_LOG 0x11111134                                  //列举防御日志

#define INIT_DUMP_KERNEL_MODULE_MEMORY 0x11111135            //初始化dump内核模块
#define DUMP_KERNEL_MODULE_MEMORY 0x11111136                 //dump内核模块内存到文件


#define DIS_CREATE_PROCESS      0x11111137                   //禁止创建进程
#define CREATE_PROCESS          0x11111138                   //允许创建进程

#define DIS_WRITE_FILE      0x11111139                       //禁止创建文件
#define WRITE_FILE      0x11111140                           //允许创建文件 


#define DIS_LOAD_DRIVER      0x11111141                      //禁止加载驱动
#define LOAD_DRIVER      0x11111142                          //允许加载驱动


#define SHUT_DOWN_SYSTEM      0x11111143                     //强制环保重启系统


#define LIST_SHADOWSSDT       0x11111144                     //列举被挂钩的shadowSSDT函数
#define LIST_SHADOWSSDT_ALL       0x11111145                 //列举所有shadowSSDT函数

#define SET_ALL_SHADOWSSDT 0x11111146                        //恢复所有shadowSSDT hook
#define SET_ONE_SHADOWSSDT  0x11111147                       //恢复单个shadowSSDT hook  

#define SET_SHADOWSSDT_INLINE_HOOK 0x11111148                //恢复单个shadowSSDT inline hook

#define LIST_OBJECT_HOOK     0x11111149                      //李傕object hook

#define PROTECT_360SAFE 0x11111150                           //是否保护360  （已去掉此功能）
#define UNPROTECT_360SAFE 0x11111151                         //

#define LIST_FSD_HOOK     0x11111152                         //列举所有NTFS FSD HOOK
#define SET_FSD_HOOK      0x11111153                         //恢复NTFS FSD hook
#define INIT_SET_FSD_HOOK  0x11111154                        //恢复NTFS FSD inline hook之前的初始化工作

#define CLEAR_LIST_LOG  0x11111155                           //清空防御日志

#define LIST_KERNEL_FILTER_DRIVER   0x11111156               //列举过滤驱动
#define DELETE_KERNEL_FILTER_DRIVER   0x11111157             //摘除过滤驱动
#define INIT_KERNEL_FILTER_DRIVER     0x11111158             //摘除过滤驱动之前的初始化工作

#define ONLY_DELETE_FILE  0x11111159                         //直接删除文件，不Reload

#define LIST_TCPIP_HOOK         0x11111160                   //列举所有Tcpip.sys模块hook
#define SET_TCPIP_HOOK      0x11111161                       //恢复Tcpip.sys模块 hook
#define INIT_SET_TCPIP_HOOK  0x11111162                      //恢复Tcpip.sys模块 inline hook之前的初始化工作

#define LIST_NSIPROXY_HOOK         0x11111163                //列举所有Nsiproxy.sys模块hook
#define SET_NSIPROXY_HOOK      0x11111164                    //恢复Nsiproxy.sys模块 hook
#define INIT_SET_NSIPROXY_HOOK  0x11111165                   //恢复Nsiproxy.sys模块 inline hook之前的初始化工作

#define LIST_SYSTEM_THREAD   0x11111166                      //列举系统线程
#define KILL_SYSTEM_THREAD   0x11111167                      //结束系统线程

#define PROTECT_DRIVER_FILE  0x11111168                      //保护驱动文件(已去掉)
#define UNPROTECT_DRIVER_FILE  0x11111169

#define LIST_KERNEL_THREAD   0x11111170                      //列举内核线程
#define CLEAR_KERNEL_THREAD   0x11111171                     //清除内核线程日志

#define SET_EAT_HOOK          0x11111172                     //恢复eat hook

#define PROTECT_PROCESS       0x11111173                     //保护3600safe自身进程
#define UNPROTECT_PROCESS       0x11111174                   //不保护

#define DIS_RESET_SRV 0x11111175                             //禁止服务回写
#define RESET_SRV 0x11111176                                 //允许服务回写

#define KERNEL_THREAD 0x11111177                             //允许创建内核线程
#define DIS_KERNEL_THREAD 0x11111178                         //禁止创建内核线程 

#define RESUME_THREAD    0x11111179                          //恢复线程运行
#define SUSPEND_THREAD    0x11111180                         //暂停线程运行

#define LIST_KBDCLASS_HOOK         0x11111181                //列举所有kbdclass.sys模块hook
#define SET_KBDCLASS_HOOK      0x11111182                    //恢复kbdclass.sys模块 hook
#define INIT_SET_KBDCLASS_HOOK  0x11111183                   //恢复kbdclass.sys模块 inline hook之前的初始化工作

#define LIST_MOUCLASS_HOOK         0x11111184                //列举所有Mouclass.sys模块hook
#define SET_MOUCLASS_HOOK      0x11111185                    //恢复Mouclass.sys模块 hook
#define INIT_SET_MOUCLASS_HOOK  0x11111186                   //恢复Mouclass.sys模块 inline hook之前的初始化工作

#define LIST_ATAPI_HOOK         0x11111187                   //列举所有Atapi.sys模块hook
#define SET_ATAPI_HOOK      0x11111188                       //恢复Atapi.sys模块 hook
#define INIT_SET_ATAPI_HOOK  0x11111189                      //恢复Atapi.sys模块 inline hook之前的初始化工作

#define LIST_DPC_TIMER    0x11111190                         //枚举DPC定时器
#define KILL_DPC_TIMER    0x11111191                         //摘除DPC定时器

#define LIST_SYSTEM_NOTIFY    0x11111192                     //枚举系统回调
#define KILL_SYSTEM_NOTIFY    0x11111193                     //摘除系统回调
#define INIT_KILL_SYSTEM_NOTIFY 0x11111194                   //初始化摘除

#define INIT_PROCESS_THREAD   0x11111195                     //初始化进程EPROCESS
#define LIST_PROCESS_THREAD   0x11111196                     //获取进程线程

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展


#include <afxdisp.h>        // MFC 自动化类



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


