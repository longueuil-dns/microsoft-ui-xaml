﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using Microsoft.UI.Xaml.Tests.MUXControls.InteractionTests.Infra;
using Common;

using WEX.TestExecution;
using WEX.TestExecution.Markup;
using WEX.Logging.Interop;

namespace MUXExperimental.Test
{
    // This is marked as a test class to make sure our AssemblyInitialize and AssemblyCleanup
    // fixtures get executed.  It won't actually host any tests.
    [TestClass]
    public class MUXExperimentalTestEnvironment
    {
        [AssemblyInitialize]
        [TestProperty("CoreClrProfile", ".netcoreapp3.1")]
        [TestProperty("RunFixtureAs:Assembly", "ElevatedUserOrSystem")]
        [TestProperty("HelixWorkItemCreation", "CreateWorkItemPerTestClass")]
        public static void AssemblyInitialize(TestContext testContext)
        {
            TestEnvironment.AssemblyInitialize(testContext, TestApplicationInfo.MUXExperimentalTestApp.TestAppPackageName + ".cer");
        }
    }
}
