// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcULID.pas' rev: 36.00 (Android)

#ifndef uHcULIDHPP
#define uHcULIDHPP

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

//-- user supplied -----------------------------------------------------------

namespace Uhculid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcULID;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcULID : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod System::UnicodeString __fastcall EncodeTime(__int64 ATime);
	__classmethod System::UnicodeString __fastcall EncodeRandom();
	
public:
	__classmethod System::UnicodeString __fastcall Generate();
public:
	/* TObject.Create */ inline __fastcall THcULID() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~THcULID() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhculid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCULID)
using namespace Uhculid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcULIDHPP
