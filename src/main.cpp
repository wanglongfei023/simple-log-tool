/*==========================================================================
*   Copyright (C) 2019 wang. All rights reserved.
*   
*	Authors:	wanglongfei(395592722@qq.com)
*	Date:		2019/07/17 11:40:34
*	Description：
==========================================================================*/

#include <mylog.h>
int main()
{
	INIT_LOG("../log/test");

	LOG("debug", "test fuction of debug....");

	LOG("notice", "test fuction of notice....");

	LOG("warning", "test fuction of warning...");
	LOG("warning", "test fuction of warning with right expression...", 1 == 1);
	LOG("warning", "test fuction of warning with wrong expression...", 1 == 2);

	LOG("fatal", "test fuction of fatal....", 1 == 1);

	return 0;
}

