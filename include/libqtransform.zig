const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtransform_enums = enums;

/// https://doc.qt.io/qt-6/qtransform.html
pub const qtransform = struct {
    /// New constructs a new QTransform object.
    ///
    /// ``` other: ?*C.QTransform ```
    pub fn New(other: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_new(@ptrCast(other));
    }

    /// New2 constructs a new QTransform object and invalidates the source QTransform object.
    ///
    /// ``` other: ?*C.QTransform ```
    pub fn New2(other: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTransform object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New3(param1: i64) ?*C.QTransform {
        return C.QTransform_new3(@intCast(param1));
    }

    /// New4 constructs a new QTransform object.
    ///
    ///
    pub fn New4() ?*C.QTransform {
        return C.QTransform_new4();
    }

    /// New5 constructs a new QTransform object.
    ///
    /// ``` h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64 ```
    pub fn New5(h11: f64, h12: f64, h13: f64, h21: f64, h22: f64, h23: f64, h31: f64, h32: f64, h33: f64) ?*C.QTransform {
        return C.QTransform_new5(@floatCast(h11), @floatCast(h12), @floatCast(h13), @floatCast(h21), @floatCast(h22), @floatCast(h23), @floatCast(h31), @floatCast(h32), @floatCast(h33));
    }

    /// New6 constructs a new QTransform object.
    ///
    /// ``` h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64 ```
    pub fn New6(h11: f64, h12: f64, h21: f64, h22: f64, dx: f64, dy: f64) ?*C.QTransform {
        return C.QTransform_new6(@floatCast(h11), @floatCast(h12), @floatCast(h21), @floatCast(h22), @floatCast(dx), @floatCast(dy));
    }

    /// New7 constructs a new QTransform object.
    ///
    /// ``` other: ?*C.QTransform ```
    pub fn New7(other: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_new7(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QTransform, other: ?*QTransform ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTransform_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QTransform, other: ?*QTransform ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTransform_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator=)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QTransform ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTransform_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isAffine)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsAffine(self: ?*anyopaque) bool {
        return C.QTransform_IsAffine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsIdentity(self: ?*anyopaque) bool {
        return C.QTransform_IsIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsInvertible(self: ?*anyopaque) bool {
        return C.QTransform_IsInvertible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isScaling)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsScaling(self: ?*anyopaque) bool {
        return C.QTransform_IsScaling(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isRotating)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsRotating(self: ?*anyopaque) bool {
        return C.QTransform_IsRotating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn IsTranslating(self: ?*anyopaque) bool {
        return C.QTransform_IsTranslating(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#type)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QTransform_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#determinant)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Determinant(self: ?*anyopaque) f64 {
        return C.QTransform_Determinant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m11)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M11(self: ?*anyopaque) f64 {
        return C.QTransform_M11(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m12)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M12(self: ?*anyopaque) f64 {
        return C.QTransform_M12(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m13)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M13(self: ?*anyopaque) f64 {
        return C.QTransform_M13(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m21)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M21(self: ?*anyopaque) f64 {
        return C.QTransform_M21(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m22)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M22(self: ?*anyopaque) f64 {
        return C.QTransform_M22(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m23)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M23(self: ?*anyopaque) f64 {
        return C.QTransform_M23(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m31)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M31(self: ?*anyopaque) f64 {
        return C.QTransform_M31(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m32)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M32(self: ?*anyopaque) f64 {
        return C.QTransform_M32(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m33)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn M33(self: ?*anyopaque) f64 {
        return C.QTransform_M33(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dx)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Dx(self: ?*anyopaque) f64 {
        return C.QTransform_Dx(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dy)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Dy(self: ?*anyopaque) f64 {
        return C.QTransform_Dy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
    ///
    /// ``` self: ?*C.QTransform, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64 ```
    pub fn SetMatrix(self: ?*anyopaque, m11: f64, m12: f64, m13: f64, m21: f64, m22: f64, m23: f64, m31: f64, m32: f64, m33: f64) void {
        C.QTransform_SetMatrix(@ptrCast(self), @floatCast(m11), @floatCast(m12), @floatCast(m13), @floatCast(m21), @floatCast(m22), @floatCast(m23), @floatCast(m31), @floatCast(m32), @floatCast(m33));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Inverted(self: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_Inverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#adjoint)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Adjoint(self: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_Adjoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#transposed)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Transposed(self: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_Transposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#translate)
    ///
    /// ``` self: ?*C.QTransform, dx: f64, dy: f64 ```
    pub fn Translate(self: ?*anyopaque, dx: f64, dy: f64) ?*C.QTransform {
        return C.QTransform_Translate(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#scale)
    ///
    /// ``` self: ?*C.QTransform, sx: f64, sy: f64 ```
    pub fn Scale(self: ?*anyopaque, sx: f64, sy: f64) ?*C.QTransform {
        return C.QTransform_Scale(@ptrCast(self), @floatCast(sx), @floatCast(sy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#shear)
    ///
    /// ``` self: ?*C.QTransform, sh: f64, sv: f64 ```
    pub fn Shear(self: ?*anyopaque, sh: f64, sv: f64) ?*C.QTransform {
        return C.QTransform_Shear(@ptrCast(self), @floatCast(sh), @floatCast(sv));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ``` self: ?*C.QTransform, a: f64 ```
    pub fn Rotate(self: ?*anyopaque, a: f64) ?*C.QTransform {
        return C.QTransform_Rotate(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ``` self: ?*C.QTransform, a: f64 ```
    pub fn RotateRadians(self: ?*anyopaque, a: f64) ?*C.QTransform {
        return C.QTransform_RotateRadians(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator==)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QTransform ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QTransform_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator!=)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QTransform ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QTransform_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QTransform ```
    pub fn OperatorMultiplyAssign(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_OperatorMultiplyAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*)
    ///
    /// ``` self: ?*C.QTransform, o: ?*C.QTransform ```
    pub fn OperatorMultiply(self: ?*anyopaque, o: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_OperatorMultiply(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator QVariant)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn ToQVariant(self: ?*anyopaque) ?*C.QVariant {
        return C.QTransform_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#reset)
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QTransform_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, p: ?*C.QPoint ```
    pub fn Map(self: ?*anyopaque, p: ?*anyopaque) ?*C.QPoint {
        return C.QTransform_Map(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, p: ?*C.QPointF ```
    pub fn MapWithQPointF(self: ?*anyopaque, p: ?*anyopaque) ?*C.QPointF {
        return C.QTransform_MapWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, l: ?*C.QLine ```
    pub fn MapWithQLine(self: ?*anyopaque, l: ?*anyopaque) ?*C.QLine {
        return C.QTransform_MapWithQLine(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, l: ?*C.QLineF ```
    pub fn MapWithQLineF(self: ?*anyopaque, l: ?*anyopaque) ?*C.QLineF {
        return C.QTransform_MapWithQLineF(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, r: ?*C.QRegion ```
    pub fn MapWithQRegion(self: ?*anyopaque, r: ?*anyopaque) ?*C.QRegion {
        return C.QTransform_MapWithQRegion(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, p: ?*C.QPainterPath ```
    pub fn MapWithQPainterPath(self: ?*anyopaque, p: ?*anyopaque) ?*C.QPainterPath {
        return C.QTransform_MapWithQPainterPath(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QRect ```
    pub fn MapRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QTransform_MapRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
    ///
    /// ``` self: ?*C.QTransform, param1: ?*C.QRectF ```
    pub fn MapRectWithQRectF(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRectF {
        return C.QTransform_MapRectWithQRectF(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, x: i32, y: i32, tx: ?*i32, ty: ?*i32 ```
    pub fn Map2(self: ?*anyopaque, x: i32, y: i32, tx: ?*anyopaque, ty: ?*anyopaque) void {
        C.QTransform_Map2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(tx), @intCast(ty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
    ///
    /// ``` self: ?*C.QTransform, x: f64, y: f64, tx: ?*f64, ty: ?*f64 ```
    pub fn Map3(self: ?*anyopaque, x: f64, y: f64, tx: ?*anyopaque, ty: ?*anyopaque) void {
        C.QTransform_Map3(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(tx), @floatCast(ty));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
    ///
    /// ``` self: ?*C.QTransform, div: f64 ```
    pub fn OperatorMultiplyAssignWithDiv(self: ?*anyopaque, div: f64) ?*C.QTransform {
        return C.QTransform_OperatorMultiplyAssignWithDiv(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator/=)
    ///
    /// ``` self: ?*C.QTransform, div: f64 ```
    pub fn OperatorDivideAssign(self: ?*anyopaque, div: f64) ?*C.QTransform {
        return C.QTransform_OperatorDivideAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator+=)
    ///
    /// ``` self: ?*C.QTransform, div: f64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, div: f64) ?*C.QTransform {
        return C.QTransform_OperatorPlusAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-=)
    ///
    /// ``` self: ?*C.QTransform, div: f64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, div: f64) ?*C.QTransform {
        return C.QTransform_OperatorMinusAssign(@ptrCast(self), @floatCast(div));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
    ///
    /// ``` dx: f64, dy: f64 ```
    pub fn FromTranslate(dx: f64, dy: f64) ?*C.QTransform {
        return C.QTransform_FromTranslate(@floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromScale)
    ///
    /// ``` dx: f64, dy: f64 ```
    pub fn FromScale(dx: f64, dy: f64) ?*C.QTransform {
        return C.QTransform_FromScale(@floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
    ///
    /// ``` self: ?*C.QTransform, invertible: ?*bool ```
    pub fn Inverted1(self: ?*anyopaque, invertible: ?*anyopaque) ?*C.QTransform {
        return C.QTransform_Inverted1(@ptrCast(self), @ptrCast(invertible));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
    ///
    /// ``` self: ?*C.QTransform, a: f64, axis: qnamespace_enums.Axis ```
    pub fn Rotate2(self: ?*anyopaque, a: f64, axis: i64) ?*C.QTransform {
        return C.QTransform_Rotate2(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
    ///
    /// ``` self: ?*C.QTransform, a: f64, axis: qnamespace_enums.Axis ```
    pub fn RotateRadians2(self: ?*anyopaque, a: f64, axis: i64) ?*C.QTransform {
        return C.QTransform_RotateRadians2(@ptrCast(self), @floatCast(a), @intCast(axis));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTransform ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTransform_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtransform.html#types
pub const enums = struct {
    pub const TransformationType = enum {
        pub const TxNone: i32 = 0;
        pub const TxTranslate: i32 = 1;
        pub const TxScale: i32 = 2;
        pub const TxRotate: i32 = 4;
        pub const TxShear: i32 = 8;
        pub const TxProject: i32 = 16;
    };
};
