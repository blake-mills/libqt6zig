#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTDIALOG_H
#define SRC_PRINTSUPPORTC_LIBQPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
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
typedef struct QPrintDialog QPrintDialog;
typedef struct QPrinter QPrinter;
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

QPrintDialog* QPrintDialog_new(QWidget* parent);
QPrintDialog* QPrintDialog_new2(QPrinter* printer);
QPrintDialog* QPrintDialog_new3();
QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent);
QMetaObject* QPrintDialog_MetaObject(const QPrintDialog* self);
void* QPrintDialog_Metacast(QPrintDialog* self, const char* param1);
int QPrintDialog_Metacall(QPrintDialog* self, int param1, int param2, void** param3);
void QPrintDialog_OnMetacall(QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseMetacall(QPrintDialog* self, int param1, int param2, void** param3);
libqt_string QPrintDialog_Tr(const char* s);
int QPrintDialog_Exec(QPrintDialog* self);
void QPrintDialog_OnExec(QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseExec(QPrintDialog* self);
void QPrintDialog_Accept(QPrintDialog* self);
void QPrintDialog_OnAccept(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseAccept(QPrintDialog* self);
void QPrintDialog_Done(QPrintDialog* self, int result);
void QPrintDialog_OnDone(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDone(QPrintDialog* self, int result);
void QPrintDialog_SetOption(QPrintDialog* self, int option);
bool QPrintDialog_TestOption(const QPrintDialog* self, int option);
void QPrintDialog_SetOptions(QPrintDialog* self, int options);
int QPrintDialog_Options(const QPrintDialog* self);
void QPrintDialog_SetVisible(QPrintDialog* self, bool visible);
void QPrintDialog_OnSetVisible(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseSetVisible(QPrintDialog* self, bool visible);
void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer);
libqt_string QPrintDialog_Tr2(const char* s, const char* c);
libqt_string QPrintDialog_Tr3(const char* s, const char* c, int n);
void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on);
QSize* QPrintDialog_SizeHint(const QPrintDialog* self);
void QPrintDialog_OnSizeHint(const QPrintDialog* self, intptr_t slot);
QSize* QPrintDialog_QBaseSizeHint(const QPrintDialog* self);
QSize* QPrintDialog_MinimumSizeHint(const QPrintDialog* self);
void QPrintDialog_OnMinimumSizeHint(const QPrintDialog* self, intptr_t slot);
QSize* QPrintDialog_QBaseMinimumSizeHint(const QPrintDialog* self);
void QPrintDialog_Open(QPrintDialog* self);
void QPrintDialog_OnOpen(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseOpen(QPrintDialog* self);
void QPrintDialog_Reject(QPrintDialog* self);
void QPrintDialog_OnReject(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseReject(QPrintDialog* self);
void QPrintDialog_KeyPressEvent(QPrintDialog* self, QKeyEvent* param1);
void QPrintDialog_OnKeyPressEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseKeyPressEvent(QPrintDialog* self, QKeyEvent* param1);
void QPrintDialog_CloseEvent(QPrintDialog* self, QCloseEvent* param1);
void QPrintDialog_OnCloseEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseCloseEvent(QPrintDialog* self, QCloseEvent* param1);
void QPrintDialog_ShowEvent(QPrintDialog* self, QShowEvent* param1);
void QPrintDialog_OnShowEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseShowEvent(QPrintDialog* self, QShowEvent* param1);
void QPrintDialog_ResizeEvent(QPrintDialog* self, QResizeEvent* param1);
void QPrintDialog_OnResizeEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseResizeEvent(QPrintDialog* self, QResizeEvent* param1);
void QPrintDialog_ContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1);
void QPrintDialog_OnContextMenuEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1);
bool QPrintDialog_EventFilter(QPrintDialog* self, QObject* param1, QEvent* param2);
void QPrintDialog_OnEventFilter(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseEventFilter(QPrintDialog* self, QObject* param1, QEvent* param2);
int QPrintDialog_DevType(const QPrintDialog* self);
void QPrintDialog_OnDevType(const QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseDevType(const QPrintDialog* self);
int QPrintDialog_HeightForWidth(const QPrintDialog* self, int param1);
void QPrintDialog_OnHeightForWidth(const QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseHeightForWidth(const QPrintDialog* self, int param1);
bool QPrintDialog_HasHeightForWidth(const QPrintDialog* self);
void QPrintDialog_OnHasHeightForWidth(const QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseHasHeightForWidth(const QPrintDialog* self);
QPaintEngine* QPrintDialog_PaintEngine(const QPrintDialog* self);
void QPrintDialog_OnPaintEngine(const QPrintDialog* self, intptr_t slot);
QPaintEngine* QPrintDialog_QBasePaintEngine(const QPrintDialog* self);
bool QPrintDialog_Event(QPrintDialog* self, QEvent* event);
void QPrintDialog_OnEvent(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseEvent(QPrintDialog* self, QEvent* event);
void QPrintDialog_MousePressEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_OnMousePressEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseMousePressEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_MouseReleaseEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_OnMouseReleaseEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseMouseReleaseEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_MouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_OnMouseDoubleClickEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseMouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_MouseMoveEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_OnMouseMoveEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseMouseMoveEvent(QPrintDialog* self, QMouseEvent* event);
void QPrintDialog_WheelEvent(QPrintDialog* self, QWheelEvent* event);
void QPrintDialog_OnWheelEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseWheelEvent(QPrintDialog* self, QWheelEvent* event);
void QPrintDialog_KeyReleaseEvent(QPrintDialog* self, QKeyEvent* event);
void QPrintDialog_OnKeyReleaseEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseKeyReleaseEvent(QPrintDialog* self, QKeyEvent* event);
void QPrintDialog_FocusInEvent(QPrintDialog* self, QFocusEvent* event);
void QPrintDialog_OnFocusInEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseFocusInEvent(QPrintDialog* self, QFocusEvent* event);
void QPrintDialog_FocusOutEvent(QPrintDialog* self, QFocusEvent* event);
void QPrintDialog_OnFocusOutEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseFocusOutEvent(QPrintDialog* self, QFocusEvent* event);
void QPrintDialog_EnterEvent(QPrintDialog* self, QEnterEvent* event);
void QPrintDialog_OnEnterEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseEnterEvent(QPrintDialog* self, QEnterEvent* event);
void QPrintDialog_LeaveEvent(QPrintDialog* self, QEvent* event);
void QPrintDialog_OnLeaveEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseLeaveEvent(QPrintDialog* self, QEvent* event);
void QPrintDialog_PaintEvent(QPrintDialog* self, QPaintEvent* event);
void QPrintDialog_OnPaintEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBasePaintEvent(QPrintDialog* self, QPaintEvent* event);
void QPrintDialog_MoveEvent(QPrintDialog* self, QMoveEvent* event);
void QPrintDialog_OnMoveEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseMoveEvent(QPrintDialog* self, QMoveEvent* event);
void QPrintDialog_TabletEvent(QPrintDialog* self, QTabletEvent* event);
void QPrintDialog_OnTabletEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseTabletEvent(QPrintDialog* self, QTabletEvent* event);
void QPrintDialog_ActionEvent(QPrintDialog* self, QActionEvent* event);
void QPrintDialog_OnActionEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseActionEvent(QPrintDialog* self, QActionEvent* event);
void QPrintDialog_DragEnterEvent(QPrintDialog* self, QDragEnterEvent* event);
void QPrintDialog_OnDragEnterEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDragEnterEvent(QPrintDialog* self, QDragEnterEvent* event);
void QPrintDialog_DragMoveEvent(QPrintDialog* self, QDragMoveEvent* event);
void QPrintDialog_OnDragMoveEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDragMoveEvent(QPrintDialog* self, QDragMoveEvent* event);
void QPrintDialog_DragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event);
void QPrintDialog_OnDragLeaveEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event);
void QPrintDialog_DropEvent(QPrintDialog* self, QDropEvent* event);
void QPrintDialog_OnDropEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDropEvent(QPrintDialog* self, QDropEvent* event);
void QPrintDialog_HideEvent(QPrintDialog* self, QHideEvent* event);
void QPrintDialog_OnHideEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseHideEvent(QPrintDialog* self, QHideEvent* event);
bool QPrintDialog_NativeEvent(QPrintDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QPrintDialog_OnNativeEvent(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseNativeEvent(QPrintDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QPrintDialog_ChangeEvent(QPrintDialog* self, QEvent* param1);
void QPrintDialog_OnChangeEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseChangeEvent(QPrintDialog* self, QEvent* param1);
void QPrintDialog_InputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1);
void QPrintDialog_OnInputMethodEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseInputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1);
QVariant* QPrintDialog_InputMethodQuery(const QPrintDialog* self, int param1);
void QPrintDialog_OnInputMethodQuery(const QPrintDialog* self, intptr_t slot);
QVariant* QPrintDialog_QBaseInputMethodQuery(const QPrintDialog* self, int param1);
bool QPrintDialog_FocusNextPrevChild(QPrintDialog* self, bool next);
void QPrintDialog_OnFocusNextPrevChild(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseFocusNextPrevChild(QPrintDialog* self, bool next);
void QPrintDialog_TimerEvent(QPrintDialog* self, QTimerEvent* event);
void QPrintDialog_OnTimerEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseTimerEvent(QPrintDialog* self, QTimerEvent* event);
void QPrintDialog_ChildEvent(QPrintDialog* self, QChildEvent* event);
void QPrintDialog_OnChildEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseChildEvent(QPrintDialog* self, QChildEvent* event);
void QPrintDialog_CustomEvent(QPrintDialog* self, QEvent* event);
void QPrintDialog_OnCustomEvent(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseCustomEvent(QPrintDialog* self, QEvent* event);
void QPrintDialog_ConnectNotify(QPrintDialog* self, QMetaMethod* signal);
void QPrintDialog_OnConnectNotify(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseConnectNotify(QPrintDialog* self, QMetaMethod* signal);
void QPrintDialog_DisconnectNotify(QPrintDialog* self, QMetaMethod* signal);
void QPrintDialog_OnDisconnectNotify(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDisconnectNotify(QPrintDialog* self, QMetaMethod* signal);
int QPrintDialog_Metric(const QPrintDialog* self, int param1);
void QPrintDialog_OnMetric(const QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseMetric(const QPrintDialog* self, int param1);
void QPrintDialog_InitPainter(const QPrintDialog* self, QPainter* painter);
void QPrintDialog_OnInitPainter(const QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseInitPainter(const QPrintDialog* self, QPainter* painter);
QPaintDevice* QPrintDialog_Redirected(const QPrintDialog* self, QPoint* offset);
void QPrintDialog_OnRedirected(const QPrintDialog* self, intptr_t slot);
QPaintDevice* QPrintDialog_QBaseRedirected(const QPrintDialog* self, QPoint* offset);
QPainter* QPrintDialog_SharedPainter(const QPrintDialog* self);
void QPrintDialog_OnSharedPainter(const QPrintDialog* self, intptr_t slot);
QPainter* QPrintDialog_QBaseSharedPainter(const QPrintDialog* self);
void QPrintDialog_AdjustPosition(QPrintDialog* self, QWidget* param1);
void QPrintDialog_OnAdjustPosition(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseAdjustPosition(QPrintDialog* self, QWidget* param1);
void QPrintDialog_UpdateMicroFocus(QPrintDialog* self);
void QPrintDialog_OnUpdateMicroFocus(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseUpdateMicroFocus(QPrintDialog* self);
void QPrintDialog_Create(QPrintDialog* self);
void QPrintDialog_OnCreate(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseCreate(QPrintDialog* self);
void QPrintDialog_Destroy(QPrintDialog* self);
void QPrintDialog_OnDestroy(QPrintDialog* self, intptr_t slot);
void QPrintDialog_QBaseDestroy(QPrintDialog* self);
bool QPrintDialog_FocusNextChild(QPrintDialog* self);
void QPrintDialog_OnFocusNextChild(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseFocusNextChild(QPrintDialog* self);
bool QPrintDialog_FocusPreviousChild(QPrintDialog* self);
void QPrintDialog_OnFocusPreviousChild(QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseFocusPreviousChild(QPrintDialog* self);
QObject* QPrintDialog_Sender(const QPrintDialog* self);
void QPrintDialog_OnSender(const QPrintDialog* self, intptr_t slot);
QObject* QPrintDialog_QBaseSender(const QPrintDialog* self);
int QPrintDialog_SenderSignalIndex(const QPrintDialog* self);
void QPrintDialog_OnSenderSignalIndex(const QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseSenderSignalIndex(const QPrintDialog* self);
int QPrintDialog_Receivers(const QPrintDialog* self, const char* signal);
void QPrintDialog_OnReceivers(const QPrintDialog* self, intptr_t slot);
int QPrintDialog_QBaseReceivers(const QPrintDialog* self, const char* signal);
bool QPrintDialog_IsSignalConnected(const QPrintDialog* self, QMetaMethod* signal);
void QPrintDialog_OnIsSignalConnected(const QPrintDialog* self, intptr_t slot);
bool QPrintDialog_QBaseIsSignalConnected(const QPrintDialog* self, QMetaMethod* signal);
void QPrintDialog_Delete(QPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
