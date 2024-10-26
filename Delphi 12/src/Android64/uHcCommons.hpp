// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcCommons.pas' rev: 36.00 (Android)

#ifndef uHcCommonsHPP
#define uHcCommonsHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.DateUtils.hpp>
#include <uHcEngineContract.hpp>
#include <uHcConsts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhccommons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcCommons;
//-- type declarations -------------------------------------------------------
typedef System::DelphiInterface<System::Sysutils::TFunc__1<Uhcenginecontract::_di_IHcEngine> > THcFuncEngine;

typedef System::DelphiInterface<System::Sysutils::TFunc__1<System::UnicodeString> > THcFuncContent;

typedef System::Sysutils::_di_TProc THcProc;

typedef void __fastcall (__closure *THcEvent)(const System::UnicodeString Value);

class PASCALIMPLEMENTATION THcCommons : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod bool __fastcall EvaluationExpired();
	__classmethod System::UnicodeString __fastcall GetHcInfo();
public:
	/* TObject.Create */ inline __fastcall THcCommons() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~THcCommons() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhccommons */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCCOMMONS)
using namespace Uhccommons;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcCommonsHPP
