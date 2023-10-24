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

#include "RepeatButton.g.h"

// Constructors/destructors.
DirectUI::RepeatButtonGenerated::RepeatButtonGenerated()
{
}

DirectUI::RepeatButtonGenerated::~RepeatButtonGenerated()
{
}

HRESULT DirectUI::RepeatButtonGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RepeatButton)))
    {
        *ppObject = static_cast<DirectUI::RepeatButton*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButton)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButton*>(this);
    }
    else
    {
        RRETURN(DirectUI::ButtonBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RepeatButtonGenerated::get_Delay(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RepeatButton_Delay, pValue));
}
IFACEMETHODIMP DirectUI::RepeatButtonGenerated::put_Delay(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RepeatButton_Delay, value));
}
IFACEMETHODIMP DirectUI::RepeatButtonGenerated::get_Interval(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RepeatButton_Interval, pValue));
}
IFACEMETHODIMP DirectUI::RepeatButtonGenerated::put_Interval(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RepeatButton_Interval, value));
}

// Events.

// Methods.

HRESULT DirectUI::RepeatButtonFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButtonStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButtonStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::RepeatButtonFactory::get_DelayProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RepeatButton_Delay, ppValue));
}
IFACEMETHODIMP DirectUI::RepeatButtonFactory::get_IntervalProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RepeatButton_Interval, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RepeatButton()
    {
        RRETURN(ctl::ActivationFactoryCreator<RepeatButtonFactory>::CreateActivationFactory());
    }
}
