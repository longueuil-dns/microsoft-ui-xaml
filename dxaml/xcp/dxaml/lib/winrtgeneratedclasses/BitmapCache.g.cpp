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

#include "BitmapCache.g.h"

// Constructors/destructors.
DirectUI::BitmapCache::BitmapCache()
{
}

DirectUI::BitmapCache::~BitmapCache()
{
}

HRESULT DirectUI::BitmapCache::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::BitmapCache)))
    {
        *ppObject = static_cast<DirectUI::BitmapCache*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IBitmapCache)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IBitmapCache*>(this);
    }
    else
    {
        RRETURN(DirectUI::CacheMode::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_BitmapCache()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::BitmapCache));
    }
}
