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

#include "TextHighlighterBase.g.h"

// Constructors/destructors.
DirectUI::TextHighlighterBase::TextHighlighterBase()
{
}

DirectUI::TextHighlighterBase::~TextHighlighterBase()
{
}

HRESULT DirectUI::TextHighlighterBase::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextHighlighterBase)))
    {
        *ppObject = static_cast<DirectUI::TextHighlighterBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase>(this);
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

HRESULT DirectUI::TextHighlighterBaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBaseFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBaseFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TextHighlighterBase()
    {
        RRETURN(ctl::ActivationFactoryCreator<TextHighlighterBaseFactory>::CreateActivationFactory());
    }
}
