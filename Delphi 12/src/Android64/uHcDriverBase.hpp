// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcDriverBase.pas' rev: 36.00 (Android)

#ifndef uHcDriverBaseHPP
#define uHcDriverBaseHPP

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
#include <uHcEngineContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcdriverbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcDriverBase;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcDriverBase : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString __fastcall GetAbout();
	
public:
	virtual Uhcenginecontract::_di_IHcEngine __fastcall GetEngine() = 0 ;
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
public:
	/* TComponent.Create */ inline __fastcall virtual THcDriverBase(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~THcDriverBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcdriverbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCDRIVERBASE)
using namespace Uhcdriverbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcDriverBaseHPP
