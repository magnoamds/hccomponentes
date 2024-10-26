// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uHcRestRequestClient.pas' rev: 36.00 (Android)

#ifndef uHcRestRequestClientHPP
#define uHcRestRequestClientHPP

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
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include <System.Net.HttpClient.hpp>
#include <REST.Authenticator.Basic.hpp>
#include <uHcRestContract.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uhcrestrequestclient
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THcRequestClient;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THcRequestClient : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStrings* FParams;
	Uhcrestcontract::_di_IHcResponse FResponse;
	System::Classes::TStrings* FHeaders;
	Rest::Authenticator::Basic::THTTPBasicAuthenticator* FHTTPBasicAuthenticator;
	Rest::Client::TRESTRequest* FRESTRequest;
	Rest::Client::TRESTResponse* FRESTResponse;
	Rest::Client::TRESTClient* FRESTClient;
	int FRetries;
	void __fastcall ExecuteRequest();
	void __fastcall DoJoinComponents();
	System::UnicodeString __fastcall PrepareUrlSegments(const System::UnicodeString AValue);
	System::UnicodeString __fastcall AcceptEncoding()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall AcceptEncoding(const System::UnicodeString AAcceptEncoding)/* overload */;
	System::UnicodeString __fastcall AcceptCharset()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall AcceptCharset(const System::UnicodeString AAcceptCharset)/* overload */;
	System::UnicodeString __fastcall Accept()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall Accept(const System::UnicodeString AAccept)/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall BaseURL(const System::UnicodeString ABaseURL)/* overload */;
	System::UnicodeString __fastcall BaseURL()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall Resource(const System::UnicodeString AResource)/* overload */;
	System::UnicodeString __fastcall Resource()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall ResourceSuffix(const System::UnicodeString AResourceSuffix)/* overload */;
	System::UnicodeString __fastcall ResourceSuffix()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall Timeout(const int ATimeout)/* overload */;
	int __fastcall Timeout()/* overload */;
	bool __fastcall RaiseExceptionOn500()/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall RaiseExceptionOn500(const bool ARaiseException)/* overload */;
	System::UnicodeString __fastcall FullRequestURL(const bool AIncludeParams = true);
	Uhcrestcontract::_di_IHcRequest __fastcall Token(const System::UnicodeString AToken);
	Uhcrestcontract::_di_IHcRequest __fastcall TokenBearer(const System::UnicodeString AToken);
	Uhcrestcontract::_di_IHcRequest __fastcall BasicAuthentication(const System::UnicodeString AUsername, const System::UnicodeString APassword);
	Uhcrestcontract::_di_IHcRequest __fastcall Retry(const int ARetries);
	Uhcrestcontract::_di_IHcResponse __fastcall Get();
	Uhcrestcontract::_di_IHcResponse __fastcall Post();
	Uhcrestcontract::_di_IHcResponse __fastcall Put();
	Uhcrestcontract::_di_IHcResponse __fastcall Delete();
	Uhcrestcontract::_di_IHcResponse __fastcall Patch();
	Uhcrestcontract::_di_IHcRequest __fastcall ClearBody();
	Uhcrestcontract::_di_IHcRequest __fastcall AddParam(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterKind AKind = (Rest::Types::TRESTRequestParameterKind)(0x6));
	Uhcrestcontract::_di_IHcRequest __fastcall AddBody(const System::UnicodeString AContent, const Rest::Types::TRESTContentType AContentType = u"application/json")/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall AddBody(System::Classes::TStream* const AContent, const bool AOwns = true)/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall FallbackCharsetEncoding(const System::UnicodeString AFallbackCharsetEncoding);
	Uhcrestcontract::_di_IHcRequest __fastcall AddUrlSegment(const System::UnicodeString AName, const System::UnicodeString AValue);
	Uhcrestcontract::_di_IHcRequest __fastcall SynchronizedEvents(const bool AValue);
	Uhcrestcontract::_di_IHcRequest __fastcall ClearHeaders();
	Uhcrestcontract::_di_IHcRequest __fastcall AddHeader(const System::UnicodeString AName, const System::UnicodeString AValue, const Rest::Types::TRESTRequestParameterOptions AOptions = Rest::Types::TRESTRequestParameterOptions() );
	Uhcrestcontract::_di_IHcRequest __fastcall ClearParams();
	Uhcrestcontract::_di_IHcRequest __fastcall ContentType(const System::UnicodeString AContentType);
	Uhcrestcontract::_di_IHcRequest __fastcall UserAgent(const System::UnicodeString AName);
	Uhcrestcontract::_di_IHcRequest __fastcall AddField(const System::UnicodeString AFieldName, const System::UnicodeString AValue)/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall AddFile(const System::UnicodeString AFieldName, const System::UnicodeString AFileName, const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType())/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall AddFile(const System::UnicodeString AFieldName, System::Classes::TStream* const AValue, const System::UnicodeString AFileName = System::UnicodeString(), const Rest::Types::TRESTContentType AContentType = Rest::Types::TRESTContentType())/* overload */;
	Uhcrestcontract::_di_IHcRequest __fastcall Proxy(const System::UnicodeString AServer, const System::UnicodeString APassword, const System::UnicodeString AUsername, const int APort);
	Uhcrestcontract::_di_IHcRequest __fastcall DeactivateProxy();
	
protected:
	virtual void __fastcall DoAfterExecute(Rest::Client::TCustomRESTRequest* Sender);
	virtual void __fastcall DoBeforeExecute(Rest::Client::TCustomRESTRequest* Sender);
	virtual void __fastcall DoHTTPProtocolError(Rest::Client::TCustomRESTRequest* Sender);
	
public:
	__fastcall virtual THcRequestClient();
	__fastcall virtual ~THcRequestClient();
	__classmethod Uhcrestcontract::_di_IHcRequest __fastcall New();
private:
	void *__IHcRequest;	// Uhcrestcontract::IHcRequest 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7CC1FE15-3BE2-4896-ADC9-BF2754AF9A34}
	operator Uhcrestcontract::_di_IHcRequest()
	{
		Uhcrestcontract::_di_IHcRequest intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Uhcrestcontract::IHcRequest*(void) { return (Uhcrestcontract::IHcRequest*)&__IHcRequest; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Uhcrestrequestclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UHCRESTREQUESTCLIENT)
using namespace Uhcrestrequestclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// uHcRestRequestClientHPP
