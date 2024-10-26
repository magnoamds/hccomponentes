// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcTypes.pas' rev: 36.00 (Android)

#ifndef uHcTypesHPP
#define uHcTypesHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhctypes
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM THcAction : unsigned char { hcConnExecSQL, hcOpen, hcPersistence, hcExecSQL, hcFile };

enum class DECLSPEC_DENUM THcOperation : unsigned char { hcInsert, hcUpdate, hcDelete };

enum class DECLSPEC_DENUM THcFileOption : unsigned char { hcUpload, hcDownload, hcList };

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhctypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCTYPES)
using namespace Uhctypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcTypesHPP
