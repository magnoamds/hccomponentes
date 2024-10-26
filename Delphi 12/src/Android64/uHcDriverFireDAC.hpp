// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcDriverFireDAC.pas' rev: 36.00 (Android)

#ifndef uHcDriverFireDACHPP
#define uHcDriverFireDACHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <uHcDriverBase.hpp>
#include <uHcEngineContract.hpp>
#include <FireDAC.Comp.Client.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcdriverfiredac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcDriverFireDAC;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THcDriverFireDAC : public Uhcdriverbase::THcDriverBase
{
	typedef Uhcdriverbase::THcDriverBase inherited;
	
private:
	Firedac::Comp::Client::TFDCustomConnection* FConnection;
	bool FFreeConnection;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual THcDriverFireDAC(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THcDriverFireDAC();
	virtual Uhcenginecontract::_di_IHcEngine __fastcall GetEngine();
	
__published:
	__property Firedac::Comp::Client::TFDCustomConnection* Connection = {read=FConnection, write=FConnection};
	__property bool FreeConnection = {read=FFreeConnection, write=FFreeConnection, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcdriverfiredac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCDRIVERFIREDAC)
using namespace Uhcdriverfiredac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcDriverFireDACHPP
