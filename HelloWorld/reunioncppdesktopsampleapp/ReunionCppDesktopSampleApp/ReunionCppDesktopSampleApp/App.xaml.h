﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "App.xaml.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
    };
}
