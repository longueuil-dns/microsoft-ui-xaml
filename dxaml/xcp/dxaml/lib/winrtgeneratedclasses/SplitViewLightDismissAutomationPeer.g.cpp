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

#include "SplitViewLightDismissAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::SplitViewLightDismissAutomationPeerGenerated::SplitViewLightDismissAutomationPeerGenerated()
{
}

DirectUI::SplitViewLightDismissAutomationPeerGenerated::~SplitViewLightDismissAutomationPeerGenerated()
{
}

HRESULT DirectUI::SplitViewLightDismissAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SplitViewLightDismissAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::SplitViewLightDismissAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElementAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::SplitViewLightDismissAutomationPeerGenerated::Invoke()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::SplitViewLightDismissAutomationPeer_Invoke);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SplitViewLightDismissAutomationPeer*>(this)->InvokeImpl());
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
