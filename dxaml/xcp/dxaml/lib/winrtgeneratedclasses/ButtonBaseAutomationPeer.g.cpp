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

#include "ButtonBaseAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::ButtonBaseAutomationPeerGenerated::ButtonBaseAutomationPeerGenerated()
{
}

DirectUI::ButtonBaseAutomationPeerGenerated::~ButtonBaseAutomationPeerGenerated()
{
}

HRESULT DirectUI::ButtonBaseAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ButtonBaseAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ButtonBaseAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer*>(this);
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

HRESULT DirectUI::ButtonBaseAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ButtonBaseAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer** ppInstance)
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
    _Check_return_ IActivationFactory* CreateActivationFactory_ButtonBaseAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<ButtonBaseAutomationPeerFactory>::CreateActivationFactory());
    }
}
