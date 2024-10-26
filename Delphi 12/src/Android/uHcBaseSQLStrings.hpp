// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcBaseSQLStrings.pas' rev: 36.00 (Android)

#ifndef uHcBaseSQLStringsHPP
#define uHcBaseSQLStringsHPP

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
#include <uHcCommons.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcbasesqlstrings
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcSQLStrings;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcSQLStrings : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
protected:
	virtual void __fastcall Changed();
public:
	/* TStringList.Create */ inline __fastcall THcSQLStrings()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall THcSQLStrings(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall THcSQLStrings(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall THcSQLStrings(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall THcSQLStrings(System::Classes::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~THcSQLStrings() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcbasesqlstrings */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCBASESQLSTRINGS)
using namespace Uhcbasesqlstrings;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcBaseSQLStringsHPP
