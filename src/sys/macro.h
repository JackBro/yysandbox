#pragma once

#define  MAXPATHLEN         260        // 文件|进程|注册表最大长度
#define  MAXNAMELEN         64         // 用户名最大长度

#define	 RUN_ONCE	\
{ \
	static  BOOLEAN bUninit = FALSE;\
	if (bUninit==TRUE)\
	{\
		return;\
	}\
	bUninit = TRUE;\
}