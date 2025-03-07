#pragma once
#ifndef SRCC_LIBQABSTRACTSLIDER_H
#define SRCC_LIBQABSTRACTSLIDER_H

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
typedef struct QAbstractSlider QAbstractSlider;
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
typedef QAbstractSlider::SliderAction SliderAction; // C++ enum
#else
typedef int SliderAction; // C ABI enum
typedef int SliderChange; // C ABI enum
#endif

QAbstractSlider* QAbstractSlider_new(QWidget* parent);
QAbstractSlider* QAbstractSlider_new2();
QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self);
void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1);
int QAbstractSlider_Metacall(QAbstractSlider* self, int param1, int param2, void** param3);
void QAbstractSlider_OnMetacall(QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseMetacall(QAbstractSlider* self, int param1, int param2, void** param3);
libqt_string QAbstractSlider_Tr(const char* s);
int QAbstractSlider_Orientation(const QAbstractSlider* self);
void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum);
int QAbstractSlider_Minimum(const QAbstractSlider* self);
void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum);
int QAbstractSlider_Maximum(const QAbstractSlider* self);
void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep);
int QAbstractSlider_SingleStep(const QAbstractSlider* self);
void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep);
int QAbstractSlider_PageStep(const QAbstractSlider* self);
void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable);
bool QAbstractSlider_HasTracking(const QAbstractSlider* self);
void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown);
bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self);
void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition);
int QAbstractSlider_SliderPosition(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance);
bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls);
bool QAbstractSlider_InvertedControls(const QAbstractSlider* self);
int QAbstractSlider_Value(const QAbstractSlider* self);
void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action);
void QAbstractSlider_SetValue(QAbstractSlider* self, int value);
void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation);
void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max);
void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value);
void QAbstractSlider_Connect_ValueChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderPressed(QAbstractSlider* self);
void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position);
void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderReleased(QAbstractSlider* self);
void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max);
void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action);
void QAbstractSlider_Connect_ActionTriggered(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e);
libqt_string QAbstractSlider_Tr2(const char* s, const char* c);
libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n);
int QAbstractSlider_DevType(const QAbstractSlider* self);
void QAbstractSlider_OnDevType(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseDevType(const QAbstractSlider* self);
void QAbstractSlider_SetVisible(QAbstractSlider* self, bool visible);
void QAbstractSlider_OnSetVisible(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetVisible(QAbstractSlider* self, bool visible);
QSize* QAbstractSlider_SizeHint(const QAbstractSlider* self);
void QAbstractSlider_OnSizeHint(const QAbstractSlider* self, intptr_t slot);
QSize* QAbstractSlider_QBaseSizeHint(const QAbstractSlider* self);
QSize* QAbstractSlider_MinimumSizeHint(const QAbstractSlider* self);
void QAbstractSlider_OnMinimumSizeHint(const QAbstractSlider* self, intptr_t slot);
QSize* QAbstractSlider_QBaseMinimumSizeHint(const QAbstractSlider* self);
int QAbstractSlider_HeightForWidth(const QAbstractSlider* self, int param1);
void QAbstractSlider_OnHeightForWidth(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseHeightForWidth(const QAbstractSlider* self, int param1);
bool QAbstractSlider_HasHeightForWidth(const QAbstractSlider* self);
void QAbstractSlider_OnHasHeightForWidth(const QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseHasHeightForWidth(const QAbstractSlider* self);
QPaintEngine* QAbstractSlider_PaintEngine(const QAbstractSlider* self);
void QAbstractSlider_OnPaintEngine(const QAbstractSlider* self, intptr_t slot);
QPaintEngine* QAbstractSlider_QBasePaintEngine(const QAbstractSlider* self);
void QAbstractSlider_MousePressEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_OnMousePressEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseMousePressEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_MouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_OnMouseReleaseEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_OnMouseDoubleClickEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_MouseMoveEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_OnMouseMoveEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event);
void QAbstractSlider_KeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event);
void QAbstractSlider_OnKeyReleaseEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event);
void QAbstractSlider_FocusInEvent(QAbstractSlider* self, QFocusEvent* event);
void QAbstractSlider_OnFocusInEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseFocusInEvent(QAbstractSlider* self, QFocusEvent* event);
void QAbstractSlider_FocusOutEvent(QAbstractSlider* self, QFocusEvent* event);
void QAbstractSlider_OnFocusOutEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseFocusOutEvent(QAbstractSlider* self, QFocusEvent* event);
void QAbstractSlider_EnterEvent(QAbstractSlider* self, QEnterEvent* event);
void QAbstractSlider_OnEnterEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseEnterEvent(QAbstractSlider* self, QEnterEvent* event);
void QAbstractSlider_LeaveEvent(QAbstractSlider* self, QEvent* event);
void QAbstractSlider_OnLeaveEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseLeaveEvent(QAbstractSlider* self, QEvent* event);
void QAbstractSlider_PaintEvent(QAbstractSlider* self, QPaintEvent* event);
void QAbstractSlider_OnPaintEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBasePaintEvent(QAbstractSlider* self, QPaintEvent* event);
void QAbstractSlider_MoveEvent(QAbstractSlider* self, QMoveEvent* event);
void QAbstractSlider_OnMoveEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseMoveEvent(QAbstractSlider* self, QMoveEvent* event);
void QAbstractSlider_ResizeEvent(QAbstractSlider* self, QResizeEvent* event);
void QAbstractSlider_OnResizeEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseResizeEvent(QAbstractSlider* self, QResizeEvent* event);
void QAbstractSlider_CloseEvent(QAbstractSlider* self, QCloseEvent* event);
void QAbstractSlider_OnCloseEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseCloseEvent(QAbstractSlider* self, QCloseEvent* event);
void QAbstractSlider_ContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event);
void QAbstractSlider_OnContextMenuEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event);
void QAbstractSlider_TabletEvent(QAbstractSlider* self, QTabletEvent* event);
void QAbstractSlider_OnTabletEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseTabletEvent(QAbstractSlider* self, QTabletEvent* event);
void QAbstractSlider_ActionEvent(QAbstractSlider* self, QActionEvent* event);
void QAbstractSlider_OnActionEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseActionEvent(QAbstractSlider* self, QActionEvent* event);
void QAbstractSlider_DragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event);
void QAbstractSlider_OnDragEnterEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event);
void QAbstractSlider_DragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event);
void QAbstractSlider_OnDragMoveEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event);
void QAbstractSlider_DragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event);
void QAbstractSlider_OnDragLeaveEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event);
void QAbstractSlider_DropEvent(QAbstractSlider* self, QDropEvent* event);
void QAbstractSlider_OnDropEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDropEvent(QAbstractSlider* self, QDropEvent* event);
void QAbstractSlider_ShowEvent(QAbstractSlider* self, QShowEvent* event);
void QAbstractSlider_OnShowEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseShowEvent(QAbstractSlider* self, QShowEvent* event);
void QAbstractSlider_HideEvent(QAbstractSlider* self, QHideEvent* event);
void QAbstractSlider_OnHideEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseHideEvent(QAbstractSlider* self, QHideEvent* event);
bool QAbstractSlider_NativeEvent(QAbstractSlider* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractSlider_OnNativeEvent(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseNativeEvent(QAbstractSlider* self, libqt_string eventType, void* message, intptr_t* result);
void QAbstractSlider_InputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1);
void QAbstractSlider_OnInputMethodEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1);
QVariant* QAbstractSlider_InputMethodQuery(const QAbstractSlider* self, int param1);
void QAbstractSlider_OnInputMethodQuery(const QAbstractSlider* self, intptr_t slot);
QVariant* QAbstractSlider_QBaseInputMethodQuery(const QAbstractSlider* self, int param1);
bool QAbstractSlider_FocusNextPrevChild(QAbstractSlider* self, bool next);
void QAbstractSlider_OnFocusNextPrevChild(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseFocusNextPrevChild(QAbstractSlider* self, bool next);
bool QAbstractSlider_EventFilter(QAbstractSlider* self, QObject* watched, QEvent* event);
void QAbstractSlider_OnEventFilter(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseEventFilter(QAbstractSlider* self, QObject* watched, QEvent* event);
void QAbstractSlider_ChildEvent(QAbstractSlider* self, QChildEvent* event);
void QAbstractSlider_OnChildEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseChildEvent(QAbstractSlider* self, QChildEvent* event);
void QAbstractSlider_CustomEvent(QAbstractSlider* self, QEvent* event);
void QAbstractSlider_OnCustomEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseCustomEvent(QAbstractSlider* self, QEvent* event);
void QAbstractSlider_ConnectNotify(QAbstractSlider* self, QMetaMethod* signal);
void QAbstractSlider_OnConnectNotify(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseConnectNotify(QAbstractSlider* self, QMetaMethod* signal);
void QAbstractSlider_DisconnectNotify(QAbstractSlider* self, QMetaMethod* signal);
void QAbstractSlider_OnDisconnectNotify(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDisconnectNotify(QAbstractSlider* self, QMetaMethod* signal);
int QAbstractSlider_Metric(const QAbstractSlider* self, int param1);
void QAbstractSlider_OnMetric(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseMetric(const QAbstractSlider* self, int param1);
void QAbstractSlider_InitPainter(const QAbstractSlider* self, QPainter* painter);
void QAbstractSlider_OnInitPainter(const QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseInitPainter(const QAbstractSlider* self, QPainter* painter);
QPaintDevice* QAbstractSlider_Redirected(const QAbstractSlider* self, QPoint* offset);
void QAbstractSlider_OnRedirected(const QAbstractSlider* self, intptr_t slot);
QPaintDevice* QAbstractSlider_QBaseRedirected(const QAbstractSlider* self, QPoint* offset);
QPainter* QAbstractSlider_SharedPainter(const QAbstractSlider* self);
void QAbstractSlider_OnSharedPainter(const QAbstractSlider* self, intptr_t slot);
QPainter* QAbstractSlider_QBaseSharedPainter(const QAbstractSlider* self);
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action);
void QAbstractSlider_OnSetRepeatAction(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action);
int QAbstractSlider_RepeatAction(const QAbstractSlider* self);
void QAbstractSlider_OnRepeatAction(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self);
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
void QAbstractSlider_OnSetRepeatAction2(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
void QAbstractSlider_OnSetRepeatAction3(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
void QAbstractSlider_UpdateMicroFocus(QAbstractSlider* self);
void QAbstractSlider_OnUpdateMicroFocus(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseUpdateMicroFocus(QAbstractSlider* self);
void QAbstractSlider_Create(QAbstractSlider* self);
void QAbstractSlider_OnCreate(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseCreate(QAbstractSlider* self);
void QAbstractSlider_Destroy(QAbstractSlider* self);
void QAbstractSlider_OnDestroy(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseDestroy(QAbstractSlider* self);
bool QAbstractSlider_FocusNextChild(QAbstractSlider* self);
void QAbstractSlider_OnFocusNextChild(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseFocusNextChild(QAbstractSlider* self);
bool QAbstractSlider_FocusPreviousChild(QAbstractSlider* self);
void QAbstractSlider_OnFocusPreviousChild(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseFocusPreviousChild(QAbstractSlider* self);
QObject* QAbstractSlider_Sender(const QAbstractSlider* self);
void QAbstractSlider_OnSender(const QAbstractSlider* self, intptr_t slot);
QObject* QAbstractSlider_QBaseSender(const QAbstractSlider* self);
int QAbstractSlider_SenderSignalIndex(const QAbstractSlider* self);
void QAbstractSlider_OnSenderSignalIndex(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseSenderSignalIndex(const QAbstractSlider* self);
int QAbstractSlider_Receivers(const QAbstractSlider* self, const char* signal);
void QAbstractSlider_OnReceivers(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseReceivers(const QAbstractSlider* self, const char* signal);
bool QAbstractSlider_IsSignalConnected(const QAbstractSlider* self, QMetaMethod* signal);
void QAbstractSlider_OnIsSignalConnected(const QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseIsSignalConnected(const QAbstractSlider* self, QMetaMethod* signal);
void QAbstractSlider_Delete(QAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
