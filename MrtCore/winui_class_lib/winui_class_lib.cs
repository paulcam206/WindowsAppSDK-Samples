﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.ApplicationModel.Resources;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace SampleLibrary
{
    public class SampleType
    {
        public string GetDefaultSampleString()
        {
            var resourceLoader = new ResourceLoader();
            return resourceLoader.GetString("SampleString");
        }
    }
}
