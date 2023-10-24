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

#include "SineEase.g.h"

// Constructors/destructors.
DirectUI::SineEase::SineEase()
{
}

DirectUI::SineEase::~SineEase()
{
}

HRESULT DirectUI::SineEase::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SineEase)))
    {
        *ppObject = static_cast<DirectUI::SineEase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ISineEase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ISineEase*>(this);
    }
    else
    {
        RRETURN(DirectUI::EasingFunctionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SineEase()
    {
        RRETURN(ctl::ActivationFactoryCreator<SineEaseFactory>::CreateActivationFactory());
    }
}
