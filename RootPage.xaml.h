// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "RootPage.g.h"

#include <winrt/Windows.Foundation.h>

namespace winrt::Player::implementation
{
    struct RootPage : RootPageT<RootPage>
    {
        RootPage();
        winrt::hstring AppTitleText();
        void AppTitleText(winrt::hstring const&);
        Windows::Foundation::IAsyncAction Navigation_ItemInvoked(Microsoft::UI::Xaml::Controls::NavigationView, Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs);
        void Navigation_Loaded(IInspectable const& , Microsoft::UI::Xaml::RoutedEventArgs const&);
        Microsoft::UI::Xaml::Controls::Frame GetRootFrame();
        Windows::Foundation::IAsyncAction MusicInfo_Click(IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&);
    };
}

namespace winrt::Player::factory_implementation
{
    struct RootPage : RootPageT<RootPage, implementation::RootPage>
    {
    };
}
