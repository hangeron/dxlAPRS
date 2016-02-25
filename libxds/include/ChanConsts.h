/* XDS v2.60: Copyright (c) 1999-2011 Excelsior, LLC. All Rights Reserved. */
/* Generated by XDS Modula-2 to ANSI C v4.20 translator */

#ifndef ChanConsts_H_
#define ChanConsts_H_
#ifndef X2C_H_
#include "X2C.h"
#endif

enum ChanConsts_ChanFlags {ChanConsts_readFlag, 
   ChanConsts_writeFlag, 
   ChanConsts_oldFlag, 
   ChanConsts_textFlag, 
   ChanConsts_rawFlag, 
   ChanConsts_interactiveFlag, 
   ChanConsts_echoFlag};


typedef X2C_CARD8 ChanConsts_FlagSet;

extern X2C_CARD8 ChanConsts_read;

extern X2C_CARD8 ChanConsts_write;

extern X2C_CARD8 ChanConsts_old;

extern X2C_CARD8 ChanConsts_text;

extern X2C_CARD8 ChanConsts_raw;

extern X2C_CARD8 ChanConsts_interactive;

extern X2C_CARD8 ChanConsts_echo;

enum ChanConsts_OpenResults {ChanConsts_opened, 
   ChanConsts_wrongNameFormat, 
   ChanConsts_wrongFlags, 
   ChanConsts_tooManyOpen, 
   ChanConsts_outOfChans, 
   ChanConsts_wrongPermissions, 
   ChanConsts_noRoomOnDevice, 
   ChanConsts_noSuchFile, 
   ChanConsts_fileExists, 
   ChanConsts_wrongFileType, 
   ChanConsts_noTextOperations, 
   ChanConsts_noRawOperations, 
   ChanConsts_noMixedOperations, 
   ChanConsts_alreadyOpen, 
   ChanConsts_otherProblem};



extern void ChanConsts_BEGIN(void);


#endif /* ChanConsts_H_ */