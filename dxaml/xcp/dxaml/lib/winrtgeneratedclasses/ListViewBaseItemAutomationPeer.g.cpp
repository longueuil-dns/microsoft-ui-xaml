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

#include "ListViewBaseItemAutomationPeer.g.h"
#include "IRawElementProviderSimple.g.h"

// Constructors/destructors.
DirectUI::ListViewBaseItemAutomationPeerGenerated::ListViewBaseItemAutomationPeerGenerated()
{
}

DirectUI::ListViewBaseItemAutomationPeerGenerated::~ListViewBaseItemAutomationPeerGenerated()
{
}

HRESULT DirectUI::ListViewBaseItemAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ListViewBaseItemAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::ListViewBaseItemAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IDragProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IDragProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElementAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ListViewBaseItemAutomationPeerGenerated::get_DropEffect(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ListViewBaseItemAutomationPeer*>(this)->get_DropEffectImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ListViewBaseItemAutomationPeerGenerated::get_DropEffects(_Out_ UINT* pCount, _Out_writes_to_ptr_(*pCount) HSTRING** pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ListViewBaseItemAutomationPeer*>(this)->get_DropEffectsImpl(pCount, pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ListViewBaseItemAutomationPeerGenerated::get_IsGrabbed(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<ListViewBaseItemAutomationPeer*>(this)->get_IsGrabbedImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ListViewBaseItemAutomationPeerGenerated::GetGrabbedItems(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ListViewBaseItemAutomationPeer_GetGrabbedItems);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ListViewBaseItemAutomationPeer*>(this)->GetGrabbedItemsImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


