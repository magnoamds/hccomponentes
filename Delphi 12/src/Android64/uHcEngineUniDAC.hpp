// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcEngineUniDAC.pas' rev: 36.00 (Android)

#ifndef uHcEngineUniDACHPP
#define uHcEngineUniDACHPP

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
#include <uHcEngineContract.hpp>
#include <Uni.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcengineunidac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcEngineUniDAC;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcEngineUniDAC : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Uni::TUniConnection* FConnection;
	Uni::TUniQuery* FQry;
	Data::Db::TParams* FParams;
	
public:
	__fastcall THcEngineUniDAC(Uni::TUniConnection* AConexao);
	__fastcall virtual ~THcEngineUniDAC();
	__classmethod Uhcenginecontract::_di_IHcEngine __fastcall New(Uni::TUniConnection* AConexao);
	bool __fastcall InTransaction();
	Uhcenginecontract::_di_IHcEngine __fastcall StartTransaction();
	Uhcenginecontract::_di_IHcEngine __fastcall Commit();
	Uhcenginecontract::_di_IHcEngine __fastcall Rollback();
	System::Classes::TStrings* __fastcall SQL();
	Data::Db::TParams* __fastcall Params();
	Uhcenginecontract::_di_IHcEngine __fastcall ExecSQL();
	Data::Db::TDataSet* __fastcall DataSet();
	Uhcenginecontract::_di_IHcEngine __fastcall Open(System::UnicodeString ASQL)/* overload */;
	Uhcenginecontract::_di_IHcEngine __fastcall Open()/* overload */;
	Uhcenginecontract::_di_IHcEngine __fastcall Close();
	Uhcenginecontract::_di_IHcEngine __fastcall OpenConnection();
	Uhcenginecontract::_di_IHcEngine __fastcall CloseConnection();
	bool __fastcall ConnectionExecSQL(const System::UnicodeString ASQL);
	Uhcenginecontract::_di_IHcEngine __fastcall SaveToStream(System::Classes::TStream* AStream);
private:
	void *__IHcEngine;	// Uhcenginecontract::IHcEngine 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CC056AF1-2C82-4721-8B7B-FAF7D840291C}
	operator Uhcenginecontract::_di_IHcEngine()
	{
		Uhcenginecontract::_di_IHcEngine intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcenginecontract::IHcEngine*(void) { return (Uhcenginecontract::IHcEngine*)&__IHcEngine; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcengineunidac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCENGINEUNIDAC)
using namespace Uhcengineunidac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcEngineUniDACHPP
