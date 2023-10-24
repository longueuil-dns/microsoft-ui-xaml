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

#include "HyperlinkAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::HyperlinkAutomationPeerGenerated::HyperlinkAutomationPeerGenerated()
{
}

DirectUI::HyperlinkAutomationPeerGenerated::~HyperlinkAutomationPeerGenerated()
{
}

HRESULT DirectUI::HyperlinkAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::HyperlinkAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::HyperlinkAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::AutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::HyperlinkAutomationPeerGenerated::Invoke()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::HyperlinkAutomationPeer_Invoke);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<HyperlinkAutomationPeer*>(this)->InvokeImpl());
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
