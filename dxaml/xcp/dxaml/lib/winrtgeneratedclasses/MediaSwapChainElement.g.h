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

#include "UIElement.g.h"

#define __MediaSwapChainElement_GUID "46079c92-298b-4bcd-89e8-156b87b893ae"

namespace DirectUI
{
    class MediaSwapChainElement;

    class __declspec(novtable) __declspec(uuid(__MediaSwapChainElement_GUID)) MediaSwapChainElement:
        public DirectUI::UIElement
    {



    public:
        MediaSwapChainElement();
        ~MediaSwapChainElement() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MediaSwapChainElement;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::MediaSwapChainElement;
        }

        // Properties.

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


