const C = @import("qt6c");
const qtextcursor_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextcursor.html
pub const qtextcursor = struct {
    /// New constructs a new QTextCursor object.
    ///
    ///
    pub fn New() ?*C.QTextCursor {
        return C.QTextCursor_new();
    }

    /// New2 constructs a new QTextCursor object.
    ///
    /// ``` document: ?*C.QTextDocument ```
    pub fn New2(document: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextCursor_new2(@ptrCast(document));
    }

    /// New3 constructs a new QTextCursor object.
    ///
    /// ``` frame: ?*C.QTextFrame ```
    pub fn New3(frame: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextCursor_new3(@ptrCast(frame));
    }

    /// New4 constructs a new QTextCursor object.
    ///
    /// ``` block: ?*C.QTextBlock ```
    pub fn New4(block: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextCursor_new4(@ptrCast(block));
    }

    /// New5 constructs a new QTextCursor object.
    ///
    /// ``` cursor: ?*C.QTextCursor ```
    pub fn New5(cursor: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextCursor_new5(@ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator=)
    ///
    /// ``` self: ?*C.QTextCursor, other: ?*C.QTextCursor ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextCursor_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#swap)
    ///
    /// ``` self: ?*C.QTextCursor, other: ?*C.QTextCursor ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextCursor_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return C.QTextCursor_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ``` self: ?*C.QTextCursor, pos: i32 ```
    pub fn SetPosition(self: ?*anyopaque, pos: i32) void {
        C.QTextCursor_SetPosition(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#position)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn Position(self: ?*anyopaque) i32 {
        return C.QTextCursor_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn PositionInBlock(self: ?*anyopaque) i32 {
        return C.QTextCursor_PositionInBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn Anchor(self: ?*anyopaque) i32 {
        return C.QTextCursor_Anchor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ``` self: ?*C.QTextCursor, text: []const u8 ```
    pub fn InsertText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QTextCursor_InsertText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
    ///
    /// ``` self: ?*C.QTextCursor, text: []const u8, format: ?*C.QTextCharFormat ```
    pub fn InsertText2(self: ?*anyopaque, text: []const u8, format: ?*anyopaque) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QTextCursor_InsertText2(@ptrCast(self), text_str, @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: ?*C.QTextCursor, op: qtextcursor_enums.MoveOperation ```
    pub fn MovePosition(self: ?*anyopaque, op: i64) bool {
        return C.QTextCursor_MovePosition(@ptrCast(self), @intCast(op));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn VisualNavigation(self: ?*anyopaque) bool {
        return C.QTextCursor_VisualNavigation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
    ///
    /// ``` self: ?*C.QTextCursor, b: bool ```
    pub fn SetVisualNavigation(self: ?*anyopaque, b: bool) void {
        C.QTextCursor_SetVisualNavigation(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
    ///
    /// ``` self: ?*C.QTextCursor, x: i32 ```
    pub fn SetVerticalMovementX(self: ?*anyopaque, x: i32) void {
        C.QTextCursor_SetVerticalMovementX(@ptrCast(self), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn VerticalMovementX(self: ?*anyopaque) i32 {
        return C.QTextCursor_VerticalMovementX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
    ///
    /// ``` self: ?*C.QTextCursor, b: bool ```
    pub fn SetKeepPositionOnInsert(self: ?*anyopaque, b: bool) void {
        C.QTextCursor_SetKeepPositionOnInsert(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn KeepPositionOnInsert(self: ?*anyopaque) bool {
        return C.QTextCursor_KeepPositionOnInsert(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn DeleteChar(self: ?*anyopaque) void {
        C.QTextCursor_DeleteChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn DeletePreviousChar(self: ?*anyopaque) void {
        C.QTextCursor_DeletePreviousChar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#select)
    ///
    /// ``` self: ?*C.QTextCursor, selection: qtextcursor_enums.SelectionType ```
    pub fn Select(self: ?*anyopaque, selection: i64) void {
        C.QTextCursor_Select(@ptrCast(self), @intCast(selection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn HasSelection(self: ?*anyopaque) bool {
        return C.QTextCursor_HasSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn HasComplexSelection(self: ?*anyopaque) bool {
        return C.QTextCursor_HasComplexSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn RemoveSelectedText(self: ?*anyopaque) void {
        C.QTextCursor_RemoveSelectedText(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        C.QTextCursor_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn SelectionStart(self: ?*anyopaque) i32 {
        return C.QTextCursor_SelectionStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn SelectionEnd(self: ?*anyopaque) i32 {
        return C.QTextCursor_SelectionEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
    ///
    /// ``` self: ?*C.QTextCursor, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextCursor_SelectedText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selection)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn Selection(self: ?*anyopaque) ?*C.QTextDocumentFragment {
        return C.QTextCursor_Selection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
    ///
    /// ``` self: ?*C.QTextCursor, firstRow: ?*i32, numRows: ?*i32, firstColumn: ?*i32, numColumns: ?*i32 ```
    pub fn SelectedTableCells(self: ?*anyopaque, firstRow: ?*anyopaque, numRows: ?*anyopaque, firstColumn: ?*anyopaque, numColumns: ?*anyopaque) void {
        C.QTextCursor_SelectedTableCells(@ptrCast(self), @intCast(firstRow), @intCast(numRows), @intCast(firstColumn), @intCast(numColumns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#block)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn Block(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextCursor_Block(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn CharFormat(self: ?*anyopaque) ?*C.QTextCharFormat {
        return C.QTextCursor_CharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextCharFormat ```
    pub fn SetCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextCursor_SetCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
    ///
    /// ``` self: ?*C.QTextCursor, modifier: ?*C.QTextCharFormat ```
    pub fn MergeCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        C.QTextCursor_MergeCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn BlockFormat(self: ?*anyopaque) ?*C.QTextBlockFormat {
        return C.QTextCursor_BlockFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextBlockFormat ```
    pub fn SetBlockFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextCursor_SetBlockFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
    ///
    /// ``` self: ?*C.QTextCursor, modifier: ?*C.QTextBlockFormat ```
    pub fn MergeBlockFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        C.QTextCursor_MergeBlockFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn BlockCharFormat(self: ?*anyopaque) ?*C.QTextCharFormat {
        return C.QTextCursor_BlockCharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextCharFormat ```
    pub fn SetBlockCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextCursor_SetBlockCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
    ///
    /// ``` self: ?*C.QTextCursor, modifier: ?*C.QTextCharFormat ```
    pub fn MergeBlockCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        C.QTextCursor_MergeBlockCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn AtBlockStart(self: ?*anyopaque) bool {
        return C.QTextCursor_AtBlockStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn AtBlockEnd(self: ?*anyopaque) bool {
        return C.QTextCursor_AtBlockEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn AtStart(self: ?*anyopaque) bool {
        return C.QTextCursor_AtStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QTextCursor_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn InsertBlock(self: ?*anyopaque) void {
        C.QTextCursor_InsertBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextBlockFormat ```
    pub fn InsertBlockWithFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextCursor_InsertBlockWithFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextBlockFormat, charFormat: ?*C.QTextCharFormat ```
    pub fn InsertBlock2(self: ?*anyopaque, format: ?*anyopaque, charFormat: ?*anyopaque) void {
        C.QTextCursor_InsertBlock2(@ptrCast(self), @ptrCast(format), @ptrCast(charFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextListFormat ```
    pub fn InsertList(self: ?*anyopaque, format: ?*anyopaque) ?*C.QTextList {
        return C.QTextCursor_InsertList(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
    ///
    /// ``` self: ?*C.QTextCursor, style: qtextcursor_enums.Style ```
    pub fn InsertListWithStyle(self: ?*anyopaque, style: i64) ?*C.QTextList {
        return C.QTextCursor_InsertListWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextListFormat ```
    pub fn CreateList(self: ?*anyopaque, format: ?*anyopaque) ?*C.QTextList {
        return C.QTextCursor_CreateList(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
    ///
    /// ``` self: ?*C.QTextCursor, style: qtextcursor_enums.Style ```
    pub fn CreateListWithStyle(self: ?*anyopaque, style: i64) ?*C.QTextList {
        return C.QTextCursor_CreateListWithStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn CurrentList(self: ?*anyopaque) ?*C.QTextList {
        return C.QTextCursor_CurrentList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ``` self: ?*C.QTextCursor, rows: i32, cols: i32, format: ?*C.QTextTableFormat ```
    pub fn InsertTable(self: ?*anyopaque, rows: i32, cols: i32, format: ?*anyopaque) ?*C.QTextTable {
        return C.QTextCursor_InsertTable(@ptrCast(self), @intCast(rows), @intCast(cols), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
    ///
    /// ``` self: ?*C.QTextCursor, rows: i32, cols: i32 ```
    pub fn InsertTable2(self: ?*anyopaque, rows: i32, cols: i32) ?*C.QTextTable {
        return C.QTextCursor_InsertTable2(@ptrCast(self), @intCast(rows), @intCast(cols));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn CurrentTable(self: ?*anyopaque) ?*C.QTextTable {
        return C.QTextCursor_CurrentTable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextFrameFormat ```
    pub fn InsertFrame(self: ?*anyopaque, format: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextCursor_InsertFrame(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn CurrentFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextCursor_CurrentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
    ///
    /// ``` self: ?*C.QTextCursor, fragment: ?*C.QTextDocumentFragment ```
    pub fn InsertFragment(self: ?*anyopaque, fragment: ?*anyopaque) void {
        C.QTextCursor_InsertFragment(@ptrCast(self), @ptrCast(fragment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
    ///
    /// ``` self: ?*C.QTextCursor, html: []const u8 ```
    pub fn InsertHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = C.struct_libqt_string{
            .len = html.len,
            .data = @constCast(html.ptr),
        };
        C.QTextCursor_InsertHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ``` self: ?*C.QTextCursor, markdown: []const u8 ```
    pub fn InsertMarkdown(self: ?*anyopaque, markdown: []const u8) void {
        const markdown_str = C.struct_libqt_string{
            .len = markdown.len,
            .data = @constCast(markdown.ptr),
        };
        C.QTextCursor_InsertMarkdown(@ptrCast(self), markdown_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextImageFormat, alignment: qtextcursor_enums.Position ```
    pub fn InsertImage(self: ?*anyopaque, format: ?*anyopaque, alignment: i64) void {
        C.QTextCursor_InsertImage(@ptrCast(self), @ptrCast(format), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: ?*C.QTextCursor, format: ?*C.QTextImageFormat ```
    pub fn InsertImageWithFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextCursor_InsertImageWithFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: ?*C.QTextCursor, name: []const u8 ```
    pub fn InsertImageWithName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QTextCursor_InsertImageWithName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: ?*C.QTextCursor, image: ?*C.QImage ```
    pub fn InsertImageWithImage(self: ?*anyopaque, image: ?*anyopaque) void {
        C.QTextCursor_InsertImageWithImage(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn BeginEditBlock(self: ?*anyopaque) void {
        C.QTextCursor_BeginEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn JoinPreviousEditBlock(self: ?*anyopaque) void {
        C.QTextCursor_JoinPreviousEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn EndEditBlock(self: ?*anyopaque) void {
        C.QTextCursor_EndEditBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator!=)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorNotEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorNotEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorLesser(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorLesser(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<=)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator==)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>=)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>)
    ///
    /// ``` self: ?*C.QTextCursor, rhs: ?*C.QTextCursor ```
    pub fn OperatorGreater(self: ?*anyopaque, rhs: ?*anyopaque) bool {
        return C.QTextCursor_OperatorGreater(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
    ///
    /// ``` self: ?*C.QTextCursor, other: ?*C.QTextCursor ```
    pub fn IsCopyOf(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QTextCursor_IsCopyOf(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn BlockNumber(self: ?*anyopaque) i32 {
        return C.QTextCursor_BlockNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn ColumnNumber(self: ?*anyopaque) i32 {
        return C.QTextCursor_ColumnNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#document)
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextCursor_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
    ///
    /// ``` self: ?*C.QTextCursor, pos: i32, mode: qtextcursor_enums.MoveMode ```
    pub fn SetPosition2(self: ?*anyopaque, pos: i32, mode: i64) void {
        C.QTextCursor_SetPosition2(@ptrCast(self), @intCast(pos), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: ?*C.QTextCursor, op: qtextcursor_enums.MoveOperation, param2: qtextcursor_enums.MoveMode ```
    pub fn MovePosition2(self: ?*anyopaque, op: i64, param2: i64) bool {
        return C.QTextCursor_MovePosition2(@ptrCast(self), @intCast(op), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
    ///
    /// ``` self: ?*C.QTextCursor, op: qtextcursor_enums.MoveOperation, param2: qtextcursor_enums.MoveMode, n: i32 ```
    pub fn MovePosition3(self: ?*anyopaque, op: i64, param2: i64, n: i32) bool {
        return C.QTextCursor_MovePosition3(@ptrCast(self), @intCast(op), @intCast(param2), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
    ///
    /// ``` self: ?*C.QTextCursor, markdown: []const u8, features: i32 ```
    pub fn InsertMarkdown2(self: ?*anyopaque, markdown: []const u8, features: i64) void {
        const markdown_str = C.struct_libqt_string{
            .len = markdown.len,
            .data = @constCast(markdown.ptr),
        };
        C.QTextCursor_InsertMarkdown2(@ptrCast(self), markdown_str, @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
    ///
    /// ``` self: ?*C.QTextCursor, image: ?*C.QImage, name: []const u8 ```
    pub fn InsertImage2(self: ?*anyopaque, image: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QTextCursor_InsertImage2(@ptrCast(self), @ptrCast(image), name_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextCursor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextcursor.html#types
pub const enums = struct {
    pub const MoveMode = enum {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };

    pub const MoveOperation = enum {
        pub const NoMove: i32 = 0;
        pub const Start: i32 = 1;
        pub const Up: i32 = 2;
        pub const StartOfLine: i32 = 3;
        pub const StartOfBlock: i32 = 4;
        pub const StartOfWord: i32 = 5;
        pub const PreviousBlock: i32 = 6;
        pub const PreviousCharacter: i32 = 7;
        pub const PreviousWord: i32 = 8;
        pub const Left: i32 = 9;
        pub const WordLeft: i32 = 10;
        pub const End: i32 = 11;
        pub const Down: i32 = 12;
        pub const EndOfLine: i32 = 13;
        pub const EndOfWord: i32 = 14;
        pub const EndOfBlock: i32 = 15;
        pub const NextBlock: i32 = 16;
        pub const NextCharacter: i32 = 17;
        pub const NextWord: i32 = 18;
        pub const Right: i32 = 19;
        pub const WordRight: i32 = 20;
        pub const NextCell: i32 = 21;
        pub const PreviousCell: i32 = 22;
        pub const NextRow: i32 = 23;
        pub const PreviousRow: i32 = 24;
    };

    pub const SelectionType = enum {
        pub const WordUnderCursor: i32 = 0;
        pub const LineUnderCursor: i32 = 1;
        pub const BlockUnderCursor: i32 = 2;
        pub const Document: i32 = 3;
    };
};
