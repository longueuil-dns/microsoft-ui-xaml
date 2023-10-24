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

#include "StoryboardCollection.g.h"

// Constructors/destructors.
DirectUI::StoryboardCollection::StoryboardCollection()
{
}

DirectUI::StoryboardCollection::~StoryboardCollection()
{
}

HRESULT DirectUI::StoryboardCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::StoryboardCollection)))
    {
        *ppObject = static_cast<DirectUI::StoryboardCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>::QueryInterfaceImpl(iid, ppObject));
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
