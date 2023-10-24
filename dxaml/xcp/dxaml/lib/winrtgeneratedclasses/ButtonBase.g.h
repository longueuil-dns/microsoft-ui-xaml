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

#include "ContentControl.g.h"

#define __ButtonBase_GUID "12abc41a-bba3-4a29-96a7-1be5ef3ff7a7"

namespace DirectUI
{
    class ButtonBase;

    class __declspec(novtable) ButtonBaseGenerated:
        public DirectUI::ContentControl
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase
    {
        friend class DirectUI::ButtonBase;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.ButtonBase");

        BEGIN_INTERFACE_MAP(ButtonBaseGenerated, DirectUI::ContentControl)
            INTERFACE_ENTRY(ButtonBaseGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase)
        END_INTERFACE_MAP(ButtonBaseGenerated, DirectUI::ContentControl)

    public:
        ButtonBaseGenerated();
        ~ButtonBaseGenerated() override;

        // Event source typedefs.
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IRoutedEventArgs> ClickEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ButtonBase;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ButtonBase;
        }

        // Properties.
        IFACEMETHOD(get_ClickMode)(_Out_ ABI::Microsoft::UI::Xaml::Controls::ClickMode* pValue) override;
        IFACEMETHOD(put_ClickMode)(_In_ ABI::Microsoft::UI::Xaml::Controls::ClickMode value) override;
        IFACEMETHOD(get_Command)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::ICommand** ppValue) override;
        IFACEMETHOD(put_Command)(_In_opt_ ABI::Microsoft::UI::Xaml::Input::ICommand* pValue) override;
        IFACEMETHOD(get_CommandParameter)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_CommandParameter)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_IsPointerOver)(_Out_ BOOLEAN* pValue) override;
        _Check_return_ HRESULT put_IsPointerOver(_In_ BOOLEAN value);
        IFACEMETHOD(get_IsPressed)(_Out_ BOOLEAN* pValue) override;
        _Check_return_ HRESULT put_IsPressed(_In_ BOOLEAN value);

        // Events.
        _Check_return_ HRESULT GetClickEventSourceNoRef(_Outptr_ ClickEventSourceType** ppEventSource);
        IFACEMETHOD(add_Click)(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Click)(_In_ EventRegistrationToken token) override;

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "ButtonBase_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ButtonBaseFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBaseFactory
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBaseStatics
    {
        BEGIN_INTERFACE_MAP(ButtonBaseFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(ButtonBaseFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBaseFactory)
            INTERFACE_ENTRY(ButtonBaseFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBaseStatics)
        END_INTERFACE_MAP(ButtonBaseFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ClickModeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsPointerOverProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsPressedProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CommandProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CommandParameterProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ButtonBase;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
