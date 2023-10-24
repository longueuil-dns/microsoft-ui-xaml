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

#include "TextBlockAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::TextBlockAutomationPeerGenerated::TextBlockAutomationPeerGenerated()
{
}

DirectUI::TextBlockAutomationPeerGenerated::~TextBlockAutomationPeerGenerated()
{
}

HRESULT DirectUI::TextBlockAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextBlockAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::TextBlockAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer*>(this);
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

HRESULT DirectUI::TextBlockAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::TextBlockAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::ITextBlock* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithOwnerImpl(pOwner, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TextBlockAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<TextBlockAutomationPeerFactory>::CreateActivationFactory());
    }
}
