// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "IsApiContractNotPresent.g.h"

// Constructors/destructors.
DirectUI::IsApiContractNotPresentGenerated::IsApiContractNotPresentGenerated()
{
}

DirectUI::IsApiContractNotPresentGenerated::~IsApiContractNotPresentGenerated()
{
}

HRESULT DirectUI::IsApiContractNotPresentGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IsApiContractNotPresent)))
    {
        *ppObject = static_cast<DirectUI::IsApiContractNotPresent*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IXamlPredicate)))
    {
        *ppObject = static_cast<DirectUI::IXamlPredicate*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::IsApiContractNotPresentGenerated::Evaluate(_In_ ABI::Windows::Foundation::Collections::IVectorView<HSTRING>* pArguments, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::IsApiContractNotPresent_Evaluate);
    }
    ARG_NOTNULL(pArguments, "arguments");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<IsApiContractNotPresent*>(this)->EvaluateImpl(pArguments, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}
