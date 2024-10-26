// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcBaseDataSet.pas' rev: 36.00 (Android)

#ifndef uHcBaseDataSetHPP
#define uHcBaseDataSetHPP

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
#include <uHcConnection.hpp>
#include <uHcRestContract.hpp>
#include <uHcCommons.hpp>
#include <uHcTools.hpp>
#include <uHcPrimaryKey.hpp>
#include <uHcJSON.hpp>
#include <uHcTypes.hpp>
#include <uHcCache.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcbasedataset
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcBaseDataSet;
//-- type declarations -------------------------------------------------------
using Uhcconnection::THcConnection;

using Uhccache::THcCached;

using Uhcprimarykey::THcPrimaryKeys;

using Uhccommons::THcEvent;

using Uhccommons::THcCommons;

#pragma pack(push,4)
class PASCALIMPLEMENTATION THcBaseDataSet : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	THcConnection* FHcConnection;
	Data::Db::TDataSet* FDataSet;
	System::Classes::TStrings* FSQL;
	Data::Db::TParams* FParams;
	Uhcjson::IHcJSONArray FJSONFieldDefs;
	Uhcjson::IHcJSONArray FJSONData;
	bool FLoading;
	Uhcjson::IHcJSONArray FPersistence;
	THcCached* FCache;
	Uhcjson::IHcJSONObject FJSONRecord;
	THcPrimaryKeys* FHcPrimaryKeys;
	void __fastcall SetSQL(System::Classes::TStrings* const AValue);
	void __fastcall SetHcPrimaryKeys(THcPrimaryKeys* const AValue);
	void __fastcall OnOnChangeSQL(System::TObject* Sender);
	System::UnicodeString __fastcall GetAbout();
	System::Classes::TStrings* __fastcall GetSQL();
	void __fastcall ExecSQL();
	
public:
	__fastcall THcBaseDataSet(System::Classes::TComponent* ADataSet);
	__fastcall virtual ~THcBaseDataSet();
	bool __fastcall HcIsDesigning(System::Classes::TComponent* AComp);
	THcConnection* __fastcall HcFindDefaultConnection(System::Classes::TComponent* AComp);
	void __fastcall LoadFieldDefs();
	void __fastcall LoadData();
	void __fastcall ClearItems();
	void __fastcall LoadRec(Uhctypes::THcOperation AOperation, Data::Db::TDataSet* ADataSet);
	void __fastcall AddItem();
	Uhcjson::IHcJSONArray __fastcall Persistence();
	bool __fastcall RequestOpen();
	bool __fastcall RequestPersistence();
	void __fastcall DoBeforeOpen(Data::Db::TDataSource* ADataSource = (Data::Db::TDataSource*)(0x0), System::UnicodeString AMasterFields = System::UnicodeString(), System::UnicodeString ADetailFields = System::UnicodeString());
	void __fastcall DoAfterRefresh(Data::Db::TDataSource* ADataSource = (Data::Db::TDataSource*)(0x0), System::UnicodeString AMasterFields = System::UnicodeString(), System::UnicodeString ADetailFields = System::UnicodeString());
	void __fastcall DoAfterOpen();
	void __fastcall DoBeforePost();
	void __fastcall DoBeforeDelete();
	void __fastcall DoExecSQL();
	__property bool Loading = {read=FLoading, write=FLoading, nodefault};
	__property Data::Db::TParams* Params = {read=FParams, write=FParams};
	__property System::UnicodeString About = {read=GetAbout};
	__property THcConnection* Connection = {read=FHcConnection, write=FHcConnection};
	__property System::Classes::TStrings* SQL = {read=GetSQL, write=SetSQL};
	__property THcCached* Cache = {read=FCache, write=FCache};
	__property THcPrimaryKeys* PrimaryKeys = {read=FHcPrimaryKeys, write=SetHcPrimaryKeys};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcbasedataset */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCBASEDATASET)
using namespace Uhcbasedataset;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcBaseDataSetHPP
