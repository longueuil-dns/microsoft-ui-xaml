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

#include "FloatCollection.g.h"

// Constructors/destructors.
DirectUI::FloatCollection::FloatCollection()
{
}

DirectUI::FloatCollection::~FloatCollection()
{
}

HRESULT DirectUI::FloatCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FloatCollection)))
    {
        *ppObject = static_cast<DirectUI::FloatCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<FLOAT>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<FLOAT>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<FLOAT>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FloatCollection()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::FloatCollection));
    }
}
