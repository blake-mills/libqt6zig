#pragma once
#ifndef SRCC_LIBQMENUBAR_H
#define SRCC_LIBQMENUBAR_H

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
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
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
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QMenuBar* QMenuBar_new(QWidget* parent);
QMenuBar* QMenuBar_new2();
QMetaObject* QMenuBar_MetaObject(const QMenuBar* self);
void* QMenuBar_Metacast(QMenuBar* self, const char* param1);
int QMenuBar_Metacall(QMenuBar* self, int param1, int param2, void** param3);
void QMenuBar_OnMetacall(QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseMetacall(QMenuBar* self, int param1, int param2, void** param3);
libqt_string QMenuBar_Tr(const char* s);
QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, libqt_string title);
QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, libqt_string title);
QAction* QMenuBar_AddSeparator(QMenuBar* self);
QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_Clear(QMenuBar* self);
QAction* QMenuBar_ActiveAction(const QMenuBar* self);
void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_IsDefaultUp(const QMenuBar* self);
QSize* QMenuBar_SizeHint(const QMenuBar* self);
void QMenuBar_OnSizeHint(const QMenuBar* self, intptr_t slot);
QSize* QMenuBar_QBaseSizeHint(const QMenuBar* self);
QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self);
void QMenuBar_OnMinimumSizeHint(const QMenuBar* self, intptr_t slot);
QSize* QMenuBar_QBaseMinimumSizeHint(const QMenuBar* self);
int QMenuBar_HeightForWidth(const QMenuBar* self, int param1);
void QMenuBar_OnHeightForWidth(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseHeightForWidth(const QMenuBar* self, int param1);
QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1);
QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1);
void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w);
QWidget* QMenuBar_CornerWidget(const QMenuBar* self);
bool QMenuBar_IsNativeMenuBar(const QMenuBar* self);
void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_SetVisible(QMenuBar* self, bool visible);
void QMenuBar_OnSetVisible(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseSetVisible(QMenuBar* self, bool visible);
void QMenuBar_Triggered(QMenuBar* self, QAction* action);
void QMenuBar_Connect_Triggered(QMenuBar* self, intptr_t slot);
void QMenuBar_Hovered(QMenuBar* self, QAction* action);
void QMenuBar_Connect_Hovered(QMenuBar* self, intptr_t slot);
void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_OnChangeEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_OnKeyPressEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnMouseReleaseEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnMousePressEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnMouseMoveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_OnLeaveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_OnPaintEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_OnResizeEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_OnActionEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_OnFocusOutEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_OnFocusInEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
void QMenuBar_OnTimerEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1);
bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
void QMenuBar_OnEventFilter(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
void QMenuBar_OnEvent(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, QAction* action);
void QMenuBar_OnInitStyleOption(const QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, QAction* action);
libqt_string QMenuBar_Tr2(const char* s, const char* c);
libqt_string QMenuBar_Tr3(const char* s, const char* c, int n);
void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner);
QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner);
int QMenuBar_DevType(const QMenuBar* self);
void QMenuBar_OnDevType(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseDevType(const QMenuBar* self);
bool QMenuBar_HasHeightForWidth(const QMenuBar* self);
void QMenuBar_OnHasHeightForWidth(const QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseHasHeightForWidth(const QMenuBar* self);
QPaintEngine* QMenuBar_PaintEngine(const QMenuBar* self);
void QMenuBar_OnPaintEngine(const QMenuBar* self, intptr_t slot);
QPaintEngine* QMenuBar_QBasePaintEngine(const QMenuBar* self);
void QMenuBar_MouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
void QMenuBar_OnMouseDoubleClickEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
void QMenuBar_WheelEvent(QMenuBar* self, QWheelEvent* event);
void QMenuBar_OnWheelEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseWheelEvent(QMenuBar* self, QWheelEvent* event);
void QMenuBar_KeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
void QMenuBar_OnKeyReleaseEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseKeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
void QMenuBar_EnterEvent(QMenuBar* self, QEnterEvent* event);
void QMenuBar_OnEnterEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseEnterEvent(QMenuBar* self, QEnterEvent* event);
void QMenuBar_MoveEvent(QMenuBar* self, QMoveEvent* event);
void QMenuBar_OnMoveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMoveEvent(QMenuBar* self, QMoveEvent* event);
void QMenuBar_CloseEvent(QMenuBar* self, QCloseEvent* event);
void QMenuBar_OnCloseEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseCloseEvent(QMenuBar* self, QCloseEvent* event);
void QMenuBar_ContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
void QMenuBar_OnContextMenuEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
void QMenuBar_TabletEvent(QMenuBar* self, QTabletEvent* event);
void QMenuBar_OnTabletEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseTabletEvent(QMenuBar* self, QTabletEvent* event);
void QMenuBar_DragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
void QMenuBar_OnDragEnterEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
void QMenuBar_DragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
void QMenuBar_OnDragMoveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
void QMenuBar_DragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
void QMenuBar_OnDragLeaveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
void QMenuBar_DropEvent(QMenuBar* self, QDropEvent* event);
void QMenuBar_OnDropEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDropEvent(QMenuBar* self, QDropEvent* event);
void QMenuBar_ShowEvent(QMenuBar* self, QShowEvent* event);
void QMenuBar_OnShowEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseShowEvent(QMenuBar* self, QShowEvent* event);
void QMenuBar_HideEvent(QMenuBar* self, QHideEvent* event);
void QMenuBar_OnHideEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseHideEvent(QMenuBar* self, QHideEvent* event);
bool QMenuBar_NativeEvent(QMenuBar* self, libqt_string eventType, void* message, intptr_t* result);
void QMenuBar_OnNativeEvent(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseNativeEvent(QMenuBar* self, libqt_string eventType, void* message, intptr_t* result);
void QMenuBar_InputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
void QMenuBar_OnInputMethodEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
QVariant* QMenuBar_InputMethodQuery(const QMenuBar* self, int param1);
void QMenuBar_OnInputMethodQuery(const QMenuBar* self, intptr_t slot);
QVariant* QMenuBar_QBaseInputMethodQuery(const QMenuBar* self, int param1);
bool QMenuBar_FocusNextPrevChild(QMenuBar* self, bool next);
void QMenuBar_OnFocusNextPrevChild(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseFocusNextPrevChild(QMenuBar* self, bool next);
void QMenuBar_ChildEvent(QMenuBar* self, QChildEvent* event);
void QMenuBar_OnChildEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseChildEvent(QMenuBar* self, QChildEvent* event);
void QMenuBar_CustomEvent(QMenuBar* self, QEvent* event);
void QMenuBar_OnCustomEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseCustomEvent(QMenuBar* self, QEvent* event);
void QMenuBar_ConnectNotify(QMenuBar* self, QMetaMethod* signal);
void QMenuBar_OnConnectNotify(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseConnectNotify(QMenuBar* self, QMetaMethod* signal);
void QMenuBar_DisconnectNotify(QMenuBar* self, QMetaMethod* signal);
void QMenuBar_OnDisconnectNotify(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDisconnectNotify(QMenuBar* self, QMetaMethod* signal);
int QMenuBar_Metric(const QMenuBar* self, int param1);
void QMenuBar_OnMetric(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseMetric(const QMenuBar* self, int param1);
void QMenuBar_InitPainter(const QMenuBar* self, QPainter* painter);
void QMenuBar_OnInitPainter(const QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseInitPainter(const QMenuBar* self, QPainter* painter);
QPaintDevice* QMenuBar_Redirected(const QMenuBar* self, QPoint* offset);
void QMenuBar_OnRedirected(const QMenuBar* self, intptr_t slot);
QPaintDevice* QMenuBar_QBaseRedirected(const QMenuBar* self, QPoint* offset);
QPainter* QMenuBar_SharedPainter(const QMenuBar* self);
void QMenuBar_OnSharedPainter(const QMenuBar* self, intptr_t slot);
QPainter* QMenuBar_QBaseSharedPainter(const QMenuBar* self);
void QMenuBar_UpdateMicroFocus(QMenuBar* self);
void QMenuBar_OnUpdateMicroFocus(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseUpdateMicroFocus(QMenuBar* self);
void QMenuBar_Create(QMenuBar* self);
void QMenuBar_OnCreate(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseCreate(QMenuBar* self);
void QMenuBar_Destroy(QMenuBar* self);
void QMenuBar_OnDestroy(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseDestroy(QMenuBar* self);
bool QMenuBar_FocusNextChild(QMenuBar* self);
void QMenuBar_OnFocusNextChild(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseFocusNextChild(QMenuBar* self);
bool QMenuBar_FocusPreviousChild(QMenuBar* self);
void QMenuBar_OnFocusPreviousChild(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseFocusPreviousChild(QMenuBar* self);
QObject* QMenuBar_Sender(const QMenuBar* self);
void QMenuBar_OnSender(const QMenuBar* self, intptr_t slot);
QObject* QMenuBar_QBaseSender(const QMenuBar* self);
int QMenuBar_SenderSignalIndex(const QMenuBar* self);
void QMenuBar_OnSenderSignalIndex(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseSenderSignalIndex(const QMenuBar* self);
int QMenuBar_Receivers(const QMenuBar* self, const char* signal);
void QMenuBar_OnReceivers(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseReceivers(const QMenuBar* self, const char* signal);
bool QMenuBar_IsSignalConnected(const QMenuBar* self, QMetaMethod* signal);
void QMenuBar_OnIsSignalConnected(const QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseIsSignalConnected(const QMenuBar* self, QMetaMethod* signal);
void QMenuBar_Delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
