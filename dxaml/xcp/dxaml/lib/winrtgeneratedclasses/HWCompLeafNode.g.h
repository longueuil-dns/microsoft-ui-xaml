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

#include "HWCompNode.g.h"

#define __HWCompLeafNode_GUID "1967dde2-93a4-4298-a55c-ef6e562e8391"

namespace DirectUI
{
    class HWCompLeafNode;

    class __declspec(novtable) __declspec(uuid(__HWCompLeafNode_GUID)) HWCompLeafNode:
        public DirectUI::HWCompNode
    {



    public:
        HWCompLeafNode();
        ~HWCompLeafNode() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HWCompLeafNode;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HWCompLeafNode;
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


