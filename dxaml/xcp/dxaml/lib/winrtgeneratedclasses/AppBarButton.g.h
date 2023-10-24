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

#include "Button.g.h"

#define __AppBarButton_GUID "bb9dc4e8-e180-4474-bc99-027996196f5f"

namespace DirectUI
{
    class AppBarButton;
    class AppBarButtonTemplateSettings;
    class IconElement;

    class __declspec(novtable) AppBarButtonGenerated:
        public DirectUI::Button
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarButton
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarLabeledElement
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement
        , public ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner
    {
        friend class DirectUI::AppBarButton;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.AppBarButton");

        BEGIN_INTERFACE_MAP(AppBarButtonGenerated, DirectUI::Button)
            INTERFACE_ENTRY(AppBarButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::IAppBarButton)
            INTERFACE_ENTRY(AppBarButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement)
            INTERFACE_ENTRY(AppBarButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarLabeledElement)
            INTERFACE_ENTRY(AppBarButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement)
            INTERFACE_ENTRY(AppBarButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner)
        END_INTERFACE_MAP(AppBarButtonGenerated, DirectUI::Button)

    public:
        AppBarButtonGenerated();
        ~AppBarButtonGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarButton;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarButton;
        }

        // Properties.
        IFACEMETHOD(get_DynamicOverflowOrder)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DynamicOverflowOrder)(_In_ INT value) override;
        IFACEMETHOD(get_Icon)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppValue) override;
        IFACEMETHOD(put_Icon)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IIconElement* pValue) override;
        IFACEMETHOD(get_IsCompact)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsCompact)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsInOverflow)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_IsSubMenuOpen)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_IsSubMenuPositionedAbsolutely)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_KeyboardAcceleratorTextOverride)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_KeyboardAcceleratorTextOverride)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_Label)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_Label)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_LabelPosition)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CommandBarLabelPosition* pValue) override;
        IFACEMETHOD(put_LabelPosition)(_In_ ABI::Microsoft::UI::Xaml::Controls::CommandBarLabelPosition value) override;
        IFACEMETHOD(get_ParentOwner)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner** ppValue) override;
        IFACEMETHOD(put_ParentOwner)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner* pValue) override;
        IFACEMETHOD(get_TemplateSettings)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings** ppValue) override;
        _Check_return_ HRESULT put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings* pValue);
        IFACEMETHOD(get_UseOverflowStyle)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_UseOverflowStyle)(_In_ BOOLEAN value) override;

        // Events.

        // Methods.
        IFACEMETHOD(CancelCloseSubMenu)() override;
        IFACEMETHOD(ClosePeerSubMenus)() override;
        IFACEMETHOD(CloseSubMenu)() override;
        IFACEMETHOD(CloseSubMenuTree)() override;
        IFACEMETHOD(DelayCloseSubMenu)() override;
        IFACEMETHOD(GetHasBottomLabel)(_Out_ BOOLEAN* pResult) override;
        IFACEMETHOD(OpenSubMenu)(_In_ ABI::Windows::Foundation::Point position) override;
        IFACEMETHOD(PositionSubMenu)(_In_ ABI::Windows::Foundation::Point position) override;
        IFACEMETHOD(PrepareSubMenu)() override;
        IFACEMETHOD(RaiseAutomationPeerExpandCollapse)(_In_ BOOLEAN isOpen) override;
        IFACEMETHOD(SetDefaultLabelPosition)(_In_ ABI::Microsoft::UI::Xaml::Controls::CommandBarDefaultLabelPosition defaultLabelPosition) override;
        IFACEMETHOD(SetSubMenuDirection)(_In_ BOOLEAN isSubMenuDirectionUp) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "AppBarButton_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) AppBarButtonFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarButtonFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarButtonStatics
    {
        BEGIN_INTERFACE_MAP(AppBarButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(AppBarButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarButtonFactory)
            INTERFACE_ENTRY(AppBarButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarButtonStatics)
        END_INTERFACE_MAP(AppBarButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IAppBarButton** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_LabelProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IconProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LabelPositionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_KeyboardAcceleratorTextOverrideProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_IsCompactProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsInOverflowProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DynamicOverflowOrderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarButton;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
