// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcPrimaryKey.pas' rev: 36.00 (Android)

#ifndef uHcPrimaryKeyHPP
#define uHcPrimaryKeyHPP

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
#include <uHcJSON.hpp>
#include <uHcJSONContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcprimarykey
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcPrimaryKeyItem;
class DELPHICLASS THcPrimaryKeys;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcPrimaryKeyItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FAutoInc;
	Data::Db::TFieldType FDataType;
	System::UnicodeString FName;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property bool AutoInc = {read=FAutoInc, write=FAutoInc, nodefault};
	__property Data::Db::TFieldType DataType = {read=FDataType, write=FDataType, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual THcPrimaryKeyItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~THcPrimaryKeyItem() { }
	
};


class PASCALIMPLEMENTATION THcPrimaryKeys : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
private:
	HIDESBASE THcPrimaryKeyItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, THcPrimaryKeyItem* AValue);
	
public:
	Uhcjson::IHcJSONArray __fastcall ToJSONArray();
	bool __fastcall Contains(System::UnicodeString AName);
	HIDESBASE THcPrimaryKeyItem* __fastcall Add();
	HIDESBASE THcPrimaryKeyItem* __fastcall Insert(int AIndex);
	__property THcPrimaryKeyItem* Items[int Index] = {read=GetItem, write=SetItem};
public:
	/* TOwnedCollection.Create */ inline __fastcall THcPrimaryKeys(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~THcPrimaryKeys() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcprimarykey */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCPRIMARYKEY)
using namespace Uhcprimarykey;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcPrimaryKeyHPP
