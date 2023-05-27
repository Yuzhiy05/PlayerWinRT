#pragma once

#include "App.xaml.g.h"

namespace winrt::Player::implementation
{
    struct App : AppT<App>
    {
        App();
        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
    private:
        // lazy initialization, use nullptr constructor
        // and initialize at other time
        // or use default constructor or other constructor
        Microsoft::UI::Xaml::Window window_{ nullptr };
        // use for disable multi-instance, keep A-Za-z, and no '\'
        std::wstring_view appname_{L"PlayerWinRT"};

        void AppWindow_Changed(Microsoft::UI::Windowing::AppWindow, Microsoft::UI::Windowing::AppWindowChangedEventArgs const&);
        void AppTitleBar_Loaded(winrt::Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&);
        void AppTitleBar_SizeChanged(winrt::Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::SizeChangedEventArgs const&);
        void SetDragRegionForCustomTitleBar();

        static void SetTitleBarTheme(Microsoft::UI::Windowing::AppWindowTitleBar& titlebar, Microsoft::UI::Xaml::ElementTheme theme);
    };
}
