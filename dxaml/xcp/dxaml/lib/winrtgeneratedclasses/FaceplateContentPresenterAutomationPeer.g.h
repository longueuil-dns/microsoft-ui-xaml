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

#include "FrameworkElementAutomationPeer.g.h"

#define __FaceplateContentPresenterAutomationPeer_GUID "ba2a8a84-c38a-4b8d-85f5-1f8fec968668"

namespace DirectUI
{
    class FaceplateContentPresenterAutomationPeer;

    class __declspec(novtable) FaceplateContentPresenterAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
    {
        friend class DirectUI::FaceplateContentPresenterAutomationPeer;



    public:
        FaceplateContentPresenterAutomationPeerGenerated();
        ~FaceplateContentPresenterAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FaceplateContentPresenterAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FaceplateContentPresenterAutomationPeer;
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

#include "FaceplateContentPresenterAutomationPeer_Partial.h"

