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

#include "ScrollItemAdapter.g.h"

// Constructors/destructors.
DirectUI::ScrollItemAdapterGenerated::ScrollItemAdapterGenerated()
{
}

DirectUI::ScrollItemAdapterGenerated::~ScrollItemAdapterGenerated()
{
}

HRESULT DirectUI::ScrollItemAdapterGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ScrollItemAdapter)))
    {
        *ppObject = static_cast<DirectUI::ScrollItemAdapter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IScrollItemProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IScrollItemProvider*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::ScrollItemAdapterGenerated::ScrollIntoView()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::ScrollItemAdapter_ScrollIntoView);
    }
    
    IFC(CheckThread());
    IFC(static_cast<ScrollItemAdapter*>(this)->ScrollIntoViewImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


