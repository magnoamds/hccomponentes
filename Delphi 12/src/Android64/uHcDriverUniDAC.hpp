// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcDriverUniDAC.pas' rev: 36.00 (Android)

#ifndef uHcDriverUniDACHPP
#define uHcDriverUniDACHPP

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
#include <uHcEngineContract.hpp>
#include <Uni.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcdriverunidac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcDriverUniDAC;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcDriverUniDAC : public Uhcdriverbase::THcDriverBase
{
	typedef Uhcdriverbase::THcDriverBase inherited;
	
private:
	Uni::TUniConnection* FConnection;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual THcDriverUniDAC(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcDriverUniDAC();
	virtual Uhcenginecontract::_di_IHcEngine __fastcall GetEngine();
	
__published:
	__property Uni::TUniConnection* Connection = {read=FConnection, write=FConnection};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcdriverunidac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCDRIVERUNIDAC)
using namespace Uhcdriverunidac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcDriverUniDACHPP
