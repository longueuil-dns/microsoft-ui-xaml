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

#include "ListViewBaseHeaderItem.g.h"

#define __GridViewHeaderItem_GUID "d11c3d4d-bcd7-4b5b-83bb-4bfee78c7e8b"

namespace DirectUI
{
    class GridViewHeaderItem;

    class __declspec(novtable) GridViewHeaderItemGenerated:
        public DirectUI::ListViewBaseHeaderItem
        , public ABI::Microsoft::UI::Xaml::Controls::IGridViewHeaderItem
    {
        friend class DirectUI::GridViewHeaderItem;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.GridViewHeaderItem");

        BEGIN_INTERFACE_MAP(GridViewHeaderItemGenerated, DirectUI::ListViewBaseHeaderItem)
            INTERFACE_ENTRY(GridViewHeaderItemGenerated, ABI::Microsoft::UI::Xaml::Controls::IGridViewHeaderItem)
        END_INTERFACE_MAP(GridViewHeaderItemGenerated, DirectUI::ListViewBaseHeaderItem)

    public:
        GridViewHeaderItemGenerated();
        ~GridViewHeaderItemGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewHeaderItem;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::GridViewHeaderItem;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "GridViewHeaderItem_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) GridViewHeaderItemFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IGridViewHeaderItemFactory
    {
        BEGIN_INTERFACE_MAP(GridViewHeaderItemFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(GridViewHeaderItemFactory, ABI::Microsoft::UI::Xaml::Controls::IGridViewHeaderItemFactory)
        END_INTERFACE_MAP(GridViewHeaderItemFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IGridViewHeaderItem** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GridViewHeaderItem;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
