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

#include "AutomationPeer.g.h"

#define __HyperlinkAutomationPeer_GUID "cd7d8887-bf19-4f3d-914e-5beb4c2cc52e"

namespace DirectUI
{
    class HyperlinkAutomationPeer;

    class __declspec(novtable) HyperlinkAutomationPeerGenerated:
        public DirectUI::AutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::HyperlinkAutomationPeer;


        BEGIN_INTERFACE_MAP(HyperlinkAutomationPeerGenerated, DirectUI::AutomationPeer)
            INTERFACE_ENTRY(HyperlinkAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(HyperlinkAutomationPeerGenerated, DirectUI::AutomationPeer)

    public:
        HyperlinkAutomationPeerGenerated();
        ~HyperlinkAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HyperlinkAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HyperlinkAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Invoke)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "HyperlinkAutomationPeer_Partial.h"

