// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcConnection.pas' rev: 36.00 (Android)

#ifndef uHcConnectionHPP
#define uHcConnectionHPP

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
#include <uHcParamsDB.hpp>
#include <uHcJSON.hpp>
#include <uHcRestRequest.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcconnection
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcProxy;
class DELPHICLASS THcBasicAuthentication;
class DELPHICLASS THcConnection;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcProxy : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FServer;
	int FPort;
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	
public:
	__fastcall THcProxy();
	
__published:
	__property System::UnicodeString Server = {read=FServer, write=FServer};
	__property int Port = {read=FPort, write=FPort, default=0};
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~THcProxy() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION THcBasicAuthentication : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FUserName;
	System::UnicodeString FPassword;
	
public:
	__fastcall THcBasicAuthentication();
	
__published:
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~THcBasicAuthentication() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION THcConnection : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FBaseURL;
	System::UnicodeString FResource;
	THcBasicAuthentication* FBasicAuthentication;
	THcProxy* FProxy;
	System::UnicodeString FMyContent;
	int FTimeout;
	System::UnicodeString FSecurityKey;
	bool FCompression;
	Uhcparamsdb::THcParamsDB* FMParamsDB;
	System::Classes::TNotifyEvent FOnBeforeConnect;
	System::UnicodeString __fastcall GetAbout();
	System::UnicodeString __fastcall GetBaseURL();
	System::UnicodeString __fastcall GetResource();
	
public:
	__fastcall virtual THcConnection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcConnection();
	Uhcjson::IHcJSONObject __fastcall GetJSONObjectPost();
	Uhcjson::IHcJSONObject __fastcall OnRequestPost(Uhcjson::IHcJSONObject AJSONObject);
	bool __fastcall ExecSQL(const System::UnicodeString ASQL);
	bool __fastcall FileUpload(const System::UnicodeString AFile, const System::UnicodeString ADirectory = System::UnicodeString())/* overload */;
	bool __fastcall FileUpload(System::Classes::TStream* const AFile, const System::UnicodeString AName, const System::UnicodeString ADirectory = System::UnicodeString())/* overload */;
	System::Classes::TMemoryStream* __fastcall FileDownload(const System::UnicodeString AName, const System::UnicodeString ADirectory = System::UnicodeString());
	Uhcjson::IHcJSONArray __fastcall FileList(const System::UnicodeString ADirectory = System::UnicodeString());
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property System::UnicodeString BaseURL = {read=GetBaseURL, write=FBaseURL};
	__property System::UnicodeString Resource = {read=GetResource, write=FResource};
	__property THcBasicAuthentication* BasicAuthentication = {read=FBasicAuthentication, write=FBasicAuthentication};
	__property THcProxy* Proxy = {read=FProxy, write=FProxy};
	__property System::UnicodeString MyContent = {read=FMyContent, write=FMyContent};
	__property int Timeout = {read=FTimeout, write=FTimeout, default=30000};
	__property System::UnicodeString SecurityKey = {read=FSecurityKey, write=FSecurityKey};
	__property bool Compression = {read=FCompression, write=FCompression, default=1};
	__property Uhcparamsdb::THcParamsDB* ParamsDB = {read=FMParamsDB, write=FMParamsDB};
	__property System::Classes::TNotifyEvent OnBeforeConnect = {read=FOnBeforeConnect, write=FOnBeforeConnect};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcconnection */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCCONNECTION)
using namespace Uhcconnection;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcConnectionHPP
