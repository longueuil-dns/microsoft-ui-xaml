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

#include "GridLength.g.h"

#define __ColumnDefinition_GUID "21210372-dbf3-4f19-91ba-ee08043b5de8"

namespace DirectUI
{
    class ColumnDefinition;

    class __declspec(novtable) __declspec(uuid(__ColumnDefinition_GUID)) ColumnDefinition:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Controls::IColumnDefinition
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ColumnDefinition");

        BEGIN_INTERFACE_MAP(ColumnDefinition, DirectUI::DependencyObject)
            INTERFACE_ENTRY(ColumnDefinition, ABI::Microsoft::UI::Xaml::Controls::IColumnDefinition)
        END_INTERFACE_MAP(ColumnDefinition, DirectUI::DependencyObject)

    public:
        ColumnDefinition();
        ~ColumnDefinition() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ColumnDefinition;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ColumnDefinition;
        }

        // Properties.
        IFACEMETHOD(get_ActualWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_MaxWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_MaxWidth)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_MinWidth)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_MinWidth)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_Width)(_Out_ ABI::Microsoft::UI::Xaml::GridLength* pValue) override;
        IFACEMETHOD(put_Width)(_In_ ABI::Microsoft::UI::Xaml::GridLength value) override;

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
    class __declspec(novtable) ColumnDefinitionFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IColumnDefinitionStatics
    {
        BEGIN_INTERFACE_MAP(ColumnDefinitionFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(ColumnDefinitionFactory, ABI::Microsoft::UI::Xaml::Controls::IColumnDefinitionStatics)
        END_INTERFACE_MAP(ColumnDefinitionFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_WidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaxWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MinWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ColumnDefinition;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
