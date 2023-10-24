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

#include "InertiaExpansionBehavior.g.h"

// Constructors/destructors.
DirectUI::InertiaExpansionBehavior::InertiaExpansionBehavior()
{
}

DirectUI::InertiaExpansionBehavior::~InertiaExpansionBehavior()
{
}

HRESULT DirectUI::InertiaExpansionBehavior::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::InertiaExpansionBehavior)))
    {
        *ppObject = static_cast<DirectUI::InertiaExpansionBehavior*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IInertiaExpansionBehavior*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::InertiaExpansionBehavior::get_DesiredDeceleration(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::InertiaExpansionBehavior_DesiredDeceleration, pValue));
}
IFACEMETHODIMP DirectUI::InertiaExpansionBehavior::put_DesiredDeceleration(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::InertiaExpansionBehavior_DesiredDeceleration, value));
}
IFACEMETHODIMP DirectUI::InertiaExpansionBehavior::get_DesiredExpansion(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::InertiaExpansionBehavior_DesiredExpansion, pValue));
}
IFACEMETHODIMP DirectUI::InertiaExpansionBehavior::put_DesiredExpansion(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::InertiaExpansionBehavior_DesiredExpansion, value));
}

// Events.

// Methods.

// Factory methods.

// Dependency properties.



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_InertiaExpansionBehavior()
    {
        RRETURN(ctl::ActivationFactoryCreator<InertiaExpansionBehaviorFactory>::CreateActivationFactory());
    }
}
