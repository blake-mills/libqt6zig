#pragma once
#ifndef SRCC_LIBQSCROLLER_H
#define SRCC_LIBQSCROLLER_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QScroller QScroller;
typedef struct QScrollerProperties QScrollerProperties;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QScroller::Input Input; // C++ enum
typedef QScroller::ScrollerGestureType ScrollerGestureType; // C++ enum
typedef QScroller::State State; // C++ enum
#else
typedef int Input; // C ABI enum
typedef int ScrollerGestureType; // C ABI enum
typedef int State; // C ABI enum
#endif

QMetaObject* QScroller_MetaObject(const QScroller* self);
void* QScroller_Metacast(QScroller* self, const char* param1);
int QScroller_Metacall(QScroller* self, int param1, int param2, void** param3);
libqt_string QScroller_Tr(const char* s);
bool QScroller_HasScroller(QObject* target);
QScroller* QScroller_Scroller(QObject* target);
QScroller* QScroller_ScrollerWithTarget(QObject* target);
int QScroller_GrabGesture(QObject* target);
int QScroller_GrabbedGesture(QObject* target);
void QScroller_UngrabGesture(QObject* target);
libqt_list /* of QScroller* */ QScroller_ActiveScrollers();
QObject* QScroller_Target(const QScroller* self);
int QScroller_State(const QScroller* self);
bool QScroller_HandleInput(QScroller* self, int input, QPointF* position);
void QScroller_Stop(QScroller* self);
QPointF* QScroller_Velocity(const QScroller* self);
QPointF* QScroller_FinalPosition(const QScroller* self);
QPointF* QScroller_PixelPerMeter(const QScroller* self);
QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self);
void QScroller_SetSnapPositionsX(QScroller* self, libqt_list /* of double */ positions);
void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval);
void QScroller_SetSnapPositionsY(QScroller* self, libqt_list /* of double */ positions);
void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval);
void QScroller_SetScrollerProperties(QScroller* self, QScrollerProperties* prop);
void QScroller_ScrollTo(QScroller* self, QPointF* pos);
void QScroller_ScrollTo2(QScroller* self, QPointF* pos, int scrollTime);
void QScroller_EnsureVisible(QScroller* self, QRectF* rect, double xmargin, double ymargin);
void QScroller_EnsureVisible2(QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime);
void QScroller_ResendPrepareEvent(QScroller* self);
void QScroller_StateChanged(QScroller* self, int newstate);
void QScroller_Connect_StateChanged(QScroller* self, intptr_t slot);
void QScroller_ScrollerPropertiesChanged(QScroller* self, QScrollerProperties* param1);
void QScroller_Connect_ScrollerPropertiesChanged(QScroller* self, intptr_t slot);
libqt_string QScroller_Tr2(const char* s, const char* c);
libqt_string QScroller_Tr3(const char* s, const char* c, int n);
int QScroller_GrabGesture2(QObject* target, int gestureType);
bool QScroller_HandleInput3(QScroller* self, int input, QPointF* position, long long timestamp);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
