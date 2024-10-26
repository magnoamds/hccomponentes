// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcJSONObject.pas' rev: 36.00 (Android)

#ifndef uHcJSONObjectHPP
#define uHcJSONObjectHPP

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
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcjsonobject
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcJSONObject;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcJSONObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	Uhcjsoncontract::_di_IHcJSONValue operator[](System::UnicodeString Name) { return this->Values[Name]; }
	
private:
	System::Json::TJSONObject* FJSONObject;
	bool FAOwns;
	Uhcjsoncontract::_di_IHcJSONValue __fastcall GetValues(System::UnicodeString AName);
	
public:
	__fastcall THcJSONObject();
	__fastcall virtual ~THcJSONObject();
	static Uhcjsoncontract::_di_IHcJSONObject __fastcall New();
	Uhcjsoncontract::_di_IHcJSONObject __fastcall SetPointer(System::Json::TJSONValue* const AJSONValue);
	Uhcjsoncontract::_di_IHcJSONObject __fastcall Parse(const System::UnicodeString AJSONString);
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, System::Json::TJSONValue* const AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::UnicodeString AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const __int64 AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const int AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const unsigned AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const double AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Extended AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const System::Currency AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const bool AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const Uhcjsoncontract::_di_IHcJSONObject AValue)/* overload */;
	Uhcjsoncontract::_di_IHcJSONObject __fastcall AddPair(const System::UnicodeString AName, const Uhcjsoncontract::_di_IHcJSONArray AValue)/* overload */;
	System::Json::TJSONObject* __fastcall ToJSONObject();
	System::UnicodeString __fastcall Stringify();
	bool __fastcall Contains(const System::UnicodeString AName);
	Uhcjsoncontract::_di_IHcJSONObject __fastcall Delete(const System::UnicodeString AName);
	bool __fastcall IsEmpty();
	Uhcjsoncontract::_di_IHcJSONObject __fastcall Clear();
	int __fastcall Count();
	__property Uhcjsoncontract::_di_IHcJSONValue Values[System::UnicodeString Name] = {read=GetValues/*, default*/};
private:
	void *__IHcJSONObject;	// Uhcjsoncontract::IHcJSONObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BD9FF7F2-7549-4CDF-83FA-9768358DC6B1}
	operator Uhcjsoncontract::_di_IHcJSONObject()
	{
		Uhcjsoncontract::_di_IHcJSONObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcjsoncontract::IHcJSONObject*(void) { return (Uhcjsoncontract::IHcJSONObject*)&__IHcJSONObject; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcjsonobject */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCJSONOBJECT)
using namespace Uhcjsonobject;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcJSONObjectHPP
