// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcMemTable.pas' rev: 36.00 (Android)

#ifndef uHcMemTableHPP
#define uHcMemTableHPP

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
#include <uHcBaseDataSet.hpp>
#include <uHcCache.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Stan.StorageBin.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <uHcConnection.hpp>
#include <uHcPrimaryKey.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcmemtable
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcMemTable;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcMemTable : public Firedac::Comp::Client::TFDMemTable
{
	typedef Firedac::Comp::Client::TFDMemTable inherited;
	
private:
	Uhcbasedataset::THcBaseDataSet* FHcBase;
	Data::Db::TParams* __fastcall GetHcParams();
	Uhcbasedataset::THcPrimaryKeys* __fastcall GetHcPrimaryKeys();
	System::UnicodeString __fastcall GetHcAbout();
	Uhccache::THcCached* __fastcall GetHcCache();
	Uhcbasedataset::THcConnection* __fastcall GetHcConnection();
	System::Classes::TStrings* __fastcall GetHcSQL();
	void __fastcall SetHcParams(Data::Db::TParams* const Value);
	void __fastcall SetHcPrimaryKeys(Uhcbasedataset::THcPrimaryKeys* const Value);
	void __fastcall SetHcCache(Uhccache::THcCached* const Value);
	void __fastcall SetHcConnection(Uhcbasedataset::THcConnection* const Value);
	void __fastcall SetHcSQL(System::Classes::TStrings* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall InternalClose();
	virtual void __fastcall DoBeforeOpen();
	virtual void __fastcall DoAfterOpen();
	virtual void __fastcall DoBeforeInsert();
	virtual void __fastcall DoAfterInsert();
	virtual void __fastcall DoBeforePost();
	virtual void __fastcall DoAfterPost();
	virtual void __fastcall DoBeforeDelete();
	virtual void __fastcall DoAfterDelete();
	virtual void __fastcall DoBeforeScroll();
	virtual void __fastcall DoAfterScroll();
	virtual void __fastcall DoOnNewRecord();
	virtual void __fastcall DoAfterRefresh();
	
public:
	__fastcall virtual THcMemTable(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcMemTable();
	void __fastcall ExecSQL();
	HIDESBASE Data::Db::TParam* __fastcall ParamByName(const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString HcAbout = {read=GetHcAbout};
	__property Uhccache::THcCached* Cache = {read=GetHcCache, write=SetHcCache};
	__property Uhcbasedataset::THcConnection* Connection = {read=GetHcConnection, write=SetHcConnection};
	__property Uhcbasedataset::THcPrimaryKeys* PrimaryKeys = {read=GetHcPrimaryKeys, write=SetHcPrimaryKeys};
	__property Data::Db::TParams* Params = {read=GetHcParams, write=SetHcParams};
	__property System::Classes::TStrings* SQL = {read=GetHcSQL, write=SetHcSQL};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcmemtable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCMEMTABLE)
using namespace Uhcmemtable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcMemTableHPP
