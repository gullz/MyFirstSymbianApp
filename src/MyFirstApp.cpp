/*
 ============================================================================
 Name		: MyFirstApp.cpp
 Author	  : Bhathiya
 Copyright   : Test Application 0.1b - Symbian application to display text messages in console
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Exe source file
 ============================================================================
 */

//  Include Files  

#include "MyFirstApp.h"
#include <e32base.h>
#include <e32std.h>
#include <e32cons.h>			// Console

//  Constants

_LIT(KTextConsoleTitle, "Console");
_LIT(KTextFailed, " failed, leave code = %d");
_LIT(KTextPressAnyKey, " [press any key]\n");

//  Global Variables

LOCAL_D CConsoleBase* console; 


GLDEF_C TInt E32Main()
	{
	// Create output console
	console = Console::NewL(KTextConsoleTitle, TSize(KConsFullScreen, KConsFullScreen));
	console->Write(_L("Hello, world!\n"));
	console->Printf(KTextPressAnyKey);
	console->Getch();

	delete console;
	return KErrNone;
	}

