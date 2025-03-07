#pragma once
#ifndef SRCC_LIBQFONTDIALOG_H
#define SRCC_LIBQFONTDIALOG_H

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
typedef struct QFontDialog QFontDialog;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
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
typedef QFontDialog::FontDialogOption FontDialogOption; // C++ enum
typedef QFontDialog::FontDialogOptions FontDialogOptions; // C++ QFlags
#else
typedef int FontDialogOption; // C ABI enum
typedef int FontDialogOptions; // C ABI QFlags
#endif

QFontDialog* QFontDialog_new(QWidget* parent);
QFontDialog* QFontDialog_new2();
QFontDialog* QFontDialog_new3(QFont* initial);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
QMetaObject* QFontDialog_MetaObject(const QFontDialog* self);
void* QFontDialog_Metacast(QFontDialog* self, const char* param1);
int QFontDialog_Metacall(QFontDialog* self, int param1, int param2, void** param3);
void QFontDialog_OnMetacall(QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseMetacall(QFontDialog* self, int param1, int param2, void** param3);
libqt_string QFontDialog_Tr(const char* s);
void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_CurrentFont(const QFontDialog* self);
QFont* QFontDialog_SelectedFont(const QFontDialog* self);
void QFontDialog_SetOption(QFontDialog* self, int option);
bool QFontDialog_TestOption(const QFontDialog* self, int option);
void QFontDialog_SetOptions(QFontDialog* self, int options);
int QFontDialog_Options(const QFontDialog* self);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseSetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
QFont* QFontDialog_GetFont2(bool* ok, QFont* initial);
void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_Connect_CurrentFontChanged(QFontDialog* self, intptr_t slot);
void QFontDialog_FontSelected(QFontDialog* self, QFont* font);
void QFontDialog_Connect_FontSelected(QFontDialog* self, intptr_t slot);
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_OnChangeEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseChangeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_Done(QFontDialog* self, int result);
void QFontDialog_OnDone(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDone(QFontDialog* self, int result);
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
void QFontDialog_OnEventFilter(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseEventFilter(QFontDialog* self, QObject* object, QEvent* event);
libqt_string QFontDialog_Tr2(const char* s, const char* c);
libqt_string QFontDialog_Tr3(const char* s, const char* c, int n);
void QFontDialog_SetOption2(QFontDialog* self, int option, bool on);
QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent);
QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, libqt_string title);
QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, libqt_string title, int options);
QSize* QFontDialog_SizeHint(const QFontDialog* self);
void QFontDialog_OnSizeHint(const QFontDialog* self, intptr_t slot);
QSize* QFontDialog_QBaseSizeHint(const QFontDialog* self);
QSize* QFontDialog_MinimumSizeHint(const QFontDialog* self);
void QFontDialog_OnMinimumSizeHint(const QFontDialog* self, intptr_t slot);
QSize* QFontDialog_QBaseMinimumSizeHint(const QFontDialog* self);
void QFontDialog_Open(QFontDialog* self);
void QFontDialog_OnOpen(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseOpen(QFontDialog* self);
int QFontDialog_Exec(QFontDialog* self);
void QFontDialog_OnExec(QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseExec(QFontDialog* self);
void QFontDialog_Accept(QFontDialog* self);
void QFontDialog_OnAccept(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseAccept(QFontDialog* self);
void QFontDialog_Reject(QFontDialog* self);
void QFontDialog_OnReject(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseReject(QFontDialog* self);
void QFontDialog_KeyPressEvent(QFontDialog* self, QKeyEvent* param1);
void QFontDialog_OnKeyPressEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseKeyPressEvent(QFontDialog* self, QKeyEvent* param1);
void QFontDialog_CloseEvent(QFontDialog* self, QCloseEvent* param1);
void QFontDialog_OnCloseEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseCloseEvent(QFontDialog* self, QCloseEvent* param1);
void QFontDialog_ShowEvent(QFontDialog* self, QShowEvent* param1);
void QFontDialog_OnShowEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseShowEvent(QFontDialog* self, QShowEvent* param1);
void QFontDialog_ResizeEvent(QFontDialog* self, QResizeEvent* param1);
void QFontDialog_OnResizeEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseResizeEvent(QFontDialog* self, QResizeEvent* param1);
void QFontDialog_ContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1);
void QFontDialog_OnContextMenuEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1);
int QFontDialog_DevType(const QFontDialog* self);
void QFontDialog_OnDevType(const QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseDevType(const QFontDialog* self);
int QFontDialog_HeightForWidth(const QFontDialog* self, int param1);
void QFontDialog_OnHeightForWidth(const QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseHeightForWidth(const QFontDialog* self, int param1);
bool QFontDialog_HasHeightForWidth(const QFontDialog* self);
void QFontDialog_OnHasHeightForWidth(const QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseHasHeightForWidth(const QFontDialog* self);
QPaintEngine* QFontDialog_PaintEngine(const QFontDialog* self);
void QFontDialog_OnPaintEngine(const QFontDialog* self, intptr_t slot);
QPaintEngine* QFontDialog_QBasePaintEngine(const QFontDialog* self);
bool QFontDialog_Event(QFontDialog* self, QEvent* event);
void QFontDialog_OnEvent(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseEvent(QFontDialog* self, QEvent* event);
void QFontDialog_MousePressEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_OnMousePressEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseMousePressEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_MouseReleaseEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_OnMouseReleaseEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseMouseReleaseEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_MouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_OnMouseDoubleClickEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_MouseMoveEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_OnMouseMoveEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseMouseMoveEvent(QFontDialog* self, QMouseEvent* event);
void QFontDialog_WheelEvent(QFontDialog* self, QWheelEvent* event);
void QFontDialog_OnWheelEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseWheelEvent(QFontDialog* self, QWheelEvent* event);
void QFontDialog_KeyReleaseEvent(QFontDialog* self, QKeyEvent* event);
void QFontDialog_OnKeyReleaseEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseKeyReleaseEvent(QFontDialog* self, QKeyEvent* event);
void QFontDialog_FocusInEvent(QFontDialog* self, QFocusEvent* event);
void QFontDialog_OnFocusInEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseFocusInEvent(QFontDialog* self, QFocusEvent* event);
void QFontDialog_FocusOutEvent(QFontDialog* self, QFocusEvent* event);
void QFontDialog_OnFocusOutEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseFocusOutEvent(QFontDialog* self, QFocusEvent* event);
void QFontDialog_EnterEvent(QFontDialog* self, QEnterEvent* event);
void QFontDialog_OnEnterEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseEnterEvent(QFontDialog* self, QEnterEvent* event);
void QFontDialog_LeaveEvent(QFontDialog* self, QEvent* event);
void QFontDialog_OnLeaveEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseLeaveEvent(QFontDialog* self, QEvent* event);
void QFontDialog_PaintEvent(QFontDialog* self, QPaintEvent* event);
void QFontDialog_OnPaintEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBasePaintEvent(QFontDialog* self, QPaintEvent* event);
void QFontDialog_MoveEvent(QFontDialog* self, QMoveEvent* event);
void QFontDialog_OnMoveEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseMoveEvent(QFontDialog* self, QMoveEvent* event);
void QFontDialog_TabletEvent(QFontDialog* self, QTabletEvent* event);
void QFontDialog_OnTabletEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseTabletEvent(QFontDialog* self, QTabletEvent* event);
void QFontDialog_ActionEvent(QFontDialog* self, QActionEvent* event);
void QFontDialog_OnActionEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseActionEvent(QFontDialog* self, QActionEvent* event);
void QFontDialog_DragEnterEvent(QFontDialog* self, QDragEnterEvent* event);
void QFontDialog_OnDragEnterEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDragEnterEvent(QFontDialog* self, QDragEnterEvent* event);
void QFontDialog_DragMoveEvent(QFontDialog* self, QDragMoveEvent* event);
void QFontDialog_OnDragMoveEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDragMoveEvent(QFontDialog* self, QDragMoveEvent* event);
void QFontDialog_DragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event);
void QFontDialog_OnDragLeaveEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event);
void QFontDialog_DropEvent(QFontDialog* self, QDropEvent* event);
void QFontDialog_OnDropEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDropEvent(QFontDialog* self, QDropEvent* event);
void QFontDialog_HideEvent(QFontDialog* self, QHideEvent* event);
void QFontDialog_OnHideEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseHideEvent(QFontDialog* self, QHideEvent* event);
bool QFontDialog_NativeEvent(QFontDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QFontDialog_OnNativeEvent(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseNativeEvent(QFontDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QFontDialog_InputMethodEvent(QFontDialog* self, QInputMethodEvent* param1);
void QFontDialog_OnInputMethodEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1);
QVariant* QFontDialog_InputMethodQuery(const QFontDialog* self, int param1);
void QFontDialog_OnInputMethodQuery(const QFontDialog* self, intptr_t slot);
QVariant* QFontDialog_QBaseInputMethodQuery(const QFontDialog* self, int param1);
bool QFontDialog_FocusNextPrevChild(QFontDialog* self, bool next);
void QFontDialog_OnFocusNextPrevChild(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseFocusNextPrevChild(QFontDialog* self, bool next);
void QFontDialog_TimerEvent(QFontDialog* self, QTimerEvent* event);
void QFontDialog_OnTimerEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseTimerEvent(QFontDialog* self, QTimerEvent* event);
void QFontDialog_ChildEvent(QFontDialog* self, QChildEvent* event);
void QFontDialog_OnChildEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseChildEvent(QFontDialog* self, QChildEvent* event);
void QFontDialog_CustomEvent(QFontDialog* self, QEvent* event);
void QFontDialog_OnCustomEvent(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseCustomEvent(QFontDialog* self, QEvent* event);
void QFontDialog_ConnectNotify(QFontDialog* self, QMetaMethod* signal);
void QFontDialog_OnConnectNotify(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseConnectNotify(QFontDialog* self, QMetaMethod* signal);
void QFontDialog_DisconnectNotify(QFontDialog* self, QMetaMethod* signal);
void QFontDialog_OnDisconnectNotify(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDisconnectNotify(QFontDialog* self, QMetaMethod* signal);
int QFontDialog_Metric(const QFontDialog* self, int param1);
void QFontDialog_OnMetric(const QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseMetric(const QFontDialog* self, int param1);
void QFontDialog_InitPainter(const QFontDialog* self, QPainter* painter);
void QFontDialog_OnInitPainter(const QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseInitPainter(const QFontDialog* self, QPainter* painter);
QPaintDevice* QFontDialog_Redirected(const QFontDialog* self, QPoint* offset);
void QFontDialog_OnRedirected(const QFontDialog* self, intptr_t slot);
QPaintDevice* QFontDialog_QBaseRedirected(const QFontDialog* self, QPoint* offset);
QPainter* QFontDialog_SharedPainter(const QFontDialog* self);
void QFontDialog_OnSharedPainter(const QFontDialog* self, intptr_t slot);
QPainter* QFontDialog_QBaseSharedPainter(const QFontDialog* self);
void QFontDialog_AdjustPosition(QFontDialog* self, QWidget* param1);
void QFontDialog_OnAdjustPosition(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseAdjustPosition(QFontDialog* self, QWidget* param1);
void QFontDialog_UpdateMicroFocus(QFontDialog* self);
void QFontDialog_OnUpdateMicroFocus(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseUpdateMicroFocus(QFontDialog* self);
void QFontDialog_Create(QFontDialog* self);
void QFontDialog_OnCreate(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseCreate(QFontDialog* self);
void QFontDialog_Destroy(QFontDialog* self);
void QFontDialog_OnDestroy(QFontDialog* self, intptr_t slot);
void QFontDialog_QBaseDestroy(QFontDialog* self);
bool QFontDialog_FocusNextChild(QFontDialog* self);
void QFontDialog_OnFocusNextChild(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseFocusNextChild(QFontDialog* self);
bool QFontDialog_FocusPreviousChild(QFontDialog* self);
void QFontDialog_OnFocusPreviousChild(QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseFocusPreviousChild(QFontDialog* self);
QObject* QFontDialog_Sender(const QFontDialog* self);
void QFontDialog_OnSender(const QFontDialog* self, intptr_t slot);
QObject* QFontDialog_QBaseSender(const QFontDialog* self);
int QFontDialog_SenderSignalIndex(const QFontDialog* self);
void QFontDialog_OnSenderSignalIndex(const QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseSenderSignalIndex(const QFontDialog* self);
int QFontDialog_Receivers(const QFontDialog* self, const char* signal);
void QFontDialog_OnReceivers(const QFontDialog* self, intptr_t slot);
int QFontDialog_QBaseReceivers(const QFontDialog* self, const char* signal);
bool QFontDialog_IsSignalConnected(const QFontDialog* self, QMetaMethod* signal);
void QFontDialog_OnIsSignalConnected(const QFontDialog* self, intptr_t slot);
bool QFontDialog_QBaseIsSignalConnected(const QFontDialog* self, QMetaMethod* signal);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
