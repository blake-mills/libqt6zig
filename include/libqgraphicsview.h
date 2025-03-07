#pragma once
#ifndef SRCC_LIBQGRAPHICSVIEW_H
#define SRCC_LIBQGRAPHICSVIEW_H

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
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QBrush QBrush;
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
typedef struct QFrame QFrame;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
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
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QGraphicsView::CacheMode CacheMode; // C++ QFlags
typedef QGraphicsView::CacheModeFlag CacheModeFlag; // C++ enum
typedef QGraphicsView::DragMode DragMode; // C++ enum
typedef QGraphicsView::OptimizationFlag OptimizationFlag; // C++ enum
typedef QGraphicsView::OptimizationFlags OptimizationFlags; // C++ QFlags
typedef QGraphicsView::ViewportAnchor ViewportAnchor; // C++ enum
typedef QGraphicsView::ViewportUpdateMode ViewportUpdateMode; // C++ enum
#else
typedef int CacheMode; // C ABI QFlags
typedef int CacheModeFlag; // C ABI enum
typedef int DragMode; // C ABI enum
typedef int OptimizationFlag; // C ABI enum
typedef int OptimizationFlags; // C ABI QFlags
typedef int ViewportAnchor; // C ABI enum
typedef int ViewportUpdateMode; // C ABI enum
#endif

QGraphicsView* QGraphicsView_new(QWidget* parent);
QGraphicsView* QGraphicsView_new2();
QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self);
void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1);
int QGraphicsView_Metacall(QGraphicsView* self, int param1, int param2, void** param3);
void QGraphicsView_OnMetacall(QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseMetacall(QGraphicsView* self, int param1, int param2, void** param3);
libqt_string QGraphicsView_Tr(const char* s);
QSize* QGraphicsView_SizeHint(const QGraphicsView* self);
void QGraphicsView_OnSizeHint(const QGraphicsView* self, intptr_t slot);
QSize* QGraphicsView_QBaseSizeHint(const QGraphicsView* self);
int QGraphicsView_RenderHints(const QGraphicsView* self);
void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint);
void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_Alignment(const QGraphicsView* self);
void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment);
int QGraphicsView_TransformationAnchor(const QGraphicsView* self);
void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ResizeAnchor(const QGraphicsView* self);
void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self);
void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode);
int QGraphicsView_OptimizationFlags(const QGraphicsView* self);
void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag);
void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags);
int QGraphicsView_DragMode(const QGraphicsView* self);
void QGraphicsView_SetDragMode(QGraphicsView* self, int mode);
int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self);
void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode);
QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self);
int QGraphicsView_CacheMode(const QGraphicsView* self);
void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_ResetCachedContent(QGraphicsView* self);
bool QGraphicsView_IsInteractive(const QGraphicsView* self);
void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self);
void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_SceneRect(const QGraphicsView* self);
void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QTransform* QGraphicsView_Transform(const QGraphicsView* self);
QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self);
bool QGraphicsView_IsTransformed(const QGraphicsView* self);
void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix);
void QGraphicsView_ResetTransform(QGraphicsView* self);
void QGraphicsView_Rotate(QGraphicsView* self, double angle);
void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy);
void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv);
void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy);
void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos);
void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y);
void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect);
void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect);
void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_Render(QGraphicsView* self, QPainter* painter);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items(const QGraphicsView* self);
libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items2(const QGraphicsView* self, int x, int y);
libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h);
libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path);
QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y);
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query);
void QGraphicsView_OnInputMethodQuery(const QGraphicsView* self, intptr_t slot);
QVariant* QGraphicsView_QBaseInputMethodQuery(const QGraphicsView* self, int query);
QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, libqt_list /* of QRectF* */ rects);
void QGraphicsView_InvalidateScene(QGraphicsView* self);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_Connect_RubberBandChanged(QGraphicsView* self, intptr_t slot);
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget);
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget);
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event);
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event);
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect);
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect);
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect);
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect);
libqt_string QGraphicsView_Tr2(const char* s, const char* c);
libqt_string QGraphicsView_Tr3(const char* s, const char* c, int n);
void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled);
void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled);
void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode);
void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode);
void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode);
void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target);
void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source);
void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode);
libqt_list /* of QGraphicsItem* */ QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode);
void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect);
void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers);
QSize* QGraphicsView_MinimumSizeHint(const QGraphicsView* self);
void QGraphicsView_OnMinimumSizeHint(const QGraphicsView* self, intptr_t slot);
QSize* QGraphicsView_QBaseMinimumSizeHint(const QGraphicsView* self);
bool QGraphicsView_EventFilter(QGraphicsView* self, QObject* param1, QEvent* param2);
void QGraphicsView_OnEventFilter(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseEventFilter(QGraphicsView* self, QObject* param1, QEvent* param2);
void QGraphicsView_ChangeEvent(QGraphicsView* self, QEvent* param1);
void QGraphicsView_OnChangeEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseChangeEvent(QGraphicsView* self, QEvent* param1);
int QGraphicsView_DevType(const QGraphicsView* self);
void QGraphicsView_OnDevType(const QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseDevType(const QGraphicsView* self);
void QGraphicsView_SetVisible(QGraphicsView* self, bool visible);
void QGraphicsView_OnSetVisible(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseSetVisible(QGraphicsView* self, bool visible);
int QGraphicsView_HeightForWidth(const QGraphicsView* self, int param1);
void QGraphicsView_OnHeightForWidth(const QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseHeightForWidth(const QGraphicsView* self, int param1);
bool QGraphicsView_HasHeightForWidth(const QGraphicsView* self);
void QGraphicsView_OnHasHeightForWidth(const QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseHasHeightForWidth(const QGraphicsView* self);
QPaintEngine* QGraphicsView_PaintEngine(const QGraphicsView* self);
void QGraphicsView_OnPaintEngine(const QGraphicsView* self, intptr_t slot);
QPaintEngine* QGraphicsView_QBasePaintEngine(const QGraphicsView* self);
void QGraphicsView_EnterEvent(QGraphicsView* self, QEnterEvent* event);
void QGraphicsView_OnEnterEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseEnterEvent(QGraphicsView* self, QEnterEvent* event);
void QGraphicsView_LeaveEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnLeaveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseLeaveEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_MoveEvent(QGraphicsView* self, QMoveEvent* event);
void QGraphicsView_OnMoveEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseMoveEvent(QGraphicsView* self, QMoveEvent* event);
void QGraphicsView_CloseEvent(QGraphicsView* self, QCloseEvent* event);
void QGraphicsView_OnCloseEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseCloseEvent(QGraphicsView* self, QCloseEvent* event);
void QGraphicsView_TabletEvent(QGraphicsView* self, QTabletEvent* event);
void QGraphicsView_OnTabletEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseTabletEvent(QGraphicsView* self, QTabletEvent* event);
void QGraphicsView_ActionEvent(QGraphicsView* self, QActionEvent* event);
void QGraphicsView_OnActionEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseActionEvent(QGraphicsView* self, QActionEvent* event);
void QGraphicsView_HideEvent(QGraphicsView* self, QHideEvent* event);
void QGraphicsView_OnHideEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseHideEvent(QGraphicsView* self, QHideEvent* event);
bool QGraphicsView_NativeEvent(QGraphicsView* self, libqt_string eventType, void* message, intptr_t* result);
void QGraphicsView_OnNativeEvent(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseNativeEvent(QGraphicsView* self, libqt_string eventType, void* message, intptr_t* result);
void QGraphicsView_TimerEvent(QGraphicsView* self, QTimerEvent* event);
void QGraphicsView_OnTimerEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseTimerEvent(QGraphicsView* self, QTimerEvent* event);
void QGraphicsView_ChildEvent(QGraphicsView* self, QChildEvent* event);
void QGraphicsView_OnChildEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseChildEvent(QGraphicsView* self, QChildEvent* event);
void QGraphicsView_CustomEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_OnCustomEvent(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseCustomEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_ConnectNotify(QGraphicsView* self, QMetaMethod* signal);
void QGraphicsView_OnConnectNotify(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseConnectNotify(QGraphicsView* self, QMetaMethod* signal);
void QGraphicsView_DisconnectNotify(QGraphicsView* self, QMetaMethod* signal);
void QGraphicsView_OnDisconnectNotify(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDisconnectNotify(QGraphicsView* self, QMetaMethod* signal);
QSize* QGraphicsView_ViewportSizeHint(const QGraphicsView* self);
void QGraphicsView_OnViewportSizeHint(const QGraphicsView* self, intptr_t slot);
QSize* QGraphicsView_QBaseViewportSizeHint(const QGraphicsView* self);
void QGraphicsView_InitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option);
void QGraphicsView_OnInitStyleOption(const QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseInitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option);
int QGraphicsView_Metric(const QGraphicsView* self, int param1);
void QGraphicsView_OnMetric(const QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseMetric(const QGraphicsView* self, int param1);
void QGraphicsView_InitPainter(const QGraphicsView* self, QPainter* painter);
void QGraphicsView_OnInitPainter(const QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseInitPainter(const QGraphicsView* self, QPainter* painter);
QPaintDevice* QGraphicsView_Redirected(const QGraphicsView* self, QPoint* offset);
void QGraphicsView_OnRedirected(const QGraphicsView* self, intptr_t slot);
QPaintDevice* QGraphicsView_QBaseRedirected(const QGraphicsView* self, QPoint* offset);
QPainter* QGraphicsView_SharedPainter(const QGraphicsView* self);
void QGraphicsView_OnSharedPainter(const QGraphicsView* self, intptr_t slot);
QPainter* QGraphicsView_QBaseSharedPainter(const QGraphicsView* self);
void QGraphicsView_SetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom);
void QGraphicsView_OnSetViewportMargins(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseSetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom);
QMargins* QGraphicsView_ViewportMargins(const QGraphicsView* self);
void QGraphicsView_OnViewportMargins(const QGraphicsView* self, intptr_t slot);
QMargins* QGraphicsView_QBaseViewportMargins(const QGraphicsView* self);
void QGraphicsView_DrawFrame(QGraphicsView* self, QPainter* param1);
void QGraphicsView_OnDrawFrame(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDrawFrame(QGraphicsView* self, QPainter* param1);
void QGraphicsView_UpdateMicroFocus(QGraphicsView* self);
void QGraphicsView_OnUpdateMicroFocus(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseUpdateMicroFocus(QGraphicsView* self);
void QGraphicsView_Create(QGraphicsView* self);
void QGraphicsView_OnCreate(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseCreate(QGraphicsView* self);
void QGraphicsView_Destroy(QGraphicsView* self);
void QGraphicsView_OnDestroy(QGraphicsView* self, intptr_t slot);
void QGraphicsView_QBaseDestroy(QGraphicsView* self);
bool QGraphicsView_FocusNextChild(QGraphicsView* self);
void QGraphicsView_OnFocusNextChild(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseFocusNextChild(QGraphicsView* self);
bool QGraphicsView_FocusPreviousChild(QGraphicsView* self);
void QGraphicsView_OnFocusPreviousChild(QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseFocusPreviousChild(QGraphicsView* self);
QObject* QGraphicsView_Sender(const QGraphicsView* self);
void QGraphicsView_OnSender(const QGraphicsView* self, intptr_t slot);
QObject* QGraphicsView_QBaseSender(const QGraphicsView* self);
int QGraphicsView_SenderSignalIndex(const QGraphicsView* self);
void QGraphicsView_OnSenderSignalIndex(const QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseSenderSignalIndex(const QGraphicsView* self);
int QGraphicsView_Receivers(const QGraphicsView* self, const char* signal);
void QGraphicsView_OnReceivers(const QGraphicsView* self, intptr_t slot);
int QGraphicsView_QBaseReceivers(const QGraphicsView* self, const char* signal);
bool QGraphicsView_IsSignalConnected(const QGraphicsView* self, QMetaMethod* signal);
void QGraphicsView_OnIsSignalConnected(const QGraphicsView* self, intptr_t slot);
bool QGraphicsView_QBaseIsSignalConnected(const QGraphicsView* self, QMetaMethod* signal);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
