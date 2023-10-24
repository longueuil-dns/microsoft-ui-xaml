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

#include "ComboBoxAutomationPeer.g.h"

// Constructors/destructors.
DirectUI::ComboBoxAutomationPeerGenerated::ComboBoxAutomationPeerGenerated()
{
}

DirectUI::ComboBoxAutomationPeerGenerated::~ComboBoxAutomationPeerGenerated()
{
}

HRESULT DirectUI::ComboBoxAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ComboBoxAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ComboBoxAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IExpandCollapseProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IExpandCollapseProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IWindowProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IWindowProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::SelectorAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_ExpandCollapseState(_Out_ ABI::Microsoft::UI::Xaml::Automation::ExpandCollapseState* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_ExpandCollapseStateImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_InteractionState(_Out_ ABI::Microsoft::UI::Xaml::Automation::WindowInteractionState* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_InteractionStateImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_IsModal(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_IsModalImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_IsReadOnly(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_IsReadOnlyImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_IsTopmost(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_IsTopmostImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_Maximizable(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_MaximizableImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_Minimizable(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_MinimizableImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_Value(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_ValueImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::get_VisualState(_Out_ ABI::Microsoft::UI::Xaml::Automation::WindowVisualState* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->get_VisualStateImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::Close()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_Close);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->CloseImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::Collapse()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_Collapse);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->CollapseImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::Expand()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_Expand);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->ExpandImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::SetValue(_In_ HSTRING value)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_SetValue);
    }
    ARG_NOTNULL(value, "value");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->SetValueImpl(value));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::SetVisualState(_In_ ABI::Microsoft::UI::Xaml::Automation::WindowVisualState state)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_SetVisualState);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->SetVisualStateImpl(state));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerGenerated::WaitForInputIdle(_In_ INT milliseconds, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ComboBoxAutomationPeer_WaitForInputIdle);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ComboBoxAutomationPeer*>(this)->WaitForInputIdleImpl(milliseconds, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::ComboBoxAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ComboBoxAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::IComboBox* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer** ppInstance)
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
    _Check_return_ IActivationFactory* CreateActivationFactory_ComboBoxAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<ComboBoxAutomationPeerFactory>::CreateActivationFactory());
    }
}
