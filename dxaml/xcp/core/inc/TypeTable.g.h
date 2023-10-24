// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML metadata.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "TypeTableStructsPrivate.h"
#include "Indexes.g.h"

// Namespaces.
extern const MetaDataNamespace c_aNamespaces[KnownNamespaceCount];

// Basic type info.
extern const MetaDataType c_aTypes[KnownTypeCount];

// Type activation information.
extern const MetaDataTypeActivation c_aTypeActivations[KnownTypeCount];

// Type name information.
extern const MetaDataTypeNameInfo c_aTypeNameInfos[KnownTypeCount];

// Type property information.
extern const MetaDataTypeProperties c_aTypeProperties[KnownTypeCount];

// Type UUID information.
extern const IID c_aTypeUUIDs[KnownTypeCount];

// Types that can be referenced from XAML.
extern const MetaDataTypeName c_aTypeNames[939];

// Properties.
extern const MetaDataProperty c_aProperties[KnownPropertyCount];

// Property iteration.
extern const KnownPropertyIndex c_aNextProperty[KnownPropertyCount];

// Property slots.
extern const UINT8 c_aPropertySlot[KnownPropertyCount];

// Property names.
extern const xstring_ptr_storage c_aPropertyNames[KnownPropertyCount];

// Property field offsets/callbacks.
extern const MetaDataDependencyPropertyRuntimeData c_aDependencyPropertyRuntimeData[KnownDependencyPropertyCount];

// Object properties.
// Filtered list of dependency object or CValue object backed storage that should be walked on a type.
extern const MetaDataObjectProperty c_aObjectProperties[221];

// Render properties.
// Filtered list of visual tree properties that have dependency object backed storage and that should be walked during render.
extern const MetaDataObjectProperty c_aRenderProperties[209];

// Enter/Leave properties.
// Filtered list of dependency object backed storage or InvokeImpl properties that should be walked on a type.
extern const MetaDataEnterProperty c_aEnterProperties[222];

// Maps a type name length to an index into c_aTypeNames and a count of the number of elements to scan in that array.
UINT MapTypeNameLengthToSearchRange(_In_ UINT nLength, _Out_ UINT* pnEndIndex);

// Returns the enum value array which can be used to do enum<->string conversions.
_Check_return_ HRESULT GetEnumValueTable(_In_ KnownTypeIndex nTypeIndex, _Out_ UINT* pnCount, _Outptr_result_buffer_(*pnCount) const XTABLE* ppTable[]);
