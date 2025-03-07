const C = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qbytearraymatcher.html
pub const qbytearraymatcher = struct {
    /// New constructs a new QByteArrayMatcher object.
    ///
    ///
    pub fn New() ?*C.QByteArrayMatcher {
        return C.QByteArrayMatcher_new();
    }

    /// New2 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []u8 ```
    pub fn New2(pattern: []u8) ?*C.QByteArrayMatcher {
        const pattern_str = C.struct_libqt_string{
            .len = pattern.len,
            .data = @constCast(pattern.ptr),
        };

        return C.QByteArrayMatcher_new2(pattern_str);
    }

    /// New3 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8 ```
    pub fn New3(pattern: []const u8) ?*C.QByteArrayMatcher {
        return C.QByteArrayMatcher_new3(@ptrCast(@constCast(&pattern)));
    }

    /// New4 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8 ```
    pub fn New4(pattern: []const u8) ?*C.QByteArrayMatcher {
        const pattern_Cstring = @constCast(pattern.ptr);

        return C.QByteArrayMatcher_new4(pattern_Cstring);
    }

    /// New5 constructs a new QByteArrayMatcher object.
    ///
    /// ``` other: ?*C.QByteArrayMatcher ```
    pub fn New5(other: ?*anyopaque) ?*C.QByteArrayMatcher {
        return C.QByteArrayMatcher_new5(@ptrCast(other));
    }

    /// New6 constructs a new QByteArrayMatcher object.
    ///
    /// ``` pattern: []const u8, length: i64 ```
    pub fn New6(pattern: []const u8, length: i64) ?*C.QByteArrayMatcher {
        const pattern_Cstring = @constCast(pattern.ptr);

        return C.QByteArrayMatcher_new6(pattern_Cstring, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator=)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, other: ?*C.QByteArrayMatcher ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QByteArrayMatcher_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, pattern: []u8 ```
    pub fn SetPattern(self: ?*anyopaque, pattern: []u8) void {
        const pattern_str = C.struct_libqt_string{
            .len = pattern.len,
            .data = @constCast(pattern.ptr),
        };
        C.QByteArrayMatcher_SetPattern(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, str: []const u8, lenVal: i64 ```
    pub fn IndexIn(self: ?*anyopaque, str: []const u8, lenVal: i64) i64 {
        const str_Cstring = @constCast(str.ptr);
        return C.QByteArrayMatcher_IndexIn(@ptrCast(self), str_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, data: []const u8 ```
    pub fn IndexInWithData(self: ?*anyopaque, data: []const u8) i64 {
        return C.QByteArrayMatcher_IndexInWithData(@ptrCast(self), @ptrCast(@constCast(&data)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, allocator: std.mem.Allocator ```
    pub fn Pattern(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QByteArrayMatcher_Pattern(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, str: []const u8, lenVal: i64, from: i64 ```
    pub fn IndexIn3(self: ?*anyopaque, str: []const u8, lenVal: i64, from: i64) i64 {
        const str_Cstring = @constCast(str.ptr);
        return C.QByteArrayMatcher_IndexIn3(@ptrCast(self), str_Cstring, @intCast(lenVal), @intCast(from));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
    ///
    /// ``` self: ?*C.QByteArrayMatcher, data: []const u8, from: i64 ```
    pub fn IndexIn2(self: ?*anyopaque, data: []const u8, from: i64) i64 {
        return C.QByteArrayMatcher_IndexIn2(@ptrCast(self), @ptrCast(@constCast(&data)), @intCast(from));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QByteArrayMatcher ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QByteArrayMatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html
pub const qstaticbytearraymatcherbase = struct {
    /// New constructs a new QStaticByteArrayMatcherBase object.
    ///
    /// ``` other: ?*C.QStaticByteArrayMatcherBase ```
    pub fn New(other: ?*anyopaque) ?*C.QStaticByteArrayMatcherBase {
        return C.QStaticByteArrayMatcherBase_new(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QStaticByteArrayMatcherBase, other: ?*QStaticByteArrayMatcherBase ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QStaticByteArrayMatcherBase_CopyAssign(@ptrCast(self), @ptrCast(other));
    }
};
