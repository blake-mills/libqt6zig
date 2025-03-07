#pragma once
#ifndef SRCC_LIBQINPUTDIALOG_H
#define SRCC_LIBQINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDialog QDialog;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputDialog QInputDialog;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QInputDialog::InputDialogOption InputDialogOption; // C++ enum
typedef QInputDialog::InputDialogOptions InputDialogOptions; // C++ QFlags
typedef QInputDialog::InputMode InputMode; // C++ enum
#else
typedef int InputDialogOption; // C ABI enum
typedef int InputDialogOptions; // C ABI QFlags
typedef int InputMode; // C ABI enum
#endif

QInputDialog* QInputDialog_new(QWidget* parent);
QInputDialog* QInputDialog_new2();
QInputDialog* QInputDialog_new3(QWidget* parent, int flags);
QMetaObject* QInputDialog_MetaObject(const QInputDialog* self);
void* QInputDialog_Metacast(QInputDialog* self, const char* param1);
int QInputDialog_Metacall(QInputDialog* self, int param1, int param2, void** param3);
void QInputDialog_OnMetacall(QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseMetacall(QInputDialog* self, int param1, int param2, void** param3);
libqt_string QInputDialog_Tr(const char* s);
void QInputDialog_SetInputMode(QInputDialog* self, int mode);
int QInputDialog_InputMode(const QInputDialog* self);
void QInputDialog_SetLabelText(QInputDialog* self, libqt_string text);
libqt_string QInputDialog_LabelText(const QInputDialog* self);
void QInputDialog_SetOption(QInputDialog* self, int option);
bool QInputDialog_TestOption(const QInputDialog* self, int option);
void QInputDialog_SetOptions(QInputDialog* self, int options);
int QInputDialog_Options(const QInputDialog* self);
void QInputDialog_SetTextValue(QInputDialog* self, libqt_string text);
libqt_string QInputDialog_TextValue(const QInputDialog* self);
void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode);
int QInputDialog_TextEchoMode(const QInputDialog* self);
void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable);
bool QInputDialog_IsComboBoxEditable(const QInputDialog* self);
void QInputDialog_SetComboBoxItems(QInputDialog* self, libqt_list /* of libqt_string */ items);
libqt_list /* of libqt_string */ QInputDialog_ComboBoxItems(const QInputDialog* self);
void QInputDialog_SetIntValue(QInputDialog* self, int value);
int QInputDialog_IntValue(const QInputDialog* self);
void QInputDialog_SetIntMinimum(QInputDialog* self, int min);
int QInputDialog_IntMinimum(const QInputDialog* self);
void QInputDialog_SetIntMaximum(QInputDialog* self, int max);
int QInputDialog_IntMaximum(const QInputDialog* self);
void QInputDialog_SetIntRange(QInputDialog* self, int min, int max);
void QInputDialog_SetIntStep(QInputDialog* self, int step);
int QInputDialog_IntStep(const QInputDialog* self);
void QInputDialog_SetDoubleValue(QInputDialog* self, double value);
double QInputDialog_DoubleValue(const QInputDialog* self);
void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min);
double QInputDialog_DoubleMinimum(const QInputDialog* self);
void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max);
double QInputDialog_DoubleMaximum(const QInputDialog* self);
void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max);
void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals);
int QInputDialog_DoubleDecimals(const QInputDialog* self);
void QInputDialog_SetOkButtonText(QInputDialog* self, libqt_string text);
libqt_string QInputDialog_OkButtonText(const QInputDialog* self);
void QInputDialog_SetCancelButtonText(QInputDialog* self, libqt_string text);
libqt_string QInputDialog_CancelButtonText(const QInputDialog* self);
QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self);
void QInputDialog_OnMinimumSizeHint(const QInputDialog* self, intptr_t slot);
QSize* QInputDialog_QBaseMinimumSizeHint(const QInputDialog* self);
QSize* QInputDialog_SizeHint(const QInputDialog* self);
void QInputDialog_OnSizeHint(const QInputDialog* self, intptr_t slot);
QSize* QInputDialog_QBaseSizeHint(const QInputDialog* self);
void QInputDialog_SetVisible(QInputDialog* self, bool visible);
void QInputDialog_OnSetVisible(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseSetVisible(QInputDialog* self, bool visible);
libqt_string QInputDialog_GetText(QWidget* parent, libqt_string title, libqt_string label);
libqt_string QInputDialog_GetMultiLineText(QWidget* parent, libqt_string title, libqt_string label);
libqt_string QInputDialog_GetItem(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items);
int QInputDialog_GetInt(QWidget* parent, libqt_string title, libqt_string label);
double QInputDialog_GetDouble(QWidget* parent, libqt_string title, libqt_string label);
void QInputDialog_SetDoubleStep(QInputDialog* self, double step);
double QInputDialog_DoubleStep(const QInputDialog* self);
void QInputDialog_TextValueChanged(QInputDialog* self, libqt_string text);
void QInputDialog_Connect_TextValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_TextValueSelected(QInputDialog* self, libqt_string text);
void QInputDialog_Connect_TextValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueChanged(QInputDialog* self, int value);
void QInputDialog_Connect_IntValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_IntValueSelected(QInputDialog* self, int value);
void QInputDialog_Connect_IntValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueChanged(QInputDialog* self, double value);
void QInputDialog_Connect_DoubleValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_DoubleValueSelected(QInputDialog* self, double value);
void QInputDialog_Connect_DoubleValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_Done(QInputDialog* self, int result);
void QInputDialog_OnDone(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDone(QInputDialog* self, int result);
libqt_string QInputDialog_Tr2(const char* s, const char* c);
libqt_string QInputDialog_Tr3(const char* s, const char* c, int n);
void QInputDialog_SetOption2(QInputDialog* self, int option, bool on);
libqt_string QInputDialog_GetText4(QWidget* parent, libqt_string title, libqt_string label, int echo);
libqt_string QInputDialog_GetText5(QWidget* parent, libqt_string title, libqt_string label, int echo, libqt_string text);
libqt_string QInputDialog_GetText6(QWidget* parent, libqt_string title, libqt_string label, int echo, libqt_string text, bool* ok);
libqt_string QInputDialog_GetText7(QWidget* parent, libqt_string title, libqt_string label, int echo, libqt_string text, bool* ok, int flags);
libqt_string QInputDialog_GetText8(QWidget* parent, libqt_string title, libqt_string label, int echo, libqt_string text, bool* ok, int flags, int inputMethodHints);
libqt_string QInputDialog_GetMultiLineText4(QWidget* parent, libqt_string title, libqt_string label, libqt_string text);
libqt_string QInputDialog_GetMultiLineText5(QWidget* parent, libqt_string title, libqt_string label, libqt_string text, bool* ok);
libqt_string QInputDialog_GetMultiLineText6(QWidget* parent, libqt_string title, libqt_string label, libqt_string text, bool* ok, int flags);
libqt_string QInputDialog_GetMultiLineText7(QWidget* parent, libqt_string title, libqt_string label, libqt_string text, bool* ok, int flags, int inputMethodHints);
libqt_string QInputDialog_GetItem5(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items, int current);
libqt_string QInputDialog_GetItem6(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items, int current, bool editable);
libqt_string QInputDialog_GetItem7(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok);
libqt_string QInputDialog_GetItem8(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags);
libqt_string QInputDialog_GetItem9(QWidget* parent, libqt_string title, libqt_string label, libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags, int inputMethodHints);
int QInputDialog_GetInt4(QWidget* parent, libqt_string title, libqt_string label, int value);
int QInputDialog_GetInt5(QWidget* parent, libqt_string title, libqt_string label, int value, int minValue);
int QInputDialog_GetInt6(QWidget* parent, libqt_string title, libqt_string label, int value, int minValue, int maxValue);
int QInputDialog_GetInt7(QWidget* parent, libqt_string title, libqt_string label, int value, int minValue, int maxValue, int step);
int QInputDialog_GetInt8(QWidget* parent, libqt_string title, libqt_string label, int value, int minValue, int maxValue, int step, bool* ok);
int QInputDialog_GetInt9(QWidget* parent, libqt_string title, libqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags);
double QInputDialog_GetDouble4(QWidget* parent, libqt_string title, libqt_string label, double value);
double QInputDialog_GetDouble5(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue);
double QInputDialog_GetDouble6(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue, double maxValue);
double QInputDialog_GetDouble7(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue, double maxValue, int decimals);
double QInputDialog_GetDouble8(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok);
double QInputDialog_GetDouble9(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags);
double QInputDialog_GetDouble10(QWidget* parent, libqt_string title, libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step);
void QInputDialog_Open(QInputDialog* self);
void QInputDialog_OnOpen(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseOpen(QInputDialog* self);
int QInputDialog_Exec(QInputDialog* self);
void QInputDialog_OnExec(QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseExec(QInputDialog* self);
void QInputDialog_Accept(QInputDialog* self);
void QInputDialog_OnAccept(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseAccept(QInputDialog* self);
void QInputDialog_Reject(QInputDialog* self);
void QInputDialog_OnReject(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseReject(QInputDialog* self);
void QInputDialog_KeyPressEvent(QInputDialog* self, QKeyEvent* param1);
void QInputDialog_OnKeyPressEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseKeyPressEvent(QInputDialog* self, QKeyEvent* param1);
void QInputDialog_CloseEvent(QInputDialog* self, QCloseEvent* param1);
void QInputDialog_OnCloseEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseCloseEvent(QInputDialog* self, QCloseEvent* param1);
void QInputDialog_ShowEvent(QInputDialog* self, QShowEvent* param1);
void QInputDialog_OnShowEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseShowEvent(QInputDialog* self, QShowEvent* param1);
void QInputDialog_ResizeEvent(QInputDialog* self, QResizeEvent* param1);
void QInputDialog_OnResizeEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseResizeEvent(QInputDialog* self, QResizeEvent* param1);
void QInputDialog_ContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1);
void QInputDialog_OnContextMenuEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1);
bool QInputDialog_EventFilter(QInputDialog* self, QObject* param1, QEvent* param2);
void QInputDialog_OnEventFilter(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseEventFilter(QInputDialog* self, QObject* param1, QEvent* param2);
int QInputDialog_DevType(const QInputDialog* self);
void QInputDialog_OnDevType(const QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseDevType(const QInputDialog* self);
int QInputDialog_HeightForWidth(const QInputDialog* self, int param1);
void QInputDialog_OnHeightForWidth(const QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseHeightForWidth(const QInputDialog* self, int param1);
bool QInputDialog_HasHeightForWidth(const QInputDialog* self);
void QInputDialog_OnHasHeightForWidth(const QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseHasHeightForWidth(const QInputDialog* self);
QPaintEngine* QInputDialog_PaintEngine(const QInputDialog* self);
void QInputDialog_OnPaintEngine(const QInputDialog* self, intptr_t slot);
QPaintEngine* QInputDialog_QBasePaintEngine(const QInputDialog* self);
bool QInputDialog_Event(QInputDialog* self, QEvent* event);
void QInputDialog_OnEvent(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseEvent(QInputDialog* self, QEvent* event);
void QInputDialog_MousePressEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_OnMousePressEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseMousePressEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_MouseReleaseEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_OnMouseReleaseEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseMouseReleaseEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_MouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_OnMouseDoubleClickEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseMouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_MouseMoveEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_OnMouseMoveEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseMouseMoveEvent(QInputDialog* self, QMouseEvent* event);
void QInputDialog_WheelEvent(QInputDialog* self, QWheelEvent* event);
void QInputDialog_OnWheelEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseWheelEvent(QInputDialog* self, QWheelEvent* event);
void QInputDialog_KeyReleaseEvent(QInputDialog* self, QKeyEvent* event);
void QInputDialog_OnKeyReleaseEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseKeyReleaseEvent(QInputDialog* self, QKeyEvent* event);
void QInputDialog_FocusInEvent(QInputDialog* self, QFocusEvent* event);
void QInputDialog_OnFocusInEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseFocusInEvent(QInputDialog* self, QFocusEvent* event);
void QInputDialog_FocusOutEvent(QInputDialog* self, QFocusEvent* event);
void QInputDialog_OnFocusOutEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseFocusOutEvent(QInputDialog* self, QFocusEvent* event);
void QInputDialog_EnterEvent(QInputDialog* self, QEnterEvent* event);
void QInputDialog_OnEnterEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseEnterEvent(QInputDialog* self, QEnterEvent* event);
void QInputDialog_LeaveEvent(QInputDialog* self, QEvent* event);
void QInputDialog_OnLeaveEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseLeaveEvent(QInputDialog* self, QEvent* event);
void QInputDialog_PaintEvent(QInputDialog* self, QPaintEvent* event);
void QInputDialog_OnPaintEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBasePaintEvent(QInputDialog* self, QPaintEvent* event);
void QInputDialog_MoveEvent(QInputDialog* self, QMoveEvent* event);
void QInputDialog_OnMoveEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseMoveEvent(QInputDialog* self, QMoveEvent* event);
void QInputDialog_TabletEvent(QInputDialog* self, QTabletEvent* event);
void QInputDialog_OnTabletEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseTabletEvent(QInputDialog* self, QTabletEvent* event);
void QInputDialog_ActionEvent(QInputDialog* self, QActionEvent* event);
void QInputDialog_OnActionEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseActionEvent(QInputDialog* self, QActionEvent* event);
void QInputDialog_DragEnterEvent(QInputDialog* self, QDragEnterEvent* event);
void QInputDialog_OnDragEnterEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDragEnterEvent(QInputDialog* self, QDragEnterEvent* event);
void QInputDialog_DragMoveEvent(QInputDialog* self, QDragMoveEvent* event);
void QInputDialog_OnDragMoveEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDragMoveEvent(QInputDialog* self, QDragMoveEvent* event);
void QInputDialog_DragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event);
void QInputDialog_OnDragLeaveEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event);
void QInputDialog_DropEvent(QInputDialog* self, QDropEvent* event);
void QInputDialog_OnDropEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDropEvent(QInputDialog* self, QDropEvent* event);
void QInputDialog_HideEvent(QInputDialog* self, QHideEvent* event);
void QInputDialog_OnHideEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseHideEvent(QInputDialog* self, QHideEvent* event);
bool QInputDialog_NativeEvent(QInputDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QInputDialog_OnNativeEvent(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseNativeEvent(QInputDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QInputDialog_ChangeEvent(QInputDialog* self, QEvent* param1);
void QInputDialog_OnChangeEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseChangeEvent(QInputDialog* self, QEvent* param1);
void QInputDialog_InputMethodEvent(QInputDialog* self, QInputMethodEvent* param1);
void QInputDialog_OnInputMethodEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseInputMethodEvent(QInputDialog* self, QInputMethodEvent* param1);
QVariant* QInputDialog_InputMethodQuery(const QInputDialog* self, int param1);
void QInputDialog_OnInputMethodQuery(const QInputDialog* self, intptr_t slot);
QVariant* QInputDialog_QBaseInputMethodQuery(const QInputDialog* self, int param1);
bool QInputDialog_FocusNextPrevChild(QInputDialog* self, bool next);
void QInputDialog_OnFocusNextPrevChild(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseFocusNextPrevChild(QInputDialog* self, bool next);
void QInputDialog_TimerEvent(QInputDialog* self, QTimerEvent* event);
void QInputDialog_OnTimerEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseTimerEvent(QInputDialog* self, QTimerEvent* event);
void QInputDialog_ChildEvent(QInputDialog* self, QChildEvent* event);
void QInputDialog_OnChildEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseChildEvent(QInputDialog* self, QChildEvent* event);
void QInputDialog_CustomEvent(QInputDialog* self, QEvent* event);
void QInputDialog_OnCustomEvent(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseCustomEvent(QInputDialog* self, QEvent* event);
void QInputDialog_ConnectNotify(QInputDialog* self, QMetaMethod* signal);
void QInputDialog_OnConnectNotify(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseConnectNotify(QInputDialog* self, QMetaMethod* signal);
void QInputDialog_DisconnectNotify(QInputDialog* self, QMetaMethod* signal);
void QInputDialog_OnDisconnectNotify(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDisconnectNotify(QInputDialog* self, QMetaMethod* signal);
int QInputDialog_Metric(const QInputDialog* self, int param1);
void QInputDialog_OnMetric(const QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseMetric(const QInputDialog* self, int param1);
void QInputDialog_InitPainter(const QInputDialog* self, QPainter* painter);
void QInputDialog_OnInitPainter(const QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseInitPainter(const QInputDialog* self, QPainter* painter);
QPaintDevice* QInputDialog_Redirected(const QInputDialog* self, QPoint* offset);
void QInputDialog_OnRedirected(const QInputDialog* self, intptr_t slot);
QPaintDevice* QInputDialog_QBaseRedirected(const QInputDialog* self, QPoint* offset);
QPainter* QInputDialog_SharedPainter(const QInputDialog* self);
void QInputDialog_OnSharedPainter(const QInputDialog* self, intptr_t slot);
QPainter* QInputDialog_QBaseSharedPainter(const QInputDialog* self);
void QInputDialog_AdjustPosition(QInputDialog* self, QWidget* param1);
void QInputDialog_OnAdjustPosition(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseAdjustPosition(QInputDialog* self, QWidget* param1);
void QInputDialog_UpdateMicroFocus(QInputDialog* self);
void QInputDialog_OnUpdateMicroFocus(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseUpdateMicroFocus(QInputDialog* self);
void QInputDialog_Create(QInputDialog* self);
void QInputDialog_OnCreate(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseCreate(QInputDialog* self);
void QInputDialog_Destroy(QInputDialog* self);
void QInputDialog_OnDestroy(QInputDialog* self, intptr_t slot);
void QInputDialog_QBaseDestroy(QInputDialog* self);
bool QInputDialog_FocusNextChild(QInputDialog* self);
void QInputDialog_OnFocusNextChild(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseFocusNextChild(QInputDialog* self);
bool QInputDialog_FocusPreviousChild(QInputDialog* self);
void QInputDialog_OnFocusPreviousChild(QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseFocusPreviousChild(QInputDialog* self);
QObject* QInputDialog_Sender(const QInputDialog* self);
void QInputDialog_OnSender(const QInputDialog* self, intptr_t slot);
QObject* QInputDialog_QBaseSender(const QInputDialog* self);
int QInputDialog_SenderSignalIndex(const QInputDialog* self);
void QInputDialog_OnSenderSignalIndex(const QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseSenderSignalIndex(const QInputDialog* self);
int QInputDialog_Receivers(const QInputDialog* self, const char* signal);
void QInputDialog_OnReceivers(const QInputDialog* self, intptr_t slot);
int QInputDialog_QBaseReceivers(const QInputDialog* self, const char* signal);
bool QInputDialog_IsSignalConnected(const QInputDialog* self, QMetaMethod* signal);
void QInputDialog_OnIsSignalConnected(const QInputDialog* self, intptr_t slot);
bool QInputDialog_QBaseIsSignalConnected(const QInputDialog* self, QMetaMethod* signal);
void QInputDialog_Delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
