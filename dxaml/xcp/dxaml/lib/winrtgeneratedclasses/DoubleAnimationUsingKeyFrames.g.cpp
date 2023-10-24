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

#include "DoubleAnimationUsingKeyFrames.g.h"
#include "DoubleKeyFrameCollection.g.h"

// Constructors/destructors.
DirectUI::DoubleAnimationUsingKeyFrames::DoubleAnimationUsingKeyFrames()
{
}

DirectUI::DoubleAnimationUsingKeyFrames::~DoubleAnimationUsingKeyFrames()
{
}

HRESULT DirectUI::DoubleAnimationUsingKeyFrames::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DoubleAnimationUsingKeyFrames)))
    {
        *ppObject = static_cast<DirectUI::DoubleAnimationUsingKeyFrames*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames*>(this);
    }
    else
    {
        RRETURN(DirectUI::Timeline::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::DoubleAnimationUsingKeyFrames::get_EnableDependentAnimation(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::DoubleAnimationUsingKeyFrames_EnableDependentAnimation, pValue));
}
IFACEMETHODIMP DirectUI::DoubleAnimationUsingKeyFrames::put_EnableDependentAnimation(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::DoubleAnimationUsingKeyFrames_EnableDependentAnimation, value));
}
IFACEMETHODIMP DirectUI::DoubleAnimationUsingKeyFrames::get_KeyFrames(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::DoubleKeyFrame*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::DoubleAnimationUsingKeyFrames_KeyFrames, ppValue));
}

// Events.

// Methods.

HRESULT DirectUI::DoubleAnimationUsingKeyFramesFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics*>(this);
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

IFACEMETHODIMP DirectUI::DoubleAnimationUsingKeyFramesFactory::get_EnableDependentAnimationProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::DoubleAnimationUsingKeyFrames_EnableDependentAnimation, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DoubleAnimationUsingKeyFrames()
    {
        RRETURN(ctl::ActivationFactoryCreator<DoubleAnimationUsingKeyFramesFactory>::CreateActivationFactory());
    }
}
