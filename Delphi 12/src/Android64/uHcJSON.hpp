// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcJSON.pas' rev: 36.00 (Android)

#ifndef uHcJSONHPP
#define uHcJSONHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.JSON.hpp>
#include <uHcJSONContract.hpp>
#include <uHcJSONValue.hpp>
#include <uHcJSONObject.hpp>
#include <uHcJSONArray.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcjson
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef Uhcjsoncontract::_di_IHcJSONValue IHcJSONValue;

typedef Uhcjsoncontract::_di_IHcJSONObject IHcJSONObject;

typedef Uhcjsoncontract::_di_IHcJSONArray IHcJSONArray;

using System::Json::TJSONValue;

using System::Json::TJSONPair;

using System::Json::TJSONObject;

using System::Json::TJSONArray;

using Uhcjsonvalue::THcJSONValue;

using Uhcjsonobject::THcJSONObject;

using Uhcjsonarray::THcJSONArray;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Json::TJSONNull* __fastcall HcNull(void);
extern DELPHI_PACKAGE bool __fastcall IsHcJSONObject(const System::UnicodeString AValue);
extern DELPHI_PACKAGE bool __fastcall IsHcJSONArray(const System::UnicodeString AValue);
}	/* namespace Uhcjson */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCJSON)
using namespace Uhcjson;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcJSONHPP
