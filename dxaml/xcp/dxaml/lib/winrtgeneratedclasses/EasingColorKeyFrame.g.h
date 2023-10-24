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

#pragma once

#include "ColorKeyFrame.g.h"

#define __EasingColorKeyFrame_GUID "ac66af9d-21ce-49ac-98ff-49ae33dacf35"

namespace DirectUI
{
    class EasingColorKeyFrame;
    class EasingFunctionBase;

    class __declspec(novtable) __declspec(uuid(__EasingColorKeyFrame_GUID)) EasingColorKeyFrame:
        public DirectUI::ColorKeyFrame
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IEasingColorKeyFrame
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.EasingColorKeyFrame");

        BEGIN_INTERFACE_MAP(EasingColorKeyFrame, DirectUI::ColorKeyFrame)
            INTERFACE_ENTRY(EasingColorKeyFrame, ABI::Microsoft::UI::Xaml::Media::Animation::IEasingColorKeyFrame)
        END_INTERFACE_MAP(EasingColorKeyFrame, DirectUI::ColorKeyFrame)

    public:
        EasingColorKeyFrame();
        ~EasingColorKeyFrame() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::EasingColorKeyFrame;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::EasingColorKeyFrame;
        }

        // Properties.
        IFACEMETHOD(get_EasingFunction)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase** ppValue) override;
        IFACEMETHOD(put_EasingFunction)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) EasingColorKeyFrameFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics
    {
        BEGIN_INTERFACE_MAP(EasingColorKeyFrameFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(EasingColorKeyFrameFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics)
        END_INTERFACE_MAP(EasingColorKeyFrameFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_EasingFunctionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::EasingColorKeyFrame;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
