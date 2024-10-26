// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcServerService.pas' rev: 36.00 (Android)

#ifndef uHcServerServiceHPP
#define uHcServerServiceHPP

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
#include <Data.DB.hpp>
#include <System.Generics.Collections.hpp>
#include <System.IOUtils.hpp>
#include <uHcJSON.hpp>
#include <uHcTypes.hpp>
#include <uHcEngineContract.hpp>
#include <uHcDriverBase.hpp>
#include <uHcServerContract.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcserverservice
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcServerService;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcServerService : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Uhcenginecontract::_di_IHcEngine FHcEngine;
	void __fastcall SetParamsDataSet(Uhcenginecontract::_di_IHcEngine AHcEngine, Uhcjson::IHcJSONArray AJSONArray);
	System::UnicodeString __fastcall HcFile(Uhcjson::IHcJSONObject AJSONObject);
	System::UnicodeString __fastcall Open(Uhcjson::IHcJSONObject AJSONObject);
	System::UnicodeString __fastcall Persistence(Uhcjson::IHcJSONArray AJSONItems);
	System::UnicodeString __fastcall ExecSQL(Uhcjson::IHcJSONArray AJSONItems);
	System::UnicodeString __fastcall ConnectionExecSQL(Uhcjson::IHcJSONObject AJSONObject);
	
public:
	__fastcall THcServerService(Uhcenginecontract::_di_IHcEngine AHcEngine);
	__fastcall virtual ~THcServerService();
	__classmethod Uhcservercontract::_di_IHcService __fastcall New(Uhcenginecontract::_di_IHcEngine AHcEngine);
	System::UnicodeString __fastcall Resource(Uhcjson::IHcJSONObject AJSONObject);
private:
	void *__IHcService;	// Uhcservercontract::IHcService 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0A898A94-88F8-46F9-BA3F-DB6C27A2435F}
	operator Uhcservercontract::_di_IHcService()
	{
		Uhcservercontract::_di_IHcService intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcservercontract::IHcService*(void) { return (Uhcservercontract::IHcService*)&__IHcService; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcserverservice */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCSERVERSERVICE)
using namespace Uhcserverservice;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcServerServiceHPP
