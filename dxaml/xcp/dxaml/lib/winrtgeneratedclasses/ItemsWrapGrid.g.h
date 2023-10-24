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

#include "ModernCollectionBasePanel.g.h"
#include "IOrientedPanel.g.h"
#include "Thickness.g.h"

#define __ItemsWrapGrid_GUID "81b3c2e9-dba8-4612-92f8-a3e96e437b0b"

namespace DirectUI
{
    class ItemsWrapGrid;

    class __declspec(novtable) ItemsWrapGridGenerated:
        public DirectUI::ModernCollectionBasePanel
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsWrapGrid
        , public DirectUI::IOrientedPanel
    {
        friend class DirectUI::ItemsWrapGrid;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ItemsWrapGrid");

        BEGIN_INTERFACE_MAP(ItemsWrapGridGenerated, DirectUI::ModernCollectionBasePanel)
            INTERFACE_ENTRY(ItemsWrapGridGenerated, ABI::Microsoft::UI::Xaml::Controls::IItemsWrapGrid)
            INTERFACE_ENTRY(ItemsWrapGridGenerated, DirectUI::IOrientedPanel)
        END_INTERFACE_MAP(ItemsWrapGridGenerated, DirectUI::ModernCollectionBasePanel)

    public:
        ItemsWrapGridGenerated();
        ~ItemsWrapGridGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsWrapGrid;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ItemsWrapGrid;
        }

        // Properties.
        IFACEMETHOD(get_AreStickyGroupHeadersEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_AreStickyGroupHeadersEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_CacheLength)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_CacheLength)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_FirstCacheIndex)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_FirstVisibleIndex)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_GroupHeaderPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GroupHeaderPlacement* pValue) override;
        IFACEMETHOD(put_GroupHeaderPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::GroupHeaderPlacement value) override;
        IFACEMETHOD(get_GroupPadding)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        IFACEMETHOD(put_GroupPadding)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) override;
        IFACEMETHOD(get_ItemHeight)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemHeight)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_ItemWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ItemWidth)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_LastCacheIndex)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_LastVisibleIndex)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_MaximumRowsOrColumns)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_MaximumRowsOrColumns)(_In_ INT value) override;
        IFACEMETHOD(get_Orientation)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue) override;
        IFACEMETHOD(put_Orientation)(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value) override;
        IFACEMETHOD(get_ScrollingDirection)(_Out_ ABI::Microsoft::UI::Xaml::Controls::PanelScrollingDirection* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ItemsWrapGrid_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ItemsWrapGridFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsWrapGridStatics
    {
        BEGIN_INTERFACE_MAP(ItemsWrapGridFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(ItemsWrapGridFactory, ABI::Microsoft::UI::Xaml::Controls::IItemsWrapGridStatics)
        END_INTERFACE_MAP(ItemsWrapGridFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_GroupPaddingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OrientationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaximumRowsOrColumnsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_GroupHeaderPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CacheLengthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_AreStickyGroupHeadersEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsWrapGrid;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
