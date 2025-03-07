const C = @import("qt6c");
const qwebenginesettings_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebenginesettings.html
pub const qwebenginesettings = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
    ///
    /// ``` self: ?*C.QWebEngineSettings, which: qwebenginesettings_enums.FontFamily, family: []const u8 ```
    pub fn SetFontFamily(self: ?*anyopaque, which: i64, family: []const u8) void {
        const family_str = C.struct_libqt_string{
            .len = family.len,
            .data = @constCast(family.ptr),
        };
        C.QWebEngineSettings_SetFontFamily(@ptrCast(self), @intCast(which), family_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
    ///
    /// ``` self: ?*C.QWebEngineSettings, which: qwebenginesettings_enums.FontFamily, allocator: std.mem.Allocator ```
    pub fn FontFamily(self: ?*anyopaque, which: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineSettings_FontFamily(@ptrCast(self), @intCast(which));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
    ///
    /// ``` self: ?*C.QWebEngineSettings, which: qwebenginesettings_enums.FontFamily ```
    pub fn ResetFontFamily(self: ?*anyopaque, which: i64) void {
        C.QWebEngineSettings_ResetFontFamily(@ptrCast(self), @intCast(which));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
    ///
    /// ``` self: ?*C.QWebEngineSettings, typeVal: qwebenginesettings_enums.FontSize, size: i32 ```
    pub fn SetFontSize(self: ?*anyopaque, typeVal: i64, size: i32) void {
        C.QWebEngineSettings_SetFontSize(@ptrCast(self), @intCast(typeVal), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
    ///
    /// ``` self: ?*C.QWebEngineSettings, typeVal: qwebenginesettings_enums.FontSize ```
    pub fn FontSize(self: ?*anyopaque, typeVal: i64) i32 {
        return C.QWebEngineSettings_FontSize(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
    ///
    /// ``` self: ?*C.QWebEngineSettings, typeVal: qwebenginesettings_enums.FontSize ```
    pub fn ResetFontSize(self: ?*anyopaque, typeVal: i64) void {
        C.QWebEngineSettings_ResetFontSize(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
    ///
    /// ``` self: ?*C.QWebEngineSettings, attr: qwebenginesettings_enums.WebAttribute, on: bool ```
    pub fn SetAttribute(self: ?*anyopaque, attr: i64, on: bool) void {
        C.QWebEngineSettings_SetAttribute(@ptrCast(self), @intCast(attr), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
    ///
    /// ``` self: ?*C.QWebEngineSettings, attr: qwebenginesettings_enums.WebAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, attr: i64) bool {
        return C.QWebEngineSettings_TestAttribute(@ptrCast(self), @intCast(attr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
    ///
    /// ``` self: ?*C.QWebEngineSettings, attr: qwebenginesettings_enums.WebAttribute ```
    pub fn ResetAttribute(self: ?*anyopaque, attr: i64) void {
        C.QWebEngineSettings_ResetAttribute(@ptrCast(self), @intCast(attr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
    ///
    /// ``` self: ?*C.QWebEngineSettings, encoding: []const u8 ```
    pub fn SetDefaultTextEncoding(self: ?*anyopaque, encoding: []const u8) void {
        const encoding_str = C.struct_libqt_string{
            .len = encoding.len,
            .data = @constCast(encoding.ptr),
        };
        C.QWebEngineSettings_SetDefaultTextEncoding(@ptrCast(self), encoding_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
    ///
    /// ``` self: ?*C.QWebEngineSettings, allocator: std.mem.Allocator ```
    pub fn DefaultTextEncoding(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineSettings_DefaultTextEncoding(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
    ///
    /// ``` self: ?*C.QWebEngineSettings ```
    pub fn UnknownUrlSchemePolicy(self: ?*anyopaque) i64 {
        return C.QWebEngineSettings_UnknownUrlSchemePolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
    ///
    /// ``` self: ?*C.QWebEngineSettings, policy: qwebenginesettings_enums.UnknownUrlSchemePolicy ```
    pub fn SetUnknownUrlSchemePolicy(self: ?*anyopaque, policy: i64) void {
        C.QWebEngineSettings_SetUnknownUrlSchemePolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
    ///
    /// ``` self: ?*C.QWebEngineSettings ```
    pub fn ResetUnknownUrlSchemePolicy(self: ?*anyopaque) void {
        C.QWebEngineSettings_ResetUnknownUrlSchemePolicy(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QWebEngineSettings ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QWebEngineSettings_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginesettings.html#types
pub const enums = struct {
    pub const FontFamily = enum {
        pub const StandardFont: i32 = 0;
        pub const FixedFont: i32 = 1;
        pub const SerifFont: i32 = 2;
        pub const SansSerifFont: i32 = 3;
        pub const CursiveFont: i32 = 4;
        pub const FantasyFont: i32 = 5;
        pub const PictographFont: i32 = 6;
    };

    pub const WebAttribute = enum {
        pub const AutoLoadImages: i32 = 0;
        pub const JavascriptEnabled: i32 = 1;
        pub const JavascriptCanOpenWindows: i32 = 2;
        pub const JavascriptCanAccessClipboard: i32 = 3;
        pub const LinksIncludedInFocusChain: i32 = 4;
        pub const LocalStorageEnabled: i32 = 5;
        pub const LocalContentCanAccessRemoteUrls: i32 = 6;
        pub const XSSAuditingEnabled: i32 = 7;
        pub const SpatialNavigationEnabled: i32 = 8;
        pub const LocalContentCanAccessFileUrls: i32 = 9;
        pub const HyperlinkAuditingEnabled: i32 = 10;
        pub const ScrollAnimatorEnabled: i32 = 11;
        pub const ErrorPageEnabled: i32 = 12;
        pub const PluginsEnabled: i32 = 13;
        pub const FullScreenSupportEnabled: i32 = 14;
        pub const ScreenCaptureEnabled: i32 = 15;
        pub const WebGLEnabled: i32 = 16;
        pub const Accelerated2dCanvasEnabled: i32 = 17;
        pub const AutoLoadIconsForPage: i32 = 18;
        pub const TouchIconsEnabled: i32 = 19;
        pub const FocusOnNavigationEnabled: i32 = 20;
        pub const PrintElementBackgrounds: i32 = 21;
        pub const AllowRunningInsecureContent: i32 = 22;
        pub const AllowGeolocationOnInsecureOrigins: i32 = 23;
        pub const AllowWindowActivationFromJavaScript: i32 = 24;
        pub const ShowScrollBars: i32 = 25;
        pub const PlaybackRequiresUserGesture: i32 = 26;
        pub const WebRTCPublicInterfacesOnly: i32 = 27;
        pub const JavascriptCanPaste: i32 = 28;
        pub const DnsPrefetchEnabled: i32 = 29;
        pub const PdfViewerEnabled: i32 = 30;
        pub const NavigateOnDropEnabled: i32 = 31;
    };

    pub const FontSize = enum {
        pub const MinimumFontSize: i32 = 0;
        pub const MinimumLogicalFontSize: i32 = 1;
        pub const DefaultFontSize: i32 = 2;
        pub const DefaultFixedFontSize: i32 = 3;
    };

    pub const UnknownUrlSchemePolicy = enum {
        pub const InheritedUnknownUrlSchemePolicy: i32 = 0;
        pub const DisallowUnknownUrlSchemes: i32 = 1;
        pub const AllowUnknownUrlSchemesFromUserInteraction: i32 = 2;
        pub const AllowAllUnknownUrlSchemes: i32 = 3;
    };
};
