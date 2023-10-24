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


#define __CurrentChangingEventArgs_GUID "fd920d83-5697-4be3-b802-b49a78005ed1"

namespace DirectUI
{
    class CurrentChangingEventArgs;

    class __declspec(novtable) CurrentChangingEventArgsGenerated :
        public ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgs,
        public DirectUI::EventArgs
    {
        friend class DirectUI::CurrentChangingEventArgs;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Data.CurrentChangingEventArgs");

        BEGIN_INTERFACE_MAP(CurrentChangingEventArgsGenerated, DirectUI::EventArgs)
            INTERFACE_ENTRY(CurrentChangingEventArgsGenerated, ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgs)
        END_INTERFACE_MAP(CurrentChangingEventArgsGenerated, DirectUI::EventArgs)

    public:
        CurrentChangingEventArgsGenerated();
        ~CurrentChangingEventArgsGenerated() override;

        // Properties.
        IFACEMETHOD(get_Cancel)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_Cancel)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsCancelable)(_Out_ BOOLEAN* pValue) override;

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "CurrentChangingEventArgs_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) CurrentChangingEventArgsFactory:
       public ctl::AggregableActivationFactory<DirectUI::CurrentChangingEventArgs>
        , public ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgsFactory
    {
        BEGIN_INTERFACE_MAP(CurrentChangingEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::CurrentChangingEventArgs>)
            INTERFACE_ENTRY(CurrentChangingEventArgsFactory, ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgsFactory)
        END_INTERFACE_MAP(CurrentChangingEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::CurrentChangingEventArgs>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgs** ppInstance);
        IFACEMETHOD(CreateWithCancelableParameter)(_In_ BOOLEAN isCancelable, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgs** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:
        _Check_return_ HRESULT CreateWithCancelableParameterImpl(_In_ BOOLEAN isCancelable, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Data::ICurrentChangingEventArgs** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
