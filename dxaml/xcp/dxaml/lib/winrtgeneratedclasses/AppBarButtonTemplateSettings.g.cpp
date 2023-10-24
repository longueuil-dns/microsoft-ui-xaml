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

#include "AppBarButtonTemplateSettings.g.h"

// Constructors/destructors.
DirectUI::AppBarButtonTemplateSettings::AppBarButtonTemplateSettings()
{
}

DirectUI::AppBarButtonTemplateSettings::~AppBarButtonTemplateSettings()
{
}

HRESULT DirectUI::AppBarButtonTemplateSettings::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AppBarButtonTemplateSettings)))
    {
        *ppObject = static_cast<DirectUI::AppBarButtonTemplateSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AppBarButtonTemplateSettings::get_KeyboardAcceleratorTextMinWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AppBarButtonTemplateSettings_KeyboardAcceleratorTextMinWidth, pValue));
}
_Check_return_ HRESULT DirectUI::AppBarButtonTemplateSettings::put_KeyboardAcceleratorTextMinWidth(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AppBarButtonTemplateSettings_KeyboardAcceleratorTextMinWidth, value));
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
    _Check_return_ IActivationFactory* CreateActivationFactory_AppBarButtonTemplateSettings()
    {
        RRETURN(ctl::ActivationFactoryCreator<AppBarButtonTemplateSettingsFactory>::CreateActivationFactory());
    }
}
