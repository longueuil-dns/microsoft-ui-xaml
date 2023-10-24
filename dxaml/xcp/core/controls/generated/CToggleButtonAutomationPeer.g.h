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

#include "CButtonBaseAutomationPeer.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CToggleButtonAutomationPeer : public CButtonBaseAutomationPeer
{
protected:
    CToggleButtonAutomationPeer(_In_ CCoreServices *pCore, _In_ CValue &value)
        : CButtonBaseAutomationPeer(pCore, value)
    {
        SetIsCustomType();
    }

    ~CToggleButtonAutomationPeer() override = default;

public:
    DECLARE_CREATE_AP(CToggleButtonAutomationPeer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::ToggleButtonAutomationPeer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
