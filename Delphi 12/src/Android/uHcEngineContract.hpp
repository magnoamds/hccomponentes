// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcEngineContract.pas' rev: 36.00 (Android)

#ifndef uHcEngineContractHPP
#define uHcEngineContractHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <uHcParamsDB.hpp>
#include <uHcTypes.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcenginecontract
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IHcEngine;
typedef System::DelphiInterface<IHcEngine> _di_IHcEngine;
//-- type declarations -------------------------------------------------------
using Uhcparamsdb::THcParamsDB;

__interface  INTERFACE_UUID("{CC056AF1-2C82-4721-8B7B-FAF7D840291C}") IHcEngine  : public System::IInterface 
{
	virtual bool __fastcall InTransaction() = 0 ;
	virtual _di_IHcEngine __fastcall StartTransaction() = 0 ;
	virtual _di_IHcEngine __fastcall Commit() = 0 ;
	virtual _di_IHcEngine __fastcall Rollback() = 0 ;
	virtual System::Classes::TStrings* __fastcall SQL() = 0 ;
	virtual Data::Db::TParams* __fastcall Params() = 0 ;
	virtual _di_IHcEngine __fastcall ExecSQL() = 0 ;
	virtual Data::Db::TDataSet* __fastcall DataSet() = 0 ;
	virtual _di_IHcEngine __fastcall Open(System::UnicodeString aSQL) = 0 /* overload */;
	virtual _di_IHcEngine __fastcall Open() = 0 /* overload */;
	virtual _di_IHcEngine __fastcall Close() = 0 ;
	virtual _di_IHcEngine __fastcall OpenConnection() = 0 ;
	virtual _di_IHcEngine __fastcall CloseConnection() = 0 ;
	virtual bool __fastcall ConnectionExecSQL(const System::UnicodeString ASQL) = 0 ;
	virtual _di_IHcEngine __fastcall SaveToStream(System::Classes::TStream* AStream) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcenginecontract */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCENGINECONTRACT)
using namespace Uhcenginecontract;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcEngineContractHPP
