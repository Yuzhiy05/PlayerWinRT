// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "Settings.g.h"

namespace winrt::Player::implementation
{
    struct Settings : SettingsT<Settings>
    {
        Settings();
        void Color_Changed(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const&);
    };
}

namespace winrt::Player::factory_implementation
{
    struct Settings : SettingsT<Settings, implementation::Settings>
    {
    };
}