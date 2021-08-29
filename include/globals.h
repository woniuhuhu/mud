#ifndef GLOBALS_H
#define GLOBALS_H
//游戏管理员账号
#define WIZARD "test" 
// 功能模块
#include "inherit.h"
// 守护进程
#include "daemons.h"
// 标准继承对象
#include "stdob.h"
//指令路径
#define CMD_PATH_WIZ ({"/cmds/wiz/","/mudcore/cmds/wizard/"})
#define CMD_PATH_STD ({"/cmds/std/","/mudcore/cmds/player/"})
// 其他
#define MOTD    "/system/etc/motd"
#define PRELOAD "/system/etc/preload"

#include <mudcore.h>
#endif 