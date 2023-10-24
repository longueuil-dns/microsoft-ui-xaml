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

#include "BeginStoryboard.g.h"
#include "Storyboard.g.h"

// Constructors/destructors.
DirectUI::BeginStoryboard::BeginStoryboard()
{
}

DirectUI::BeginStoryboard::~BeginStoryboard()
{
}

HRESULT DirectUI::BeginStoryboard::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::BeginStoryboard)))
    {
        *ppObject = static_cast<DirectUI::BeginStoryboard*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IBeginStoryboard)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IBeginStoryboard*>(this);
    }
    else
    {
        RRETURN(DirectUI::TriggerAction::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::BeginStoryboard::get_Storyboard(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::BeginStoryboard_Storyboard, ppValue));
}
IFACEMETHODIMP DirectUI::BeginStoryboard::put_Storyboard(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::BeginStoryboard_Storyboard, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::BeginStoryboardFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IBeginStoryboardStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IBeginStoryboardStatics*>(this);
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
IFACEMETHODIMP DirectUI::BeginStoryboardFactory::get_StoryboardProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::BeginStoryboard_Storyboard, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_BeginStoryboard()
    {
        RRETURN(ctl::ActivationFactoryCreator<BeginStoryboardFactory>::CreateActivationFactory());
    }
}
