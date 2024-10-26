// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcRestResponseClient.pas' rev: 36.00 (Android)

#ifndef uHcRestResponseClientHPP
#define uHcRestResponseClientHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <uHcRestContract.hpp>
#include <REST.Client.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcrestresponseclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcResponseClient;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcResponseClient : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Rest::Client::TRESTResponse* FRESTResponse;
	System::Classes::TMemoryStream* FStreamValue;
	System::UnicodeString __fastcall Content();
	unsigned __fastcall ContentLength();
	System::UnicodeString __fastcall ContentType();
	System::UnicodeString __fastcall ContentEncoding();
	System::Classes::TStream* __fastcall ContentStream();
	int __fastcall StatusCode();
	System::UnicodeString __fastcall StatusText();
	System::Sysutils::TBytes __fastcall RawBytes();
	System::Classes::TStrings* __fastcall Headers();
	
public:
	__fastcall THcResponseClient(Rest::Client::TRESTResponse* const ARESTResponse);
	__fastcall virtual ~THcResponseClient();
private:
	void *__IHcResponse;	// Uhcrestcontract::IHcResponse 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62F173B5-A01B-447B-9D01-4ECBC1D0B744}
	operator Uhcrestcontract::_di_IHcResponse()
	{
		Uhcrestcontract::_di_IHcResponse intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcrestcontract::IHcResponse*(void) { return (Uhcrestcontract::IHcResponse*)&__IHcResponse; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcrestresponseclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCRESTRESPONSECLIENT)
using namespace Uhcrestresponseclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcRestResponseClientHPP
