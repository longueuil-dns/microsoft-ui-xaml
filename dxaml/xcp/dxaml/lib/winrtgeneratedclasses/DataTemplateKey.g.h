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


#define __DataTemplateKey_GUID "00d8fc9c-275a-47fb-8470-550b0b767e60"

namespace DirectUI
{
    class DataTemplateKey;

    class __declspec(novtable) DataTemplateKeyGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::IDataTemplateKey
    {
        friend class DirectUI::DataTemplateKey;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.DataTemplateKey");

        BEGIN_INTERFACE_MAP(DataTemplateKeyGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(DataTemplateKeyGenerated, ABI::Microsoft::UI::Xaml::IDataTemplateKey)
        END_INTERFACE_MAP(DataTemplateKeyGenerated, ctl::WeakReferenceSource)

    public:
        DataTemplateKeyGenerated();
        ~DataTemplateKeyGenerated() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_DataType)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_DataType)(_In_opt_ IInspectable* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DataTemplateKey_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DataTemplateKeyFactory:
       public ctl::AggregableActivationFactory<DirectUI::DataTemplateKey>
        , public ABI::Microsoft::UI::Xaml::IDataTemplateKeyFactory
    {
        BEGIN_INTERFACE_MAP(DataTemplateKeyFactory, ctl::AggregableActivationFactory<DirectUI::DataTemplateKey>)
            INTERFACE_ENTRY(DataTemplateKeyFactory, ABI::Microsoft::UI::Xaml::IDataTemplateKeyFactory)
        END_INTERFACE_MAP(DataTemplateKeyFactory, ctl::AggregableActivationFactory<DirectUI::DataTemplateKey>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplateKey** ppInstance);
        IFACEMETHOD(CreateInstanceWithType)(_In_ IInspectable* pDataType, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplateKey** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:
        _Check_return_ HRESULT CreateInstanceWithTypeImpl(_In_ IInspectable* pDataType, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplateKey** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
