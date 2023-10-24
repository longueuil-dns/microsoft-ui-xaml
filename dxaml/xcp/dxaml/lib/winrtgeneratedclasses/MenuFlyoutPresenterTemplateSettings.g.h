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


#define __MenuFlyoutPresenterTemplateSettings_GUID "d8af2956-b38f-4a75-b4c1-c6aa4e837c08"

namespace DirectUI
{
    class MenuFlyoutPresenterTemplateSettings;

    class __declspec(novtable) __declspec(uuid(__MenuFlyoutPresenterTemplateSettings_GUID)) MenuFlyoutPresenterTemplateSettings:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings");

        BEGIN_INTERFACE_MAP(MenuFlyoutPresenterTemplateSettings, DirectUI::DependencyObject)
            INTERFACE_ENTRY(MenuFlyoutPresenterTemplateSettings, ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings)
        END_INTERFACE_MAP(MenuFlyoutPresenterTemplateSettings, DirectUI::DependencyObject)

    public:
        MenuFlyoutPresenterTemplateSettings();
        ~MenuFlyoutPresenterTemplateSettings() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MenuFlyoutPresenterTemplateSettings;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::MenuFlyoutPresenterTemplateSettings;
        }

        // Properties.
        IFACEMETHOD(get_FlyoutContentMinWidth)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_FlyoutContentMinWidth(_In_ DOUBLE value);

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
    class __declspec(novtable) MenuFlyoutPresenterTemplateSettingsFactory:
       public ctl::AbstractActivationFactory
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
            return KnownTypeIndex::MenuFlyoutPresenterTemplateSettings;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
