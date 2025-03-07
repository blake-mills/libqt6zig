const C = @import("qt6c");

/// https://doc.qt.io/qt-6/qpaintdevice.html
pub const qpaintdevice = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QPaintDevice_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return C.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPaintDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPaintDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpaintdevice.html#types
pub const enums = struct {
    pub const PaintDeviceMetric = enum {
        pub const PdmWidth: i32 = 1;
        pub const PdmHeight: i32 = 2;
        pub const PdmWidthMM: i32 = 3;
        pub const PdmHeightMM: i32 = 4;
        pub const PdmNumColors: i32 = 5;
        pub const PdmDepth: i32 = 6;
        pub const PdmDpiX: i32 = 7;
        pub const PdmDpiY: i32 = 8;
        pub const PdmPhysicalDpiX: i32 = 9;
        pub const PdmPhysicalDpiY: i32 = 10;
        pub const PdmDevicePixelRatio: i32 = 11;
        pub const PdmDevicePixelRatioScaled: i32 = 12;
    };
};
