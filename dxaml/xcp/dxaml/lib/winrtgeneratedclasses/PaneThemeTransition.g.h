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

#include "Transition.g.h"

#define __PaneThemeTransition_GUID "a4dcb49f-e34d-4a2f-af27-3a78d961f7d0"

namespace DirectUI
{
    class PaneThemeTransition;

    class __declspec(novtable) PaneThemeTransitionGenerated:
        public DirectUI::Transition
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPaneThemeTransition
    {
        friend class DirectUI::PaneThemeTransition;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.PaneThemeTransition");

        BEGIN_INTERFACE_MAP(PaneThemeTransitionGenerated, DirectUI::Transition)
            INTERFACE_ENTRY(PaneThemeTransitionGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IPaneThemeTransition)
        END_INTERFACE_MAP(PaneThemeTransitionGenerated, DirectUI::Transition)

    public:
        PaneThemeTransitionGenerated();
        ~PaneThemeTransitionGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PaneThemeTransition;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PaneThemeTransition;
        }

        // Properties.
        IFACEMETHOD(get_Edge)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::EdgeTransitionLocation* pValue) override;
        IFACEMETHOD(put_Edge)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "PaneThemeTransition_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) PaneThemeTransitionFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics
    {
        BEGIN_INTERFACE_MAP(PaneThemeTransitionFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(PaneThemeTransitionFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics)
        END_INTERFACE_MAP(PaneThemeTransitionFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_EdgeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PaneThemeTransition;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
