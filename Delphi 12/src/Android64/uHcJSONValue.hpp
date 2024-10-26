// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcJSONValue.pas' rev: 36.00 (Android)

#ifndef uHcJSONValueHPP
#define uHcJSONValueHPP

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
#include <System.JSON.hpp>
#include <System.Generics.Collections.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcjsonvalue
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcJSONValue;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcJSONValue : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
public:
	enum DECLSPEC_DENUM THcTypeJson : unsigned char { tjunknown, tjValue, tjObject, tjArray };
	
	
private:
	System::UnicodeString FPairName;
	int FIndex;
	System::Json::TJSONObject* FJSONObject;
	System::Json::TJSONArray* FJSONArray;
	THcTypeJson FHcTypeJson;
	
public:
	__fastcall THcJSONValue(System::Json::TJSONObject* AJSONObject, System::UnicodeString APairName)/* overload */;
	__fastcall THcJSONValue(System::Json::TJSONArray* AJSONArray, int AIndex)/* overload */;
	__fastcall virtual ~THcJSONValue();
	static Uhcjsoncontract::_di_IHcJSONValue __fastcall New(System::Json::TJSONObject* AJSONObject, System::UnicodeString APairName)/* overload */;
	static Uhcjsoncontract::_di_IHcJSONValue __fastcall New(System::Json::TJSONArray* AJSONArray, int AIndex)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AsJSONObject();
	Uhcjsoncontract::_di_IHcJSONArray __fastcall AsJSONArray();
	System::UnicodeString __fastcall AsString();
	__int64 __fastcall AsInt64();
	int __fastcall AsInteger();
	unsigned __fastcall AsCardinal();
	double __fastcall AsDouble();
	System::Extended __fastcall AsExtended();
	System::Currency __fastcall AsCurrency();
	bool __fastcall AsBoolean();
	bool __fastcall IsNull();
private:
	void *__IHcJSONValue;	// Uhcjsoncontract::IHcJSONValue 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {129B85E0-1026-4E34-A94B-FFE6AC2D176A}
	operator Uhcjsoncontract::_di_IHcJSONValue()
	{
		Uhcjsoncontract::_di_IHcJSONValue intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcjsoncontract::IHcJSONValue*(void) { return (Uhcjsoncontract::IHcJSONValue*)&__IHcJSONValue; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcjsonvalue */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCJSONVALUE)
using namespace Uhcjsonvalue;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcJSONValueHPP
