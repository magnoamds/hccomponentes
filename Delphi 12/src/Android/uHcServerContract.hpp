// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcServerContract.pas' rev: 36.00 (Android)

#ifndef uHcServerContractHPP
#define uHcServerContractHPP

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
#include <uHcJSON.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcservercontract
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IHcService;
typedef System::DelphiInterface<IHcService> _di_IHcService;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{0A898A94-88F8-46F9-BA3F-DB6C27A2435F}") IHcService  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall Resource(Uhcjson::IHcJSONObject AJSONObject) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcservercontract */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCSERVERCONTRACT)
using namespace Uhcservercontract;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcServerContractHPP
