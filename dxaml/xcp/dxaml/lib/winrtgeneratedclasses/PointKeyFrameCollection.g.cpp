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

#include "PointKeyFrameCollection.g.h"

// Constructors/destructors.
DirectUI::PointKeyFrameCollection::PointKeyFrameCollection()
{
}

DirectUI::PointKeyFrameCollection::~PointKeyFrameCollection()
{
}

HRESULT DirectUI::PointKeyFrameCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PointKeyFrameCollection)))
    {
        *ppObject = static_cast<DirectUI::PointKeyFrameCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::PointKeyFrame*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::PointKeyFrame*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Media::Animation::PointKeyFrame*>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PointKeyFrameCollection()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::PointKeyFrameCollection));
    }
}
