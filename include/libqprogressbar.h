#pragma once
#ifndef SRCC_LIBQPROGRESSBAR_H
#define SRCC_LIBQPROGRESSBAR_H

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
typedef struct QProgressBar QProgressBar;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionProgressBar QStyleOptionProgressBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QProgressBar::Direction Direction; // C++ enum
#else
typedef int Direction; // C ABI enum
#endif

QProgressBar* QProgressBar_new(QWidget* parent);
QProgressBar* QProgressBar_new2();
QMetaObject* QProgressBar_MetaObject(const QProgressBar* self);
void* QProgressBar_Metacast(QProgressBar* self, const char* param1);
int QProgressBar_Metacall(QProgressBar* self, int param1, int param2, void** param3);
void QProgressBar_OnMetacall(QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseMetacall(QProgressBar* self, int param1, int param2, void** param3);
libqt_string QProgressBar_Tr(const char* s);
int QProgressBar_Minimum(const QProgressBar* self);
int QProgressBar_Maximum(const QProgressBar* self);
int QProgressBar_Value(const QProgressBar* self);
libqt_string QProgressBar_Text(const QProgressBar* self);
void QProgressBar_OnText(const QProgressBar* self, intptr_t slot);
libqt_string QProgressBar_QBaseText(const QProgressBar* self);
void QProgressBar_SetTextVisible(QProgressBar* self, bool visible);
bool QProgressBar_IsTextVisible(const QProgressBar* self);
int QProgressBar_Alignment(const QProgressBar* self);
void QProgressBar_SetAlignment(QProgressBar* self, int alignment);
QSize* QProgressBar_SizeHint(const QProgressBar* self);
void QProgressBar_OnSizeHint(const QProgressBar* self, intptr_t slot);
QSize* QProgressBar_QBaseSizeHint(const QProgressBar* self);
QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self);
void QProgressBar_OnMinimumSizeHint(const QProgressBar* self, intptr_t slot);
QSize* QProgressBar_QBaseMinimumSizeHint(const QProgressBar* self);
int QProgressBar_Orientation(const QProgressBar* self);
void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert);
bool QProgressBar_InvertedAppearance(const QProgressBar* self);
void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection);
int QProgressBar_TextDirection(const QProgressBar* self);
void QProgressBar_SetFormat(QProgressBar* self, libqt_string format);
void QProgressBar_ResetFormat(QProgressBar* self);
libqt_string QProgressBar_Format(const QProgressBar* self);
void QProgressBar_Reset(QProgressBar* self);
void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum);
void QProgressBar_SetMinimum(QProgressBar* self, int minimum);
void QProgressBar_SetMaximum(QProgressBar* self, int maximum);
void QProgressBar_SetValue(QProgressBar* self, int value);
void QProgressBar_SetOrientation(QProgressBar* self, int orientation);
void QProgressBar_ValueChanged(QProgressBar* self, int value);
void QProgressBar_Connect_ValueChanged(QProgressBar* self, intptr_t slot);
bool QProgressBar_Event(QProgressBar* self, QEvent* e);
void QProgressBar_OnEvent(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseEvent(QProgressBar* self, QEvent* e);
void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1);
void QProgressBar_OnPaintEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBasePaintEvent(QProgressBar* self, QPaintEvent* param1);
void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
void QProgressBar_OnInitStyleOption(const QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
libqt_string QProgressBar_Tr2(const char* s, const char* c);
libqt_string QProgressBar_Tr3(const char* s, const char* c, int n);
int QProgressBar_DevType(const QProgressBar* self);
void QProgressBar_OnDevType(const QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseDevType(const QProgressBar* self);
void QProgressBar_SetVisible(QProgressBar* self, bool visible);
void QProgressBar_OnSetVisible(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseSetVisible(QProgressBar* self, bool visible);
int QProgressBar_HeightForWidth(const QProgressBar* self, int param1);
void QProgressBar_OnHeightForWidth(const QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseHeightForWidth(const QProgressBar* self, int param1);
bool QProgressBar_HasHeightForWidth(const QProgressBar* self);
void QProgressBar_OnHasHeightForWidth(const QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseHasHeightForWidth(const QProgressBar* self);
QPaintEngine* QProgressBar_PaintEngine(const QProgressBar* self);
void QProgressBar_OnPaintEngine(const QProgressBar* self, intptr_t slot);
QPaintEngine* QProgressBar_QBasePaintEngine(const QProgressBar* self);
void QProgressBar_MousePressEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_OnMousePressEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseMousePressEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_MouseReleaseEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_OnMouseReleaseEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseMouseReleaseEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_MouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_OnMouseDoubleClickEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseMouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_MouseMoveEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_OnMouseMoveEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseMouseMoveEvent(QProgressBar* self, QMouseEvent* event);
void QProgressBar_WheelEvent(QProgressBar* self, QWheelEvent* event);
void QProgressBar_OnWheelEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseWheelEvent(QProgressBar* self, QWheelEvent* event);
void QProgressBar_KeyPressEvent(QProgressBar* self, QKeyEvent* event);
void QProgressBar_OnKeyPressEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseKeyPressEvent(QProgressBar* self, QKeyEvent* event);
void QProgressBar_KeyReleaseEvent(QProgressBar* self, QKeyEvent* event);
void QProgressBar_OnKeyReleaseEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseKeyReleaseEvent(QProgressBar* self, QKeyEvent* event);
void QProgressBar_FocusInEvent(QProgressBar* self, QFocusEvent* event);
void QProgressBar_OnFocusInEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseFocusInEvent(QProgressBar* self, QFocusEvent* event);
void QProgressBar_FocusOutEvent(QProgressBar* self, QFocusEvent* event);
void QProgressBar_OnFocusOutEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseFocusOutEvent(QProgressBar* self, QFocusEvent* event);
void QProgressBar_EnterEvent(QProgressBar* self, QEnterEvent* event);
void QProgressBar_OnEnterEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseEnterEvent(QProgressBar* self, QEnterEvent* event);
void QProgressBar_LeaveEvent(QProgressBar* self, QEvent* event);
void QProgressBar_OnLeaveEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseLeaveEvent(QProgressBar* self, QEvent* event);
void QProgressBar_MoveEvent(QProgressBar* self, QMoveEvent* event);
void QProgressBar_OnMoveEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseMoveEvent(QProgressBar* self, QMoveEvent* event);
void QProgressBar_ResizeEvent(QProgressBar* self, QResizeEvent* event);
void QProgressBar_OnResizeEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseResizeEvent(QProgressBar* self, QResizeEvent* event);
void QProgressBar_CloseEvent(QProgressBar* self, QCloseEvent* event);
void QProgressBar_OnCloseEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseCloseEvent(QProgressBar* self, QCloseEvent* event);
void QProgressBar_ContextMenuEvent(QProgressBar* self, QContextMenuEvent* event);
void QProgressBar_OnContextMenuEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseContextMenuEvent(QProgressBar* self, QContextMenuEvent* event);
void QProgressBar_TabletEvent(QProgressBar* self, QTabletEvent* event);
void QProgressBar_OnTabletEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseTabletEvent(QProgressBar* self, QTabletEvent* event);
void QProgressBar_ActionEvent(QProgressBar* self, QActionEvent* event);
void QProgressBar_OnActionEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseActionEvent(QProgressBar* self, QActionEvent* event);
void QProgressBar_DragEnterEvent(QProgressBar* self, QDragEnterEvent* event);
void QProgressBar_OnDragEnterEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDragEnterEvent(QProgressBar* self, QDragEnterEvent* event);
void QProgressBar_DragMoveEvent(QProgressBar* self, QDragMoveEvent* event);
void QProgressBar_OnDragMoveEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDragMoveEvent(QProgressBar* self, QDragMoveEvent* event);
void QProgressBar_DragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event);
void QProgressBar_OnDragLeaveEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event);
void QProgressBar_DropEvent(QProgressBar* self, QDropEvent* event);
void QProgressBar_OnDropEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDropEvent(QProgressBar* self, QDropEvent* event);
void QProgressBar_ShowEvent(QProgressBar* self, QShowEvent* event);
void QProgressBar_OnShowEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseShowEvent(QProgressBar* self, QShowEvent* event);
void QProgressBar_HideEvent(QProgressBar* self, QHideEvent* event);
void QProgressBar_OnHideEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseHideEvent(QProgressBar* self, QHideEvent* event);
bool QProgressBar_NativeEvent(QProgressBar* self, libqt_string eventType, void* message, intptr_t* result);
void QProgressBar_OnNativeEvent(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseNativeEvent(QProgressBar* self, libqt_string eventType, void* message, intptr_t* result);
void QProgressBar_ChangeEvent(QProgressBar* self, QEvent* param1);
void QProgressBar_OnChangeEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseChangeEvent(QProgressBar* self, QEvent* param1);
void QProgressBar_InputMethodEvent(QProgressBar* self, QInputMethodEvent* param1);
void QProgressBar_OnInputMethodEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseInputMethodEvent(QProgressBar* self, QInputMethodEvent* param1);
QVariant* QProgressBar_InputMethodQuery(const QProgressBar* self, int param1);
void QProgressBar_OnInputMethodQuery(const QProgressBar* self, intptr_t slot);
QVariant* QProgressBar_QBaseInputMethodQuery(const QProgressBar* self, int param1);
bool QProgressBar_FocusNextPrevChild(QProgressBar* self, bool next);
void QProgressBar_OnFocusNextPrevChild(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseFocusNextPrevChild(QProgressBar* self, bool next);
bool QProgressBar_EventFilter(QProgressBar* self, QObject* watched, QEvent* event);
void QProgressBar_OnEventFilter(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseEventFilter(QProgressBar* self, QObject* watched, QEvent* event);
void QProgressBar_TimerEvent(QProgressBar* self, QTimerEvent* event);
void QProgressBar_OnTimerEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseTimerEvent(QProgressBar* self, QTimerEvent* event);
void QProgressBar_ChildEvent(QProgressBar* self, QChildEvent* event);
void QProgressBar_OnChildEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseChildEvent(QProgressBar* self, QChildEvent* event);
void QProgressBar_CustomEvent(QProgressBar* self, QEvent* event);
void QProgressBar_OnCustomEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseCustomEvent(QProgressBar* self, QEvent* event);
void QProgressBar_ConnectNotify(QProgressBar* self, QMetaMethod* signal);
void QProgressBar_OnConnectNotify(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseConnectNotify(QProgressBar* self, QMetaMethod* signal);
void QProgressBar_DisconnectNotify(QProgressBar* self, QMetaMethod* signal);
void QProgressBar_OnDisconnectNotify(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDisconnectNotify(QProgressBar* self, QMetaMethod* signal);
int QProgressBar_Metric(const QProgressBar* self, int param1);
void QProgressBar_OnMetric(const QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseMetric(const QProgressBar* self, int param1);
void QProgressBar_InitPainter(const QProgressBar* self, QPainter* painter);
void QProgressBar_OnInitPainter(const QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseInitPainter(const QProgressBar* self, QPainter* painter);
QPaintDevice* QProgressBar_Redirected(const QProgressBar* self, QPoint* offset);
void QProgressBar_OnRedirected(const QProgressBar* self, intptr_t slot);
QPaintDevice* QProgressBar_QBaseRedirected(const QProgressBar* self, QPoint* offset);
QPainter* QProgressBar_SharedPainter(const QProgressBar* self);
void QProgressBar_OnSharedPainter(const QProgressBar* self, intptr_t slot);
QPainter* QProgressBar_QBaseSharedPainter(const QProgressBar* self);
void QProgressBar_UpdateMicroFocus(QProgressBar* self);
void QProgressBar_OnUpdateMicroFocus(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseUpdateMicroFocus(QProgressBar* self);
void QProgressBar_Create(QProgressBar* self);
void QProgressBar_OnCreate(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseCreate(QProgressBar* self);
void QProgressBar_Destroy(QProgressBar* self);
void QProgressBar_OnDestroy(QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseDestroy(QProgressBar* self);
bool QProgressBar_FocusNextChild(QProgressBar* self);
void QProgressBar_OnFocusNextChild(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseFocusNextChild(QProgressBar* self);
bool QProgressBar_FocusPreviousChild(QProgressBar* self);
void QProgressBar_OnFocusPreviousChild(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseFocusPreviousChild(QProgressBar* self);
QObject* QProgressBar_Sender(const QProgressBar* self);
void QProgressBar_OnSender(const QProgressBar* self, intptr_t slot);
QObject* QProgressBar_QBaseSender(const QProgressBar* self);
int QProgressBar_SenderSignalIndex(const QProgressBar* self);
void QProgressBar_OnSenderSignalIndex(const QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseSenderSignalIndex(const QProgressBar* self);
int QProgressBar_Receivers(const QProgressBar* self, const char* signal);
void QProgressBar_OnReceivers(const QProgressBar* self, intptr_t slot);
int QProgressBar_QBaseReceivers(const QProgressBar* self, const char* signal);
bool QProgressBar_IsSignalConnected(const QProgressBar* self, QMetaMethod* signal);
void QProgressBar_OnIsSignalConnected(const QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseIsSignalConnected(const QProgressBar* self, QMetaMethod* signal);
void QProgressBar_Delete(QProgressBar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
