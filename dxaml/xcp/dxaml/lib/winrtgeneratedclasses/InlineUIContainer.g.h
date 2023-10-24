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

#include "Inline.g.h"

#define __InlineUIContainer_GUID "315ffaef-b154-4442-acfb-699f6e130b27"

namespace DirectUI
{
    class InlineUIContainer;
    class UIElement;

    class __declspec(novtable) InlineUIContainerGenerated:
        public DirectUI::Inline
        , public ABI::Microsoft::UI::Xaml::Documents::IInlineUIContainer
    {
        friend class DirectUI::InlineUIContainer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Documents.InlineUIContainer");

        BEGIN_INTERFACE_MAP(InlineUIContainerGenerated, DirectUI::Inline)
            INTERFACE_ENTRY(InlineUIContainerGenerated, ABI::Microsoft::UI::Xaml::Documents::IInlineUIContainer)
        END_INTERFACE_MAP(InlineUIContainerGenerated, DirectUI::Inline)

    public:
        InlineUIContainerGenerated();
        ~InlineUIContainerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::InlineUIContainer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::InlineUIContainer;
        }

        // Properties.
        IFACEMETHOD(get_Child)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        IFACEMETHOD(put_Child)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "InlineUIContainer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) InlineUIContainerFactory:
       public ctl::BetterCoreObjectActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::InlineUIContainer;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
