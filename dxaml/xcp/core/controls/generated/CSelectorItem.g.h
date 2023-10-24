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

#include "ContentControl.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CSelectorItem : public CContentControl
{
protected:
    CSelectorItem(_In_ CCoreServices *pCore)
        : CContentControl(pCore), m_isSelected()
    {
        InitializeDefaults();
        SetIsCustomType();
    }

    ~CSelectorItem() override = default;

public:
    DECLARE_CREATE(CSelectorItem);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::SelectorItem;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
    bool m_isSelected;
private:
    void InitializeDefaults();
};
