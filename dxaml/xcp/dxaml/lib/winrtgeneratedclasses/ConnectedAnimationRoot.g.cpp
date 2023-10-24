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

#include "ConnectedAnimationRoot.g.h"

// Constructors/destructors.
DirectUI::ConnectedAnimationRoot::ConnectedAnimationRoot()
{
}

DirectUI::ConnectedAnimationRoot::~ConnectedAnimationRoot()
{
}

HRESULT DirectUI::ConnectedAnimationRoot::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ConnectedAnimationRoot)))
    {
        *ppObject = static_cast<DirectUI::ConnectedAnimationRoot*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
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
