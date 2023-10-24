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

#include "DynamicTimeline.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CFadeInThemeAnimation : public CDynamicTimeline
{
protected:
    CFadeInThemeAnimation(_In_ CCoreServices *pCore)
        : CDynamicTimeline(pCore), m_targetName()
    {
        InitializeDefaults();
        SetIsCustomType();
    }

    ~CFadeInThemeAnimation() override = default;

public:
    DECLARE_CREATE(CFadeInThemeAnimation);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::FadeInThemeAnimation;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
    xstring_ptr m_targetName;
private:
    void InitializeDefaults();
};
