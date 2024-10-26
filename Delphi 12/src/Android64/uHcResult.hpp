// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcResult.pas' rev: 36.00 (Android)

#ifndef uHcResultHPP
#define uHcResultHPP

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
#include <uHcJSON.hpp>
#include <uHcConsts.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcresult
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IHcResult;
typedef System::DelphiInterface<IHcResult> _di_IHcResult;
class DELPHICLASS THcResult;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{D6A418A6-BB22-41FE-BFFC-F0C88E5B2723}") IHcResult  : public System::IInterface 
{
	virtual _di_IHcResult __fastcall Success(const bool Value) = 0 ;
	virtual _di_IHcResult __fastcall Message(const System::UnicodeString Value) = 0 ;
	virtual _di_IHcResult __fastcall FieldDefs(const Uhcjson::IHcJSONArray Value) = 0 ;
	virtual _di_IHcResult __fastcall Data(const System::UnicodeString Value) = 0 /* overload */;
	virtual _di_IHcResult __fastcall Data(const Uhcjson::IHcJSONObject Value) = 0 /* overload */;
	virtual _di_IHcResult __fastcall Data(const Uhcjson::IHcJSONArray Value) = 0 /* overload */;
	virtual Uhcjson::IHcJSONObject __fastcall AsJSONObject() = 0 ;
	virtual System::UnicodeString __fastcall ToString() = 0 ;
};

class PASCALIMPLEMENTATION THcResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Uhcjson::IHcJSONObject FJSONObject;
	
public:
	__fastcall THcResult(bool ASuccess);
	__fastcall virtual ~THcResult();
	__classmethod _di_IHcResult __fastcall New(bool ASuccess = true);
	_di_IHcResult __fastcall Success(const bool Value);
	_di_IHcResult __fastcall Message(const System::UnicodeString Value);
	_di_IHcResult __fastcall FieldDefs(const Uhcjson::IHcJSONArray Value);
	_di_IHcResult __fastcall Data(const System::UnicodeString Value)/* overload */;
	_di_IHcResult __fastcall Data(const Uhcjson::IHcJSONObject Value)/* overload */;
	_di_IHcResult __fastcall Data(const Uhcjson::IHcJSONArray Value)/* overload */;
	Uhcjson::IHcJSONObject __fastcall AsJSONObject();
	virtual System::UnicodeString __fastcall ToString();
private:
	void *__IHcResult;	// IHcResult 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D6A418A6-BB22-41FE-BFFC-F0C88E5B2723}
	operator _di_IHcResult()
	{
		_di_IHcResult intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IHcResult*(void) { return (IHcResult*)&__IHcResult; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcresult */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCRESULT)
using namespace Uhcresult;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcResultHPP
