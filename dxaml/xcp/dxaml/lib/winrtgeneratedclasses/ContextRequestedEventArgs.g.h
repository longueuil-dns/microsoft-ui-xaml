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

#include "RoutedEventArgs.g.h"
#include "UIElement.g.h"

#define __ContextRequestedEventArgs_GUID "10e7cd16-a374-47f3-b117-4f88bb6569ec"

namespace DirectUI
{
    class ContextRequestedEventArgs;

    class __declspec(novtable) __declspec(uuid(__ContextRequestedEventArgs_GUID)) ContextRequestedEventArgs :
        public ABI::Microsoft::UI::Xaml::Input::IContextRequestedEventArgs,
        public DirectUI::RoutedEventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Input.ContextRequestedEventArgs");

        BEGIN_INTERFACE_MAP(ContextRequestedEventArgs, DirectUI::RoutedEventArgs)
            INTERFACE_ENTRY(ContextRequestedEventArgs, ABI::Microsoft::UI::Xaml::Input::IContextRequestedEventArgs)
        END_INTERFACE_MAP(ContextRequestedEventArgs, DirectUI::RoutedEventArgs)

    public:
        ContextRequestedEventArgs();
        ~ContextRequestedEventArgs() override;

        // Properties.
        IFACEMETHOD(get_Handled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_Handled)(_In_ BOOLEAN value) override;

        // Methods.
        IFACEMETHOD(TryGetPosition)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pRelativeTo, _Out_ ABI::Windows::Foundation::Point* pPoint, _Out_ BOOLEAN* pReturnValue) override;

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        CEventArgs* CreateCorePeer() override;

    private:
        // Customized properties.

        // Customized methods.
         _Check_return_ HRESULT TryGetPositionImpl(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pRelativeTo, _Out_ ABI::Windows::Foundation::Point* pPoint, _Out_ BOOLEAN* pReturnValue); 

        // Fields.
    };
}


