// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcTools.pas' rev: 36.00 (Android)

#ifndef uHcToolsHPP
#define uHcToolsHPP

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
#include <System.TypInfo.hpp>
#include <uHcJSON.hpp>
#include <uHcConsts.hpp>
#include <uHcTypes.hpp>
#include <uHcPrimaryKey.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhctools
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcTools;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcTools : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod void __fastcall FieldToJSONValue(Data::Db::TField* const AField, Uhcjson::IHcJSONObject AJSONObject);
	__classmethod void __fastcall JSONValueToParam(Uhcjson::IHcJSONValue AJSONValue, Data::Db::TParam* AParam);
	__classmethod System::UnicodeString __fastcall FieldValueToString(Data::Db::TField* AField);
	
public:
	__classmethod void __fastcall DecodeMDString(System::UnicodeString ASource, System::Classes::TStrings* AList);
	__classmethod System::UnicodeString __fastcall HcActionToString(Uhctypes::THcAction AValue);
	__classmethod Uhctypes::THcAction __fastcall StringToHcAction(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall HcOperationToString(Uhctypes::THcOperation AValue);
	__classmethod Uhctypes::THcOperation __fastcall StringToHcOperation(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall HcFileOptionToString(Uhctypes::THcFileOption AValue);
	__classmethod Uhctypes::THcFileOption __fastcall StringToHcFileOption(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall ProviderFlagsToString(Data::Db::TProviderFlags AValue);
	__classmethod Data::Db::TProviderFlags __fastcall StringToProviderFlags(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall FieldTypeToString(Data::Db::TFieldType AValue);
	__classmethod Data::Db::TFieldType __fastcall StringToFieldType(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall ParamTypeToString(Data::Db::TParamType AValue);
	__classmethod Data::Db::TParamType __fastcall StringToParamType(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall FieldAttributesToString(Data::Db::TFieldAttributes AValue);
	__classmethod Data::Db::TFieldAttributes __fastcall StringToFieldAttributes(System::UnicodeString AValue);
	__classmethod System::UnicodeString __fastcall StreamToBase64(System::Classes::TStream* AStream);
	__classmethod System::Classes::TMemoryStream* __fastcall Base64ToStream(System::UnicodeString ABase64);
	__classmethod Uhcjson::IHcJSONArray __fastcall FieldDefsToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToFieldDefs(Uhcjson::IHcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigProviderFlags(Uhcjson::IHcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall ConfigPrimaryKey(Uhcjson::IHcJSONArray AJSONArray, Uhcprimarykey::THcPrimaryKeys* APrimaryKey);
	__classmethod Uhcjson::IHcJSONArray __fastcall ParamsToJSONArray(Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONArrayToParams(Uhcjson::IHcJSONArray AJSONArray, Data::Db::TParams* AParams);
	__classmethod void __fastcall JSONValueToField(Uhcjson::IHcJSONValue AJSONValue, Data::Db::TField* AField);
	__classmethod Uhcjson::IHcJSONObject __fastcall DataSetToJSONObject(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONObjectToDataSet(Uhcjson::IHcJSONObject AJSONObject, Data::Db::TDataSet* ADataSet);
	__classmethod Uhcjson::IHcJSONArray __fastcall DataSetToJSONArray(Data::Db::TDataSet* ADataSet);
	__classmethod void __fastcall JSONArrayToDataSet(Uhcjson::IHcJSONArray AJSONArray, Data::Db::TDataSet* ADataSet);
	__classmethod Uhcjson::IHcJSONObject __fastcall DataSetToJSONPersistence(Uhctypes::THcOperation AOperation, Data::Db::TDataSet* ADataSet, Uhcprimarykey::THcPrimaryKeys* APrimaryKey);
public:
	/* TObject.Create */ inline __fastcall THcTools() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~THcTools() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhctools */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCTOOLS)
using namespace Uhctools;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcToolsHPP
