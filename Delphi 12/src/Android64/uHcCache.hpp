// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcCache.pas' rev: 36.00 (Android)

#ifndef uHcCacheHPP
#define uHcCacheHPP

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
#include <System.Generics.Collections.hpp>
#include <Data.DB.hpp>
#include <uHcConnection.hpp>
#include <uHcJSON.hpp>
#include <uHcTools.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhccache
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcCache;
class DELPHICLASS THcCached;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcCache : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Uhcjson::IHcJSONArray FPersistence;
	Uhcjson::IHcJSONArray FExecSQL;
	Uhcconnection::THcConnection* FHcConnection;
	bool FClearOnClose;
	System::UnicodeString __fastcall GetAbout();
	bool __fastcall RequestPersistence();
	bool __fastcall RequestExecSQL();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual THcCache(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcCache();
	void __fastcall AddPersistence(const Uhcjson::IHcJSONObject AJSONObject);
	void __fastcall AddExecSQL(System::UnicodeString ASQL, Uhcjson::IHcJSONArray AParams);
	THcCache* __fastcall Clear();
	bool __fastcall UpdatePending();
	bool __fastcall CommitUpdates();
	bool __fastcall ExecSQLPending();
	bool __fastcall CommitExecSQL();
	
__published:
	__property System::UnicodeString About = {read=GetAbout};
	__property Uhcconnection::THcConnection* HcConnection = {read=FHcConnection, write=FHcConnection};
	__property bool ClearOnClose = {read=FClearOnClose, write=FClearOnClose, default=1};
};


class PASCALIMPLEMENTATION THcCached : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FActive;
	THcCache* FHcCache;
	
public:
	__fastcall THcCached();
	__fastcall virtual ~THcCached();
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=0};
	__property THcCache* HcCache = {read=FHcCache, write=FHcCache};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhccache */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCCACHE)
using namespace Uhccache;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcCacheHPP
