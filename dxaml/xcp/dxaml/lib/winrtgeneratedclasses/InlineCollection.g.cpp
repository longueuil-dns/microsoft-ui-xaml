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

#include "InlineCollection.g.h"

// Constructors/destructors.
DirectUI::InlineCollectionGenerated::InlineCollectionGenerated()
{
}

DirectUI::InlineCollectionGenerated::~InlineCollectionGenerated()
{
}

HRESULT DirectUI::InlineCollectionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::InlineCollection)))
    {
        *ppObject = static_cast<DirectUI::InlineCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::Inline*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::Inline*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::TextElementCollection<ABI::Microsoft::UI::Xaml::Documents::Inline*>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_InlineCollection()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::InlineCollection));
    }
}
