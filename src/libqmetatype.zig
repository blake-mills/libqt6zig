const C = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qmetatype.html
pub const qmetatype = struct {
    /// New constructs a new QMetaType object.
    ///
    /// ``` other: ?*C.QMetaType ```
    pub fn New(other: ?*anyopaque) ?*C.QMetaType {
        return C.QMetaType_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaType object and invalidates the source QMetaType object.
    ///
    /// ``` other: ?*C.QMetaType ```
    pub fn New2(other: ?*anyopaque) ?*C.QMetaType {
        return C.QMetaType_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaType object.
    ///
    /// ``` typeVal: i32 ```
    pub fn New3(typeVal: i32) ?*C.QMetaType {
        return C.QMetaType_new3(@intCast(typeVal));
    }

    /// New4 constructs a new QMetaType object.
    ///
    ///
    pub fn New4() ?*C.QMetaType {
        return C.QMetaType_new4();
    }

    /// New5 constructs a new QMetaType object.
    ///
    /// ``` param1: ?*C.QMetaType ```
    pub fn New5(param1: ?*anyopaque) ?*C.QMetaType {
        return C.QMetaType_new5(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QMetaType, other: ?*QMetaType ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QMetaType_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QMetaType, other: ?*QMetaType ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QMetaType_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#registerNormalizedTypedef)
    ///
    /// ``` normalizedTypeName: []u8, typeVal: ?*C.QMetaType ```
    pub fn RegisterNormalizedTypedef(normalizedTypeName: []u8, typeVal: ?*C.QMetaType) void {
        const normalizedTypeName_str = C.struct_libqt_string{
            .len = normalizedTypeName.len,
            .data = @constCast(normalizedTypeName.ptr),
        };
        C.QMetaType_RegisterNormalizedTypedef(normalizedTypeName_str, @ptrCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#type)
    ///
    /// ``` typeName: []const u8 ```
    pub fn Type(typeName: []const u8) i32 {
        const typeName_Cstring = @constCast(typeName.ptr);
        return C.QMetaType_Type(typeName_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#type)
    ///
    /// ``` typeName: []u8 ```
    pub fn TypeWithTypeName(typeName: []u8) i32 {
        const typeName_str = C.struct_libqt_string{
            .len = typeName.len,
            .data = @constCast(typeName.ptr),
        };
        return C.QMetaType_TypeWithTypeName(typeName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#typeName)
    ///
    /// ``` typeVal: i32 ```
    pub fn TypeName(typeVal: i32) []const u8 {
        const _ret = C.QMetaType_TypeName(@intCast(typeVal));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
    ///
    /// ``` typeVal: i32 ```
    pub fn SizeOf(typeVal: i32) i32 {
        return C.QMetaType_SizeOf(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#typeFlags)
    ///
    /// ``` typeVal: i32 ```
    pub fn TypeFlags(typeVal: i32) i64 {
        return C.QMetaType_TypeFlags(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#metaObjectForType)
    ///
    /// ``` typeVal: i32 ```
    pub fn MetaObjectForType(typeVal: i32) ?*C.QMetaObject {
        return C.QMetaType_MetaObjectForType(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ``` typeVal: i32 ```
    pub fn Create(typeVal: i32) ?*anyopaque {
        return C.QMetaType_Create(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destroy)
    ///
    /// ``` typeVal: i32, data: ?*anyopaque ```
    pub fn Destroy(typeVal: i32, data: ?*anyopaque) void {
        C.QMetaType_Destroy(@intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ``` typeVal: i32, where: ?*anyopaque, copyVal: ?*anyopaque ```
    pub fn Construct(typeVal: i32, where: ?*anyopaque, copyVal: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_Construct(@intCast(typeVal), where, copyVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destruct)
    ///
    /// ``` typeVal: i32, where: ?*anyopaque ```
    pub fn Destruct(typeVal: i32, where: ?*anyopaque) void {
        C.QMetaType_Destruct(@intCast(typeVal), where);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
    ///
    /// ``` typeVal: i32 ```
    pub fn IsRegistered(typeVal: i32) bool {
        return C.QMetaType_IsRegistered(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isValid)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QMetaType_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn IsRegistered2(self: ?*anyopaque) bool {
        return C.QMetaType_IsRegistered2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#id)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn Id(self: ?*anyopaque) i32 {
        return C.QMetaType_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn SizeOf2(self: ?*anyopaque) i64 {
        return C.QMetaType_SizeOf2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#alignOf)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn AlignOf(self: ?*anyopaque) i64 {
        return C.QMetaType_AlignOf(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#flags)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QMetaType_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QMetaType_MetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#name)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = C.QMetaType_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn Create2(self: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_Create2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destroy)
    ///
    /// ``` self: ?*C.QMetaType, data: ?*anyopaque ```
    pub fn DestroyWithData(self: ?*anyopaque, data: ?*anyopaque) void {
        C.QMetaType_DestroyWithData(@ptrCast(self), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ``` self: ?*C.QMetaType, where: ?*anyopaque ```
    pub fn ConstructWithWhere(self: ?*anyopaque, where: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_ConstructWithWhere(@ptrCast(self), where);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destruct)
    ///
    /// ``` self: ?*C.QMetaType, data: ?*anyopaque ```
    pub fn DestructWithData(self: ?*anyopaque, data: ?*anyopaque) void {
        C.QMetaType_DestructWithData(@ptrCast(self), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#compare)
    ///
    /// ``` self: ?*C.QMetaType, lhs: ?*anyopaque, rhs: ?*anyopaque ```
    pub fn Compare(self: ?*anyopaque, lhs: ?*anyopaque, rhs: ?*anyopaque) ?*C.QPartialOrdering {
        return C.QMetaType_Compare(@ptrCast(self), lhs, rhs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#equals)
    ///
    /// ``` self: ?*C.QMetaType, lhs: ?*anyopaque, rhs: ?*anyopaque ```
    pub fn Equals(self: ?*anyopaque, lhs: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QMetaType_Equals(@ptrCast(self), lhs, rhs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isEqualityComparable)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn IsEqualityComparable(self: ?*anyopaque) bool {
        return C.QMetaType_IsEqualityComparable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isOrdered)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn IsOrdered(self: ?*anyopaque) bool {
        return C.QMetaType_IsOrdered(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#save)
    ///
    /// ``` self: ?*C.QMetaType, stream: ?*C.QDataStream, data: ?*anyopaque ```
    pub fn Save(self: ?*anyopaque, stream: ?*anyopaque, data: ?*anyopaque) bool {
        return C.QMetaType_Save(@ptrCast(self), @ptrCast(stream), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#load)
    ///
    /// ``` self: ?*C.QMetaType, stream: ?*C.QDataStream, data: ?*anyopaque ```
    pub fn Load(self: ?*anyopaque, stream: ?*anyopaque, data: ?*anyopaque) bool {
        return C.QMetaType_Load(@ptrCast(self), @ptrCast(stream), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDataStreamOperators)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn HasRegisteredDataStreamOperators(self: ?*anyopaque) bool {
        return C.QMetaType_HasRegisteredDataStreamOperators(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#save)
    ///
    /// ``` stream: ?*C.QDataStream, typeVal: i32, data: ?*anyopaque ```
    pub fn Save2(stream: ?*anyopaque, typeVal: i32, data: ?*anyopaque) bool {
        return C.QMetaType_Save2(@ptrCast(stream), @intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#load)
    ///
    /// ``` stream: ?*C.QDataStream, typeVal: i32, data: ?*anyopaque ```
    pub fn Load2(stream: ?*anyopaque, typeVal: i32, data: ?*anyopaque) bool {
        return C.QMetaType_Load2(@ptrCast(stream), @intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#fromName)
    ///
    /// ``` name: []const u8 ```
    pub fn FromName(name: []const u8) ?*C.QMetaType {
        return C.QMetaType_FromName(@ptrCast(@constCast(&name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
    ///
    /// ``` self: ?*C.QMetaType, dbg: ?*C.QDebug, rhs: ?*anyopaque ```
    pub fn DebugStream(self: ?*anyopaque, dbg: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QMetaType_DebugStream(@ptrCast(self), @ptrCast(dbg), rhs);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn HasRegisteredDebugStreamOperator(self: ?*anyopaque) bool {
        return C.QMetaType_HasRegisteredDebugStreamOperator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
    ///
    /// ``` dbg: ?*C.QDebug, rhs: ?*anyopaque, typeId: i32 ```
    pub fn DebugStream2(dbg: ?*anyopaque, rhs: ?*anyopaque, typeId: i32) bool {
        return C.QMetaType_DebugStream2(@ptrCast(dbg), rhs, @intCast(typeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
    ///
    /// ``` typeId: i32 ```
    pub fn HasRegisteredDebugStreamOperatorWithTypeId(typeId: i32) bool {
        return C.QMetaType_HasRegisteredDebugStreamOperatorWithTypeId(@intCast(typeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#convert)
    ///
    /// ``` fromType: ?*C.QMetaType, from: ?*anyopaque, toType: ?*C.QMetaType, to: ?*anyopaque ```
    pub fn Convert(fromType: ?*C.QMetaType, from: ?*anyopaque, toType: ?*C.QMetaType, to: ?*anyopaque) bool {
        return C.QMetaType_Convert(@ptrCast(fromType), from, @ptrCast(toType), to);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#canConvert)
    ///
    /// ``` fromType: ?*C.QMetaType, toType: ?*C.QMetaType ```
    pub fn CanConvert(fromType: ?*C.QMetaType, toType: ?*C.QMetaType) bool {
        return C.QMetaType_CanConvert(@ptrCast(fromType), @ptrCast(toType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#view)
    ///
    /// ``` fromType: ?*C.QMetaType, from: ?*anyopaque, toType: ?*C.QMetaType, to: ?*anyopaque ```
    pub fn View(fromType: ?*C.QMetaType, from: ?*anyopaque, toType: ?*C.QMetaType, to: ?*anyopaque) bool {
        return C.QMetaType_View(@ptrCast(fromType), from, @ptrCast(toType), to);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#canView)
    ///
    /// ``` fromType: ?*C.QMetaType, toType: ?*C.QMetaType ```
    pub fn CanView(fromType: ?*C.QMetaType, toType: ?*C.QMetaType) bool {
        return C.QMetaType_CanView(@ptrCast(fromType), @ptrCast(toType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#convert)
    ///
    /// ``` from: ?*anyopaque, fromTypeId: i32, to: ?*anyopaque, toTypeId: i32 ```
    pub fn Convert2(from: ?*anyopaque, fromTypeId: i32, to: ?*anyopaque, toTypeId: i32) bool {
        return C.QMetaType_Convert2(from, @intCast(fromTypeId), to, @intCast(toTypeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#compare)
    ///
    /// ``` lhs: ?*anyopaque, rhs: ?*anyopaque, typeId: i32, result: ?*i32 ```
    pub fn Compare2(lhs: ?*anyopaque, rhs: ?*anyopaque, typeId: i32, result: ?*anyopaque) bool {
        return C.QMetaType_Compare2(lhs, rhs, @intCast(typeId), @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#equals)
    ///
    /// ``` lhs: ?*anyopaque, rhs: ?*anyopaque, typeId: i32, result: ?*i32 ```
    pub fn Equals2(lhs: ?*anyopaque, rhs: ?*anyopaque, typeId: i32, result: ?*anyopaque) bool {
        return C.QMetaType_Equals2(lhs, rhs, @intCast(typeId), @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredConverterFunction)
    ///
    /// ``` fromType: ?*C.QMetaType, toType: ?*C.QMetaType ```
    pub fn HasRegisteredConverterFunction(fromType: ?*C.QMetaType, toType: ?*C.QMetaType) bool {
        return C.QMetaType_HasRegisteredConverterFunction(@ptrCast(fromType), @ptrCast(toType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredMutableViewFunction)
    ///
    /// ``` fromType: ?*C.QMetaType, toType: ?*C.QMetaType ```
    pub fn HasRegisteredMutableViewFunction(fromType: ?*C.QMetaType, toType: ?*C.QMetaType) bool {
        return C.QMetaType_HasRegisteredMutableViewFunction(@ptrCast(fromType), @ptrCast(toType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterConverterFunction)
    ///
    /// ``` from: ?*C.QMetaType, to: ?*C.QMetaType ```
    pub fn UnregisterConverterFunction(from: ?*C.QMetaType, to: ?*C.QMetaType) void {
        C.QMetaType_UnregisterConverterFunction(@ptrCast(from), @ptrCast(to));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterMutableViewFunction)
    ///
    /// ``` from: ?*C.QMetaType, to: ?*C.QMetaType ```
    pub fn UnregisterMutableViewFunction(from: ?*C.QMetaType, to: ?*C.QMetaType) void {
        C.QMetaType_UnregisterMutableViewFunction(@ptrCast(from), @ptrCast(to));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterMetaType)
    ///
    /// ``` typeVal: ?*C.QMetaType ```
    pub fn UnregisterMetaType(typeVal: ?*C.QMetaType) void {
        C.QMetaType_UnregisterMetaType(@ptrCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ``` typeVal: i32, copyVal: ?*anyopaque ```
    pub fn Create22(typeVal: i32, copyVal: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_Create22(@intCast(typeVal), copyVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#id)
    ///
    /// ``` self: ?*C.QMetaType, param1: i32 ```
    pub fn Id1(self: ?*anyopaque, param1: i32) i32 {
        return C.QMetaType_Id1(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ``` self: ?*C.QMetaType, copyVal: ?*anyopaque ```
    pub fn Create1(self: ?*anyopaque, copyVal: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_Create1(@ptrCast(self), copyVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ``` self: ?*C.QMetaType, where: ?*anyopaque, copyVal: ?*anyopaque ```
    pub fn Construct2(self: ?*anyopaque, where: ?*anyopaque, copyVal: ?*anyopaque) ?*anyopaque {
        return C.QMetaType_Construct2(@ptrCast(self), where, copyVal);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QMetaType ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QMetaType_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetatype.html#types
pub const enums = struct {
    pub const QCborSimpleType = enum(u8) {};

    pub const Type = enum {
        pub const Bool: i32 = 1;
        pub const Int: i32 = 2;
        pub const UInt: i32 = 3;
        pub const LongLong: i32 = 4;
        pub const ULongLong: i32 = 5;
        pub const Double: i32 = 6;
        pub const Long: i32 = 32;
        pub const Short: i32 = 33;
        pub const Char: i32 = 34;
        pub const Char16: i32 = 56;
        pub const Char32: i32 = 57;
        pub const ULong: i32 = 35;
        pub const UShort: i32 = 36;
        pub const UChar: i32 = 37;
        pub const Float: i32 = 38;
        pub const SChar: i32 = 40;
        pub const Nullptr: i32 = 51;
        pub const QCborSimpleType: i32 = 52;
        pub const Void: i32 = 43;
        pub const VoidStar: i32 = 31;
        pub const QChar: i32 = 7;
        pub const QString: i32 = 10;
        pub const QByteArray: i32 = 12;
        pub const QBitArray: i32 = 13;
        pub const QDate: i32 = 14;
        pub const QTime: i32 = 15;
        pub const QDateTime: i32 = 16;
        pub const QUrl: i32 = 17;
        pub const QLocale: i32 = 18;
        pub const QRect: i32 = 19;
        pub const QRectF: i32 = 20;
        pub const QSize: i32 = 21;
        pub const QSizeF: i32 = 22;
        pub const QLine: i32 = 23;
        pub const QLineF: i32 = 24;
        pub const QPoint: i32 = 25;
        pub const QPointF: i32 = 26;
        pub const QEasingCurve: i32 = 29;
        pub const QUuid: i32 = 30;
        pub const QVariant: i32 = 41;
        pub const QRegularExpression: i32 = 44;
        pub const QJsonValue: i32 = 45;
        pub const QJsonObject: i32 = 46;
        pub const QJsonArray: i32 = 47;
        pub const QJsonDocument: i32 = 48;
        pub const QCborValue: i32 = 53;
        pub const QCborArray: i32 = 54;
        pub const QCborMap: i32 = 55;
        pub const QModelIndex: i32 = 42;
        pub const QPersistentModelIndex: i32 = 50;
        pub const QObjectStar: i32 = 39;
        pub const QVariantMap: i32 = 8;
        pub const QVariantList: i32 = 9;
        pub const QVariantHash: i32 = 28;
        pub const QVariantPair: i32 = 58;
        pub const QByteArrayList: i32 = 49;
        pub const QStringList: i32 = 11;
        pub const QFont: i32 = 4096;
        pub const QPixmap: i32 = 4097;
        pub const QBrush: i32 = 4098;
        pub const QColor: i32 = 4099;
        pub const QPalette: i32 = 4100;
        pub const QIcon: i32 = 4101;
        pub const QImage: i32 = 4102;
        pub const QPolygon: i32 = 4103;
        pub const QRegion: i32 = 4104;
        pub const QBitmap: i32 = 4105;
        pub const QCursor: i32 = 4106;
        pub const QKeySequence: i32 = 4107;
        pub const QPen: i32 = 4108;
        pub const QTextLength: i32 = 4109;
        pub const QTextFormat: i32 = 4110;
        pub const QTransform: i32 = 4112;
        pub const QMatrix4x4: i32 = 4113;
        pub const QVector2D: i32 = 4114;
        pub const QVector3D: i32 = 4115;
        pub const QVector4D: i32 = 4116;
        pub const QQuaternion: i32 = 4117;
        pub const QPolygonF: i32 = 4118;
        pub const QColorSpace: i32 = 4119;
        pub const QSizePolicy: i32 = 8192;
        pub const FirstCoreType: i32 = 1;
        pub const LastCoreType: i32 = 58;
        pub const FirstGuiType: i32 = 4096;
        pub const LastGuiType: i32 = 4119;
        pub const FirstWidgetsType: i32 = 8192;
        pub const LastWidgetsType: i32 = 8192;
        pub const HighestInternalId: i32 = 8192;
        pub const QReal: i32 = 6;
        pub const UnknownType: i32 = 0;
        pub const User: i32 = 65536;
    };

    pub const TypeFlag = enum {
        pub const NeedsConstruction: i32 = 1;
        pub const NeedsDestruction: i32 = 2;
        pub const RelocatableType: i32 = 4;
        pub const MovableType: i32 = 4;
        pub const PointerToQObject: i32 = 8;
        pub const IsEnumeration: i32 = 16;
        pub const SharedPointerToQObject: i32 = 32;
        pub const WeakPointerToQObject: i32 = 64;
        pub const TrackingPointerToQObject: i32 = 128;
        pub const IsUnsignedEnumeration: i32 = 256;
        pub const IsGadget: i32 = 512;
        pub const PointerToGadget: i32 = 1024;
        pub const IsPointer: i32 = 2048;
        pub const IsQmlList: i32 = 4096;
        pub const IsConst: i32 = 8192;
    };
};
