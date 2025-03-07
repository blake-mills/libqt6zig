const C = @import("qt6c");
const qbrush_enums = @import("libqbrush.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpainter_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpainter.html
pub const qpainter = struct {
    /// New constructs a new QPainter object.
    ///
    ///
    pub fn New() ?*C.QPainter {
        return C.QPainter_new();
    }

    /// New2 constructs a new QPainter object.
    ///
    /// ``` param1: ?*C.QPaintDevice ```
    pub fn New2(param1: ?*anyopaque) ?*C.QPainter {
        return C.QPainter_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Device(self: ?*anyopaque) ?*C.QPaintDevice {
        return C.QPainter_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#begin)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QPaintDevice ```
    pub fn Begin(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QPainter_Begin(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn End(self: ?*anyopaque) bool {
        return C.QPainter_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QPainter_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
    ///
    /// ``` self: ?*C.QPainter, mode: qpainter_enums.CompositionMode ```
    pub fn SetCompositionMode(self: ?*anyopaque, mode: i64) void {
        C.QPainter_SetCompositionMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn CompositionMode(self: ?*anyopaque) i64 {
        return C.QPainter_CompositionMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QPainter_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
    ///
    /// ``` self: ?*C.QPainter, f: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        C.QPainter_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn FontMetrics(self: ?*anyopaque) ?*C.QFontMetrics {
        return C.QPainter_FontMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn FontInfo(self: ?*anyopaque) ?*C.QFontInfo {
        return C.QPainter_FontInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: ?*C.QPainter, color: ?*C.QColor ```
    pub fn SetPen(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QPainter_SetPen(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: ?*C.QPainter, pen: ?*C.QPen ```
    pub fn SetPenWithPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QPainter_SetPenWithPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
    ///
    /// ``` self: ?*C.QPainter, style: qnamespace_enums.PenStyle ```
    pub fn SetPenWithStyle(self: ?*anyopaque, style: i64) void {
        C.QPainter_SetPenWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Pen(self: ?*anyopaque) ?*C.QPen {
        return C.QPainter_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: ?*C.QPainter, brush: ?*C.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QPainter_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
    ///
    /// ``` self: ?*C.QPainter, style: qnamespace_enums.BrushStyle ```
    pub fn SetBrushWithStyle(self: ?*anyopaque, style: i64) void {
        C.QPainter_SetBrushWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Brush(self: ?*anyopaque) ?*C.QBrush {
        return C.QPainter_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
    ///
    /// ``` self: ?*C.QPainter, mode: qnamespace_enums.BGMode ```
    pub fn SetBackgroundMode(self: ?*anyopaque, mode: i64) void {
        C.QPainter_SetBackgroundMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn BackgroundMode(self: ?*anyopaque) i64 {
        return C.QPainter_BackgroundMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn BrushOrigin(self: ?*anyopaque) ?*C.QPoint {
        return C.QPainter_BrushOrigin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32 ```
    pub fn SetBrushOrigin(self: ?*anyopaque, x: i32, y: i32) void {
        C.QPainter_SetBrushOrigin(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: ?*C.QPainter, brushOrigin: ?*C.QPoint ```
    pub fn SetBrushOriginWithBrushOrigin(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        C.QPainter_SetBrushOriginWithBrushOrigin(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
    ///
    /// ``` self: ?*C.QPainter, brushOrigin: ?*C.QPointF ```
    pub fn SetBrushOrigin2(self: ?*anyopaque, brushOrigin: ?*anyopaque) void {
        C.QPainter_SetBrushOrigin2(@ptrCast(self), @ptrCast(brushOrigin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
    ///
    /// ``` self: ?*C.QPainter, bg: ?*C.QBrush ```
    pub fn SetBackground(self: ?*anyopaque, bg: ?*anyopaque) void {
        C.QPainter_SetBackground(@ptrCast(self), @ptrCast(bg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Background(self: ?*anyopaque) ?*C.QBrush {
        return C.QPainter_Background(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QPainter_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
    ///
    /// ``` self: ?*C.QPainter, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QPainter_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn ClipRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QPainter_ClipRegion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn ClipPath(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QPainter_ClipPath(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRectF ```
    pub fn SetClipRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QPainter_SetClipRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect ```
    pub fn SetClipRectWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QPainter_SetClipRectWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetClipRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QPainter_SetClipRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRegion ```
    pub fn SetClipRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QPainter_SetClipRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: ?*C.QPainter, path: ?*C.QPainterPath ```
    pub fn SetClipPath(self: ?*anyopaque, path: ?*anyopaque) void {
        C.QPainter_SetClipPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
    ///
    /// ``` self: ?*C.QPainter, enable: bool ```
    pub fn SetClipping(self: ?*anyopaque, enable: bool) void {
        C.QPainter_SetClipping(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn HasClipping(self: ?*anyopaque) bool {
        return C.QPainter_HasClipping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn ClipBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QPainter_ClipBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Save(self: ?*anyopaque) void {
        C.QPainter_Save(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Restore(self: ?*anyopaque) void {
        C.QPainter_Restore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: ?*C.QPainter, transform: ?*C.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        C.QPainter_SetTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Transform(self: ?*anyopaque) ?*C.QTransform {
        return C.QPainter_Transform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn DeviceTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QPainter_DeviceTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        C.QPainter_ResetTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: ?*C.QPainter, matrix: ?*C.QTransform ```
    pub fn SetWorldTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        C.QPainter_SetWorldTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn WorldTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QPainter_WorldTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn CombinedTransform(self: ?*anyopaque) ?*C.QTransform {
        return C.QPainter_CombinedTransform(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
    ///
    /// ``` self: ?*C.QPainter, enabled: bool ```
    pub fn SetWorldMatrixEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QPainter_SetWorldMatrixEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn WorldMatrixEnabled(self: ?*anyopaque) bool {
        return C.QPainter_WorldMatrixEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
    ///
    /// ``` self: ?*C.QPainter, sx: f64, sy: f64 ```
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) void {
        C.QPainter_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
    ///
    /// ``` self: ?*C.QPainter, sh: f64, sv: f64 ```
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) void {
        C.QPainter_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
    ///
    /// ``` self: ?*C.QPainter, a: f64 ```
    pub fn Rotate(self: ?*anyopaque, a: f64) void {
        C.QPainter_Rotate(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: ?*C.QPainter, offset: ?*C.QPointF ```
    pub fn Translate(self: ?*anyopaque, offset: ?*anyopaque) void {
        C.QPainter_Translate(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: ?*C.QPainter, offset: ?*C.QPoint ```
    pub fn TranslateWithOffset(self: ?*anyopaque, offset: ?*anyopaque) void {
        C.QPainter_TranslateWithOffset(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
    ///
    /// ``` self: ?*C.QPainter, dx: f64, dy: f64 ```
    pub fn Translate2(self: ?*anyopaque, dx: f64, dy: f64) void {
        C.QPainter_Translate2(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Window(self: ?*anyopaque) ?*C.QRect {
        return C.QPainter_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: ?*C.QPainter, window: ?*C.QRect ```
    pub fn SetWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        C.QPainter_SetWindow(@ptrCast(self), @ptrCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetWindow2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QPainter_SetWindow2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn Viewport(self: ?*anyopaque) ?*C.QRect {
        return C.QPainter_Viewport(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: ?*C.QPainter, viewport: ?*C.QRect ```
    pub fn SetViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        C.QPainter_SetViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetViewport2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QPainter_SetViewport2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
    ///
    /// ``` self: ?*C.QPainter, enable: bool ```
    pub fn SetViewTransformEnabled(self: ?*anyopaque, enable: bool) void {
        C.QPainter_SetViewTransformEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn ViewTransformEnabled(self: ?*anyopaque) bool {
        return C.QPainter_ViewTransformEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
    ///
    /// ``` self: ?*C.QPainter, path: ?*C.QPainterPath, pen: ?*C.QPen ```
    pub fn StrokePath(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) void {
        C.QPainter_StrokePath(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
    ///
    /// ``` self: ?*C.QPainter, path: ?*C.QPainterPath, brush: ?*C.QBrush ```
    pub fn FillPath(self: ?*anyopaque, path: ?*anyopaque, brush: ?*anyopaque) void {
        C.QPainter_FillPath(@ptrCast(self), @ptrCast(path), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
    ///
    /// ``` self: ?*C.QPainter, path: ?*C.QPainterPath ```
    pub fn DrawPath(self: ?*anyopaque, path: ?*anyopaque) void {
        C.QPainter_DrawPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: ?*C.QPainter, pt: ?*C.QPointF ```
    pub fn DrawPoint(self: ?*anyopaque, pt: ?*anyopaque) void {
        C.QPainter_DrawPoint(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint ```
    pub fn DrawPointWithQPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        C.QPainter_DrawPointWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32 ```
    pub fn DrawPoint2(self: ?*anyopaque, x: i32, y: i32) void {
        C.QPainter_DrawPoint2(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPointF, pointCount: i32 ```
    pub fn DrawPoints(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPoints(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPoint, pointCount: i32 ```
    pub fn DrawPoints2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPoints2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: ?*C.QPainter, line: ?*C.QLineF ```
    pub fn DrawLine(self: ?*anyopaque, line: ?*anyopaque) void {
        C.QPainter_DrawLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: ?*C.QPainter, line: ?*C.QLine ```
    pub fn DrawLineWithLine(self: ?*anyopaque, line: ?*anyopaque) void {
        C.QPainter_DrawLineWithLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: ?*C.QPainter, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn DrawLine2(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        C.QPainter_DrawLine2(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: ?*C.QPainter, p1: ?*C.QPoint, p2: ?*C.QPoint ```
    pub fn DrawLine3(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        C.QPainter_DrawLine3(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
    ///
    /// ``` self: ?*C.QPainter, p1: ?*C.QPointF, p2: ?*C.QPointF ```
    pub fn DrawLine4(self: ?*anyopaque, p1: ?*anyopaque, p2: ?*anyopaque) void {
        C.QPainter_DrawLine4(@ptrCast(self), @ptrCast(p1), @ptrCast(p2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, lines: ?*C.QLineF, lineCount: i32 ```
    pub fn DrawLines(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        C.QPainter_DrawLines(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, lines: []?*C.QLineF ```
    pub fn DrawLinesWithLines(self: ?*anyopaque, lines: []?*C.QLineF) void {
        const lines_list = C.struct_libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        C.QPainter_DrawLinesWithLines(@ptrCast(self), lines_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, pointPairs: ?*C.QPointF, lineCount: i32 ```
    pub fn DrawLines2(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        C.QPainter_DrawLines2(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, pointPairs: []?*C.QPointF ```
    pub fn DrawLinesWithPointPairs(self: ?*anyopaque, pointPairs: []?*C.QPointF) void {
        const pointPairs_list = C.struct_libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        C.QPainter_DrawLinesWithPointPairs(@ptrCast(self), pointPairs_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, lines: ?*C.QLine, lineCount: i32 ```
    pub fn DrawLines3(self: ?*anyopaque, lines: ?*anyopaque, lineCount: i32) void {
        C.QPainter_DrawLines3(@ptrCast(self), @ptrCast(lines), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, lines: []?*C.QLine ```
    pub fn DrawLines4(self: ?*anyopaque, lines: []?*C.QLine) void {
        const lines_list = C.struct_libqt_list{
            .len = lines.len,
            .data = @ptrCast(lines.ptr),
        };
        C.QPainter_DrawLines4(@ptrCast(self), lines_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, pointPairs: ?*C.QPoint, lineCount: i32 ```
    pub fn DrawLines5(self: ?*anyopaque, pointPairs: ?*anyopaque, lineCount: i32) void {
        C.QPainter_DrawLines5(@ptrCast(self), @ptrCast(pointPairs), @intCast(lineCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
    ///
    /// ``` self: ?*C.QPainter, pointPairs: []?*C.QPoint ```
    pub fn DrawLines6(self: ?*anyopaque, pointPairs: []?*C.QPoint) void {
        const pointPairs_list = C.struct_libqt_list{
            .len = pointPairs.len,
            .data = @ptrCast(pointPairs.ptr),
        };
        C.QPainter_DrawLines6(@ptrCast(self), pointPairs_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn DrawRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QPainter_DrawRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: ?*C.QPainter, x1: i32, y1: i32, w: i32, h: i32 ```
    pub fn DrawRect2(self: ?*anyopaque, x1: i32, y1: i32, w: i32, h: i32) void {
        C.QPainter_DrawRect2(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRect ```
    pub fn DrawRectWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QPainter_DrawRectWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: ?*C.QPainter, rects: ?*C.QRectF, rectCount: i32 ```
    pub fn DrawRects(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        C.QPainter_DrawRects(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: ?*C.QPainter, rectangles: []?*C.QRectF ```
    pub fn DrawRectsWithRectangles(self: ?*anyopaque, rectangles: []?*C.QRectF) void {
        const rectangles_list = C.struct_libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        C.QPainter_DrawRectsWithRectangles(@ptrCast(self), rectangles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: ?*C.QPainter, rects: ?*C.QRect, rectCount: i32 ```
    pub fn DrawRects2(self: ?*anyopaque, rects: ?*anyopaque, rectCount: i32) void {
        C.QPainter_DrawRects2(@ptrCast(self), @ptrCast(rects), @intCast(rectCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
    ///
    /// ``` self: ?*C.QPainter, rectangles: []?*C.QRect ```
    pub fn DrawRects3(self: ?*anyopaque, rectangles: []?*C.QRect) void {
        const rectangles_list = C.struct_libqt_list{
            .len = rectangles.len,
            .data = @ptrCast(rectangles.ptr),
        };
        C.QPainter_DrawRects3(@ptrCast(self), rectangles_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF ```
    pub fn DrawEllipse(self: ?*anyopaque, r: ?*anyopaque) void {
        C.QPainter_DrawEllipse(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect ```
    pub fn DrawEllipseWithQRect(self: ?*anyopaque, r: ?*anyopaque) void {
        C.QPainter_DrawEllipseWithQRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn DrawEllipse2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QPainter_DrawEllipse2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: ?*C.QPainter, center: ?*C.QPointF, rx: f64, ry: f64 ```
    pub fn DrawEllipse3(self: ?*anyopaque, center: ?*anyopaque, rx: f64, ry: f64) void {
        C.QPainter_DrawEllipse3(@ptrCast(self), @ptrCast(center), @floatCast(rx), @floatCast(ry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
    ///
    /// ``` self: ?*C.QPainter, center: ?*C.QPoint, rx: i32, ry: i32 ```
    pub fn DrawEllipse4(self: ?*anyopaque, center: ?*anyopaque, rx: i32, ry: i32) void {
        C.QPainter_DrawEllipse4(@ptrCast(self), @ptrCast(center), @intCast(rx), @intCast(ry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPointF, pointCount: i32 ```
    pub fn DrawPolyline(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPolyline(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPoint, pointCount: i32 ```
    pub fn DrawPolyline2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPolyline2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPointF, pointCount: i32 ```
    pub fn DrawPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPoint, pointCount: i32 ```
    pub fn DrawPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPointF, pointCount: i32 ```
    pub fn DrawConvexPolygon(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawConvexPolygon(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPoint, pointCount: i32 ```
    pub fn DrawConvexPolygon2(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32) void {
        C.QPainter_DrawConvexPolygon2(@ptrCast(self), @ptrCast(points), @intCast(pointCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, a: i32, alen: i32 ```
    pub fn DrawArc(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawArc(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, a: i32, alen: i32 ```
    pub fn DrawArc2(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawArc2(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawArc3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        C.QPainter_DrawArc3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, a: i32, alen: i32 ```
    pub fn DrawPie(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawPie(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawPie2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        C.QPainter_DrawPie2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, a: i32, alen: i32 ```
    pub fn DrawPie3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawPie3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, a: i32, alen: i32 ```
    pub fn DrawChord(self: ?*anyopaque, rect: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawChord(@ptrCast(self), @ptrCast(rect), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32 ```
    pub fn DrawChord2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, a: i32, alen: i32) void {
        C.QPainter_DrawChord2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, a: i32, alen: i32 ```
    pub fn DrawChord3(self: ?*anyopaque, param1: ?*anyopaque, a: i32, alen: i32) void {
        C.QPainter_DrawChord3(@ptrCast(self), @ptrCast(param1), @intCast(a), @intCast(alen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        C.QPainter_DrawRoundedRect(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64) void {
        C.QPainter_DrawRoundedRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRect, xRadius: f64, yRadius: f64 ```
    pub fn DrawRoundedRect3(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64) void {
        C.QPainter_DrawRoundedRect3(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, pm: ?*C.QPixmap ```
    pub fn DrawTiledPixmap(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque) void {
        C.QPainter_DrawTiledPixmap(@ptrCast(self), @ptrCast(rect), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, param5: ?*C.QPixmap ```
    pub fn DrawTiledPixmap2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        C.QPainter_DrawTiledPixmap2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, param2: ?*C.QPixmap ```
    pub fn DrawTiledPixmap3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QPainter_DrawTiledPixmap3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, picture: ?*C.QPicture ```
    pub fn DrawPicture(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        C.QPainter_DrawPicture(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, picture: ?*C.QPicture ```
    pub fn DrawPicture2(self: ?*anyopaque, x: i32, y: i32, picture: ?*anyopaque) void {
        C.QPainter_DrawPicture2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, picture: ?*C.QPicture ```
    pub fn DrawPicture3(self: ?*anyopaque, p: ?*anyopaque, picture: ?*anyopaque) void {
        C.QPainter_DrawPicture3(@ptrCast(self), @ptrCast(p), @ptrCast(picture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRectF, pixmap: ?*C.QPixmap, sourceRect: ?*C.QRectF ```
    pub fn DrawPixmap(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        C.QPainter_DrawPixmap(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRect, pixmap: ?*C.QPixmap, sourceRect: ?*C.QRect ```
    pub fn DrawPixmap2(self: ?*anyopaque, targetRect: ?*anyopaque, pixmap: ?*anyopaque, sourceRect: ?*anyopaque) void {
        C.QPainter_DrawPixmap2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(pixmap), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, pm: ?*C.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        C.QPainter_DrawPixmap3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, pm: ?*C.QPixmap, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawPixmap4(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        C.QPainter_DrawPixmap4(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, pm: ?*C.QPixmap, sr: ?*C.QRectF ```
    pub fn DrawPixmap5(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        C.QPainter_DrawPixmap5(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, pm: ?*C.QPixmap, sr: ?*C.QRect ```
    pub fn DrawPixmap6(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque, sr: ?*anyopaque) void {
        C.QPainter_DrawPixmap6(@ptrCast(self), @ptrCast(p), @ptrCast(pm), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, pm: ?*C.QPixmap ```
    pub fn DrawPixmap7(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        C.QPainter_DrawPixmap7(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, pm: ?*C.QPixmap ```
    pub fn DrawPixmap8(self: ?*anyopaque, p: ?*anyopaque, pm: ?*anyopaque) void {
        C.QPainter_DrawPixmap8(@ptrCast(self), @ptrCast(p), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, pm: ?*C.QPixmap ```
    pub fn DrawPixmap9(self: ?*anyopaque, x: i32, y: i32, pm: ?*anyopaque) void {
        C.QPainter_DrawPixmap9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, pm: ?*C.QPixmap ```
    pub fn DrawPixmap10(self: ?*anyopaque, r: ?*anyopaque, pm: ?*anyopaque) void {
        C.QPainter_DrawPixmap10(@ptrCast(self), @ptrCast(r), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, pm: ?*C.QPixmap ```
    pub fn DrawPixmap11(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, pm: ?*anyopaque) void {
        C.QPainter_DrawPixmap11(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(pm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: ?*C.QPainter, fragments: ?*C.QPainter__PixmapFragment, fragmentCount: i32, pixmap: ?*C.QPixmap ```
    pub fn DrawPixmapFragments(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque) void {
        C.QPainter_DrawPixmapFragments(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRectF, image: ?*C.QImage, sourceRect: ?*C.QRectF ```
    pub fn DrawImage(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        C.QPainter_DrawImage(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRect, image: ?*C.QImage, sourceRect: ?*C.QRect ```
    pub fn DrawImage2(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque) void {
        C.QPainter_DrawImage2(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, image: ?*C.QImage, sr: ?*C.QRectF ```
    pub fn DrawImage3(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        C.QPainter_DrawImage3(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, image: ?*C.QImage, sr: ?*C.QRect ```
    pub fn DrawImage4(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque) void {
        C.QPainter_DrawImage4(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, image: ?*C.QImage ```
    pub fn DrawImage5(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        C.QPainter_DrawImage5(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, image: ?*C.QImage ```
    pub fn DrawImage6(self: ?*anyopaque, r: ?*anyopaque, image: ?*anyopaque) void {
        C.QPainter_DrawImage6(@ptrCast(self), @ptrCast(r), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, image: ?*C.QImage ```
    pub fn DrawImage7(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        C.QPainter_DrawImage7(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, image: ?*C.QImage ```
    pub fn DrawImage8(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque) void {
        C.QPainter_DrawImage8(@ptrCast(self), @ptrCast(p), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage ```
    pub fn DrawImage9(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque) void {
        C.QPainter_DrawImage9(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QPainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QPainter_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QPainter_LayoutDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
    ///
    /// ``` self: ?*C.QPainter, position: ?*C.QPointF, glyphRun: ?*C.QGlyphRun ```
    pub fn DrawGlyphRun(self: ?*anyopaque, position: ?*anyopaque, glyphRun: ?*anyopaque) void {
        C.QPainter_DrawGlyphRun(@ptrCast(self), @ptrCast(position), @ptrCast(glyphRun));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: ?*C.QPainter, topLeftPosition: ?*C.QPointF, staticText: ?*C.QStaticText ```
    pub fn DrawStaticText(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        C.QPainter_DrawStaticText(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: ?*C.QPainter, topLeftPosition: ?*C.QPoint, staticText: ?*C.QStaticText ```
    pub fn DrawStaticText2(self: ?*anyopaque, topLeftPosition: ?*anyopaque, staticText: ?*anyopaque) void {
        C.QPainter_DrawStaticText2(@ptrCast(self), @ptrCast(topLeftPosition), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
    ///
    /// ``` self: ?*C.QPainter, left: i32, top: i32, staticText: ?*C.QStaticText ```
    pub fn DrawStaticText3(self: ?*anyopaque, left: i32, top: i32, staticText: ?*anyopaque) void {
        C.QPainter_DrawStaticText3(@ptrCast(self), @intCast(left), @intCast(top), @ptrCast(staticText));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, s: []const u8 ```
    pub fn DrawText(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = C.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        C.QPainter_DrawText(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, s: []const u8 ```
    pub fn DrawText2(self: ?*anyopaque, p: ?*anyopaque, s: []const u8) void {
        const s_str = C.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        C.QPainter_DrawText2(@ptrCast(self), @ptrCast(p), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, s: []const u8 ```
    pub fn DrawText3(self: ?*anyopaque, x: i32, y: i32, s: []const u8) void {
        const s_str = C.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };
        C.QPainter_DrawText3(@ptrCast(self), @intCast(x), @intCast(y), s_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, str: []const u8, tf: i32, justificationPadding: i32 ```
    pub fn DrawText4(self: ?*anyopaque, p: ?*anyopaque, str: []const u8, tf: i32, justificationPadding: i32) void {
        const str_str = C.struct_libqt_string{
            .len = str.len,
            .data = @constCast(str.ptr),
        };
        C.QPainter_DrawText4(@ptrCast(self), @ptrCast(p), str_str, @intCast(tf), @intCast(justificationPadding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, flags: i32, text: []const u8 ```
    pub fn DrawText5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText5(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, flags: i32, text: []const u8 ```
    pub fn DrawText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText6(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn DrawText7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, text: []const u8 ```
    pub fn DrawText8(self: ?*anyopaque, r: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText8(@ptrCast(self), @ptrCast(r), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, flags: i32, text: []const u8 ```
    pub fn BoundingRect(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) ?*C.QRectF {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QPainter_BoundingRect(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRect, flags: i32, text: []const u8 ```
    pub fn BoundingRect2(self: ?*anyopaque, rect: ?*anyopaque, flags: i32, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QPainter_BoundingRect2(@ptrCast(self), @ptrCast(rect), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8 ```
    pub fn BoundingRect3(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) ?*C.QRect {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QPainter_BoundingRect3(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, text: []const u8 ```
    pub fn BoundingRect4(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8) ?*C.QRectF {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QPainter_BoundingRect4(@ptrCast(self), @ptrCast(rect), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, ti: ?*C.QTextItem ```
    pub fn DrawTextItem(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        C.QPainter_DrawTextItem(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, ti: ?*C.QTextItem ```
    pub fn DrawTextItem2(self: ?*anyopaque, x: i32, y: i32, ti: ?*anyopaque) void {
        C.QPainter_DrawTextItem2(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, ti: ?*C.QTextItem ```
    pub fn DrawTextItem3(self: ?*anyopaque, p: ?*anyopaque, ti: ?*anyopaque) void {
        C.QPainter_DrawTextItem3(@ptrCast(self), @ptrCast(p), @ptrCast(ti));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRectF, param2: ?*C.QBrush ```
    pub fn FillRect(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QPainter_FillRect(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, param5: ?*C.QBrush ```
    pub fn FillRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque) void {
        C.QPainter_FillRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, param2: ?*C.QBrush ```
    pub fn FillRect3(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QPainter_FillRect3(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRectF, color: ?*C.QColor ```
    pub fn FillRect4(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        C.QPainter_FillRect4(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, color: ?*C.QColor ```
    pub fn FillRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, color: ?*anyopaque) void {
        C.QPainter_FillRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, color: ?*C.QColor ```
    pub fn FillRect6(self: ?*anyopaque, param1: ?*anyopaque, color: ?*anyopaque) void {
        C.QPainter_FillRect6(@ptrCast(self), @ptrCast(param1), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, c: i64) void {
        C.QPainter_FillRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect8(self: ?*anyopaque, r: ?*anyopaque, c: i64) void {
        C.QPainter_FillRect8(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, c: qnamespace_enums.GlobalColor ```
    pub fn FillRect9(self: ?*anyopaque, r: ?*anyopaque, c: i64) void {
        C.QPainter_FillRect9(@ptrCast(self), @ptrCast(r), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect10(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, style: i64) void {
        C.QPainter_FillRect10(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect11(self: ?*anyopaque, r: ?*anyopaque, style: i64) void {
        C.QPainter_FillRect11(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, style: qnamespace_enums.BrushStyle ```
    pub fn FillRect12(self: ?*anyopaque, r: ?*anyopaque, style: i64) void {
        C.QPainter_FillRect12(@ptrCast(self), @ptrCast(r), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, preset: qbrush_enums.Preset ```
    pub fn FillRect13(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, preset: i64) void {
        C.QPainter_FillRect13(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, preset: qbrush_enums.Preset ```
    pub fn FillRect14(self: ?*anyopaque, r: ?*anyopaque, preset: i64) void {
        C.QPainter_FillRect14(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, preset: qbrush_enums.Preset ```
    pub fn FillRect15(self: ?*anyopaque, r: ?*anyopaque, preset: i64) void {
        C.QPainter_FillRect15(@ptrCast(self), @ptrCast(r), @intCast(preset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRectF ```
    pub fn EraseRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QPainter_EraseRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32 ```
    pub fn EraseRect2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QPainter_EraseRect2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect ```
    pub fn EraseRectWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QPainter_EraseRectWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: ?*C.QPainter, hint: qpainter_enums.RenderHint ```
    pub fn SetRenderHint(self: ?*anyopaque, hint: i64) void {
        C.QPainter_SetRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: ?*C.QPainter, hints: i32 ```
    pub fn SetRenderHints(self: ?*anyopaque, hints: i64) void {
        C.QPainter_SetRenderHints(@ptrCast(self), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn RenderHints(self: ?*anyopaque) i64 {
        return C.QPainter_RenderHints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
    ///
    /// ``` self: ?*C.QPainter, hint: qpainter_enums.RenderHint ```
    pub fn TestRenderHint(self: ?*anyopaque, hint: i64) bool {
        return C.QPainter_TestRenderHint(@ptrCast(self), @intCast(hint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QPainter_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn BeginNativePainting(self: ?*anyopaque) void {
        C.QPainter_BeginNativePainting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn EndNativePainting(self: ?*anyopaque) void {
        C.QPainter_EndNativePainting(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRectF, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect22(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        C.QPainter_SetClipRect22(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect23(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        C.QPainter_SetClipRect23(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, op: i64) void {
        C.QPainter_SetClipRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRegion, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipRegion2(self: ?*anyopaque, param1: ?*anyopaque, op: i64) void {
        C.QPainter_SetClipRegion2(@ptrCast(self), @ptrCast(param1), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
    ///
    /// ``` self: ?*C.QPainter, path: ?*C.QPainterPath, op: qnamespace_enums.ClipOperation ```
    pub fn SetClipPath2(self: ?*anyopaque, path: ?*anyopaque, op: i64) void {
        C.QPainter_SetClipPath2(@ptrCast(self), @ptrCast(path), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
    ///
    /// ``` self: ?*C.QPainter, transform: ?*C.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, transform: ?*anyopaque, combine: bool) void {
        C.QPainter_SetTransform2(@ptrCast(self), @ptrCast(transform), combine);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
    ///
    /// ``` self: ?*C.QPainter, matrix: ?*C.QTransform, combine: bool ```
    pub fn SetWorldTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        C.QPainter_SetWorldTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPointF, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon32(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i64) void {
        C.QPainter_DrawPolygon32(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
    ///
    /// ``` self: ?*C.QPainter, points: ?*C.QPoint, pointCount: i32, fillRule: qnamespace_enums.FillRule ```
    pub fn DrawPolygon33(self: ?*anyopaque, points: ?*anyopaque, pointCount: i32, fillRule: i64) void {
        C.QPainter_DrawPolygon33(@ptrCast(self), @ptrCast(points), @intCast(pointCount), @intCast(fillRule));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect4(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i64) void {
        C.QPainter_DrawRoundedRect4(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, xRadius: f64, yRadius: f64, mode: i64) void {
        C.QPainter_DrawRoundedRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRect, xRadius: f64, yRadius: f64, mode: qnamespace_enums.SizeMode ```
    pub fn DrawRoundedRect42(self: ?*anyopaque, rect: ?*anyopaque, xRadius: f64, yRadius: f64, mode: i64) void {
        C.QPainter_DrawRoundedRect42(@ptrCast(self), @ptrCast(rect), @floatCast(xRadius), @floatCast(yRadius), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, pm: ?*C.QPixmap, offset: ?*C.QPointF ```
    pub fn DrawTiledPixmap32(self: ?*anyopaque, rect: ?*anyopaque, pm: ?*anyopaque, offset: ?*anyopaque) void {
        C.QPainter_DrawTiledPixmap32(@ptrCast(self), @ptrCast(rect), @ptrCast(pm), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, param5: ?*C.QPixmap, sx: i32 ```
    pub fn DrawTiledPixmap6(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32) void {
        C.QPainter_DrawTiledPixmap6(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, param5: ?*C.QPixmap, sx: i32, sy: i32 ```
    pub fn DrawTiledPixmap7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, param5: ?*anyopaque, sx: i32, sy: i32) void {
        C.QPainter_DrawTiledPixmap7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @ptrCast(param5), @intCast(sx), @intCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
    ///
    /// ``` self: ?*C.QPainter, param1: ?*C.QRect, param2: ?*C.QPixmap, param3: ?*C.QPoint ```
    pub fn DrawTiledPixmap33(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque) void {
        C.QPainter_DrawTiledPixmap33(@ptrCast(self), @ptrCast(param1), @ptrCast(param2), @ptrCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
    ///
    /// ``` self: ?*C.QPainter, fragments: ?*C.QPainter__PixmapFragment, fragmentCount: i32, pixmap: ?*C.QPixmap, hints: i32 ```
    pub fn DrawPixmapFragments4(self: ?*anyopaque, fragments: ?*anyopaque, fragmentCount: i32, pixmap: ?*anyopaque, hints: i64) void {
        C.QPainter_DrawPixmapFragments4(@ptrCast(self), @ptrCast(fragments), @intCast(fragmentCount), @ptrCast(pixmap), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRectF, image: ?*C.QImage, sourceRect: ?*C.QRectF, flags: i32 ```
    pub fn DrawImage42(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i64) void {
        C.QPainter_DrawImage42(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, targetRect: ?*C.QRect, image: ?*C.QImage, sourceRect: ?*C.QRect, flags: i32 ```
    pub fn DrawImage43(self: ?*anyopaque, targetRect: ?*anyopaque, image: ?*anyopaque, sourceRect: ?*anyopaque, flags: i64) void {
        C.QPainter_DrawImage43(@ptrCast(self), @ptrCast(targetRect), @ptrCast(image), @ptrCast(sourceRect), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPointF, image: ?*C.QImage, sr: ?*C.QRectF, flags: i32 ```
    pub fn DrawImage44(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        C.QPainter_DrawImage44(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, p: ?*C.QPoint, image: ?*C.QImage, sr: ?*C.QRect, flags: i32 ```
    pub fn DrawImage45(self: ?*anyopaque, p: ?*anyopaque, image: ?*anyopaque, sr: ?*anyopaque, flags: i64) void {
        C.QPainter_DrawImage45(@ptrCast(self), @ptrCast(p), @ptrCast(image), @ptrCast(sr), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage, sx: i32 ```
    pub fn DrawImage46(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32) void {
        C.QPainter_DrawImage46(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage, sx: i32, sy: i32 ```
    pub fn DrawImage52(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32) void {
        C.QPainter_DrawImage52(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage, sx: i32, sy: i32, sw: i32 ```
    pub fn DrawImage62(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32) void {
        C.QPainter_DrawImage62(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage, sx: i32, sy: i32, sw: i32, sh: i32 ```
    pub fn DrawImage72(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32) void {
        C.QPainter_DrawImage72(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, image: ?*C.QImage, sx: i32, sy: i32, sw: i32, sh: i32, flags: i32 ```
    pub fn DrawImage82(self: ?*anyopaque, x: i32, y: i32, image: ?*anyopaque, sx: i32, sy: i32, sw: i32, sh: i32, flags: i64) void {
        C.QPainter_DrawImage82(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(image), @intCast(sx), @intCast(sy), @intCast(sw), @intCast(sh), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, flags: i32, text: []const u8, br: ?*C.QRectF ```
    pub fn DrawText42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText42(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRect, flags: i32, text: []const u8, br: ?*C.QRect ```
    pub fn DrawText43(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText43(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: ?*C.QRect ```
    pub fn DrawText72(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, br: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText72(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str, @ptrCast(br));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
    ///
    /// ``` self: ?*C.QPainter, r: ?*C.QRectF, text: []const u8, o: ?*C.QTextOption ```
    pub fn DrawText32(self: ?*anyopaque, r: ?*anyopaque, text: []const u8, o: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QPainter_DrawText32(@ptrCast(self), @ptrCast(r), text_str, @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
    ///
    /// ``` self: ?*C.QPainter, rect: ?*C.QRectF, text: []const u8, o: ?*C.QTextOption ```
    pub fn BoundingRect32(self: ?*anyopaque, rect: ?*anyopaque, text: []const u8, o: ?*anyopaque) ?*C.QRectF {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QPainter_BoundingRect32(@ptrCast(self), @ptrCast(rect), text_str, @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
    ///
    /// ``` self: ?*C.QPainter, hint: qpainter_enums.RenderHint, on: bool ```
    pub fn SetRenderHint2(self: ?*anyopaque, hint: i64, on: bool) void {
        C.QPainter_SetRenderHint2(@ptrCast(self), @intCast(hint), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
    ///
    /// ``` self: ?*C.QPainter, hints: i32, on: bool ```
    pub fn SetRenderHints2(self: ?*anyopaque, hints: i64, on: bool) void {
        C.QPainter_SetRenderHints2(@ptrCast(self), @intCast(hints), on);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPainter ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPainter_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainter-pixmapfragment.html
pub const qpainter__pixmapfragment = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: ?*C.QPointF, sourceRect: ?*C.QRectF ```
    pub fn Create(pos: ?*anyopaque, sourceRect: ?*anyopaque) ?*C.QPainter__PixmapFragment {
        return C.QPainter__PixmapFragment_Create(@ptrCast(pos), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: ?*C.QPointF, sourceRect: ?*C.QRectF, scaleX: f64 ```
    pub fn Create3(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64) ?*C.QPainter__PixmapFragment {
        return C.QPainter__PixmapFragment_Create3(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: ?*C.QPointF, sourceRect: ?*C.QRectF, scaleX: f64, scaleY: f64 ```
    pub fn Create4(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64) ?*C.QPainter__PixmapFragment {
        return C.QPainter__PixmapFragment_Create4(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: ?*C.QPointF, sourceRect: ?*C.QRectF, scaleX: f64, scaleY: f64, rotation: f64 ```
    pub fn Create5(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64) ?*C.QPainter__PixmapFragment {
        return C.QPainter__PixmapFragment_Create5(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY), @floatCast(rotation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
    ///
    /// ``` pos: ?*C.QPointF, sourceRect: ?*C.QRectF, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64 ```
    pub fn Create6(pos: ?*anyopaque, sourceRect: ?*anyopaque, scaleX: f64, scaleY: f64, rotation: f64, opacity: f64) ?*C.QPainter__PixmapFragment {
        return C.QPainter__PixmapFragment_Create6(@ptrCast(pos), @ptrCast(sourceRect), @floatCast(scaleX), @floatCast(scaleY), @floatCast(rotation), @floatCast(opacity));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPainter__PixmapFragment ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPainter__PixmapFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpainter.html#types
pub const enums = struct {
    pub const RenderHint = enum {
        pub const Antialiasing: i32 = 1;
        pub const TextAntialiasing: i32 = 2;
        pub const SmoothPixmapTransform: i32 = 4;
        pub const VerticalSubpixelPositioning: i32 = 8;
        pub const LosslessImageRendering: i32 = 64;
        pub const NonCosmeticBrushPatterns: i32 = 128;
    };

    pub const PixmapFragmentHint = enum {
        pub const OpaqueHint: i32 = 1;
    };

    pub const CompositionMode = enum {
        pub const CompositionMode_SourceOver: i32 = 0;
        pub const CompositionMode_DestinationOver: i32 = 1;
        pub const CompositionMode_Clear: i32 = 2;
        pub const CompositionMode_Source: i32 = 3;
        pub const CompositionMode_Destination: i32 = 4;
        pub const CompositionMode_SourceIn: i32 = 5;
        pub const CompositionMode_DestinationIn: i32 = 6;
        pub const CompositionMode_SourceOut: i32 = 7;
        pub const CompositionMode_DestinationOut: i32 = 8;
        pub const CompositionMode_SourceAtop: i32 = 9;
        pub const CompositionMode_DestinationAtop: i32 = 10;
        pub const CompositionMode_Xor: i32 = 11;
        pub const CompositionMode_Plus: i32 = 12;
        pub const CompositionMode_Multiply: i32 = 13;
        pub const CompositionMode_Screen: i32 = 14;
        pub const CompositionMode_Overlay: i32 = 15;
        pub const CompositionMode_Darken: i32 = 16;
        pub const CompositionMode_Lighten: i32 = 17;
        pub const CompositionMode_ColorDodge: i32 = 18;
        pub const CompositionMode_ColorBurn: i32 = 19;
        pub const CompositionMode_HardLight: i32 = 20;
        pub const CompositionMode_SoftLight: i32 = 21;
        pub const CompositionMode_Difference: i32 = 22;
        pub const CompositionMode_Exclusion: i32 = 23;
        pub const RasterOp_SourceOrDestination: i32 = 24;
        pub const RasterOp_SourceAndDestination: i32 = 25;
        pub const RasterOp_SourceXorDestination: i32 = 26;
        pub const RasterOp_NotSourceAndNotDestination: i32 = 27;
        pub const RasterOp_NotSourceOrNotDestination: i32 = 28;
        pub const RasterOp_NotSourceXorDestination: i32 = 29;
        pub const RasterOp_NotSource: i32 = 30;
        pub const RasterOp_NotSourceAndDestination: i32 = 31;
        pub const RasterOp_SourceAndNotDestination: i32 = 32;
        pub const RasterOp_NotSourceOrDestination: i32 = 33;
        pub const RasterOp_SourceOrNotDestination: i32 = 34;
        pub const RasterOp_ClearDestination: i32 = 35;
        pub const RasterOp_SetDestination: i32 = 36;
        pub const RasterOp_NotDestination: i32 = 37;
    };
};
