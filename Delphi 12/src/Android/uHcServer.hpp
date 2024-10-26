// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcServer.pas' rev: 36.00 (Android)

#ifndef uHcServerHPP
#define uHcServerHPP

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
#include <uHcDriverBase.hpp>
#include <uHcCommons.hpp>
#include <uHcParamsDB.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcserver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcServer;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcServer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Uhcdriverbase::THcDriverBase* FHcEngine;
	System::UnicodeString FMyContent;
	Uhcparamsdb::THcParamsDB* FMParamsDB;
	System::UnicodeString FSecurityKey;
	System::Classes::TNotifyEvent FBeforeExecute;
	Uhccommons::THcEvent FOnError;
	System::UnicodeString __fastcall GetAbout();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual THcServer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcServer();
	System::UnicodeString __fastcall Resource(const System::UnicodeString AValue)/* overload */;
	__property System::UnicodeString MyContent = {read=FMyContent};
	__property Uhcparamsdb::THcParamsDB* ParamsDB = {read=FMParamsDB};
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property Uhcdriverbase::THcDriverBase* HcEngine = {read=FHcEngine, write=FHcEngine};
	__property System::UnicodeString SecurityKey = {read=FSecurityKey, write=FSecurityKey};
	__property System::Classes::TNotifyEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property Uhccommons::THcEvent OnError = {read=FOnError, write=FOnError};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCSERVER)
using namespace Uhcserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcServerHPP
