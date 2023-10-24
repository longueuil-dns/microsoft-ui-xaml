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

#include "AppBarLightDismiss.g.h"

// Constructors/destructors.
DirectUI::AppBarLightDismissGenerated::AppBarLightDismissGenerated()
{
}

DirectUI::AppBarLightDismissGenerated::~AppBarLightDismissGenerated()
{
}

HRESULT DirectUI::AppBarLightDismissGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AppBarLightDismiss)))
    {
        *ppObject = static_cast<DirectUI::AppBarLightDismiss*>(this);
    }
    else
    {
        RRETURN(DirectUI::Grid::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
}
