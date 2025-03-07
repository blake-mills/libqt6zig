#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgridlayout.h>
#include "libqgridlayout.h"
#include "libqgridlayout.hxx"

QGridLayout* QGridLayout_new(QWidget* parent) {
    return new VirtualQGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
    return new VirtualQGridLayout();
}

QMetaObject* QGridLayout_MetaObject(const QGridLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGridLayout_Metacast(QGridLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGridLayout_Metacall(QGridLayout* self, int param1, int param2, void** param3) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGridLayout_OnMetacall(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Metacall_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGridLayout_QBaseMetacall(QGridLayout* self, int param1, int param2, void** param3) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Metacall_IsBase(true);
        return vqgridlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGridLayout_Tr(const char* s) {
    QString _ret = QGridLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
    self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(const QGridLayout* self) {
    return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
    self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(const QGridLayout* self) {
    return self->verticalSpacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
    self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
    self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(const QGridLayout* self, int row) {
    return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(const QGridLayout* self, int column) {
    return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
    self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
    self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row) {
    return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column) {
    return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(const QGridLayout* self) {
    return self->columnCount();
}

int QGridLayout_RowCount(const QGridLayout* self) {
    return self->rowCount();
}

QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column) {
    return new QRect(self->cellRect(static_cast<int>(row), static_cast<int>(column)));
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
    self->addWidget(w);
}

void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner) {
    self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_OriginCorner(const QGridLayout* self) {
    return static_cast<int>(self->originCorner());
}

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
    return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient) {
    self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
    self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

libqt_string QGridLayout_Tr2(const char* s, const char* c) {
    QString _ret = QGridLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGridLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

int QGridLayout_IndexOfWithQLayoutItem(const QGridLayout* self, QLayoutItem* param1) {
    if (auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self)) {
        return self->indexOf(param1);
    } else {
        return self->indexOf(param1);
    }
}

// Derived class handler implementation
QSize* QGridLayout_SizeHint(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return new QSize(vqgridlayout->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseSizeHint(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_SizeHint_IsBase(true);
        return new QSize(vqgridlayout->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSizeHint(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return new QSize(vqgridlayout->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseMinimumSize(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MinimumSize_IsBase(true);
        return new QSize(vqgridlayout->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumSize(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MinimumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return new QSize(vqgridlayout->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseMaximumSize(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MaximumSize_IsBase(true);
        return new QSize(vqgridlayout->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMaximumSize(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MaximumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    } else {
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QGridLayout_QBaseSetSpacing(QGridLayout* self, int spacing) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SetSpacing_IsBase(true);
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    } else {
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SetSpacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Spacing(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->spacing();
    } else {
        return vqgridlayout->spacing();
    }
}

// Base class handler implementation
int QGridLayout_QBaseSpacing(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Spacing_IsBase(true);
        return vqgridlayout->spacing();
    } else {
        return vqgridlayout->spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacing(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Spacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->hasHeightForWidth();
    } else {
        return vqgridlayout->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QGridLayout_QBaseHasHeightForWidth(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_HasHeightForWidth_IsBase(true);
        return vqgridlayout->hasHeightForWidth();
    } else {
        return vqgridlayout->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHasHeightForWidth(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGridLayout_QBaseHeightForWidth(const QGridLayout* self, int param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_HeightForWidth_IsBase(true);
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHeightForWidth(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGridLayout_QBaseMinimumHeightForWidth(const QGridLayout* self, int param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MinimumHeightForWidth_IsBase(true);
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumHeightForWidth(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_ExpandingDirections(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return static_cast<int>(vqgridlayout->expandingDirections());
    } else {
        return static_cast<int>(vqgridlayout->expandingDirections());
    }
}

// Base class handler implementation
int QGridLayout_QBaseExpandingDirections(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqgridlayout->expandingDirections());
    } else {
        return static_cast<int>(vqgridlayout->expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnExpandingDirections(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_Invalidate(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->invalidate();
    } else {
        vqgridlayout->invalidate();
    }
}

// Base class handler implementation
void QGridLayout_QBaseInvalidate(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Invalidate_IsBase(true);
        vqgridlayout->invalidate();
    } else {
        vqgridlayout->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgridlayout->itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseItemAt(const QGridLayout* self, int index) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ItemAt_IsBase(true);
        return vqgridlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgridlayout->itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnItemAt(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ItemAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->takeAt(static_cast<int>(index));
    } else {
        return vqgridlayout->takeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseTakeAt(QGridLayout* self, int index) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_TakeAt_IsBase(true);
        return vqgridlayout->takeAt(static_cast<int>(index));
    } else {
        return vqgridlayout->takeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_TakeAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Count(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->count();
    } else {
        return vqgridlayout->count();
    }
}

// Base class handler implementation
int QGridLayout_QBaseCount(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Count_IsBase(true);
        return vqgridlayout->count();
    } else {
        return vqgridlayout->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCount(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Count_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setGeometry(*geometry);
    } else {
        vqgridlayout->setGeometry(*geometry);
    }
}

// Base class handler implementation
void QGridLayout_QBaseSetGeometry(QGridLayout* self, QRect* geometry) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SetGeometry_IsBase(true);
        vqgridlayout->setGeometry(*geometry);
    } else {
        vqgridlayout->setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->addItem(param1);
    } else {
        vqgridlayout->addItem(param1);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddItemWithQLayoutItem_IsBase(true);
        vqgridlayout->addItem(param1);
    } else {
        vqgridlayout->addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddItemWithQLayoutItem(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddItemWithQLayoutItem_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddItemWithQLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QGridLayout_Geometry(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return new QRect(vqgridlayout->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Base class handler implementation
QRect* QGridLayout_QBaseGeometry(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Geometry_IsBase(true);
        return new QRect(vqgridlayout->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnGeometry(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Geometry_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_IndexOf(const QGridLayout* self, QWidget* param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->indexOf(param1);
    } else {
        return vqgridlayout->indexOf(param1);
    }
}

// Base class handler implementation
int QGridLayout_QBaseIndexOf(const QGridLayout* self, QWidget* param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IndexOf_IsBase(true);
        return vqgridlayout->indexOf(param1);
    } else {
        return vqgridlayout->indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIndexOf(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IndexOf_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_IsEmpty(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->isEmpty();
    } else {
        return vqgridlayout->isEmpty();
    }
}

// Base class handler implementation
bool QGridLayout_QBaseIsEmpty(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IsEmpty_IsBase(true);
        return vqgridlayout->isEmpty();
    } else {
        return vqgridlayout->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIsEmpty(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_ControlTypes(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return static_cast<int>(vqgridlayout->controlTypes());
    } else {
        return static_cast<int>(vqgridlayout->controlTypes());
    }
}

// Base class handler implementation
int QGridLayout_QBaseControlTypes(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqgridlayout->controlTypes());
    } else {
        return static_cast<int>(vqgridlayout->controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnControlTypes(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_ControlTypes_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_ReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ReplaceWidget_IsBase(true);
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnReplaceWidget(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QGridLayout_Layout(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->layout();
    } else {
        return vqgridlayout->layout();
    }
}

// Base class handler implementation
QLayout* QGridLayout_QBaseLayout(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Layout_IsBase(true);
        return vqgridlayout->layout();
    } else {
        return vqgridlayout->layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnLayout(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Layout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->childEvent(e);
    } else {
        vqgridlayout->childEvent(e);
    }
}

// Base class handler implementation
void QGridLayout_QBaseChildEvent(QGridLayout* self, QChildEvent* e) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ChildEvent_IsBase(true);
        vqgridlayout->childEvent(e);
    } else {
        vqgridlayout->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnChildEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ChildEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_Event(QGridLayout* self, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->event(event);
    } else {
        return vqgridlayout->event(event);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseEvent(QGridLayout* self, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Event_IsBase(true);
        return vqgridlayout->event(event);
    } else {
        return vqgridlayout->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_Event_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_EventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->eventFilter(watched, event);
    } else {
        return vqgridlayout->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseEventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_EventFilter_IsBase(true);
        return vqgridlayout->eventFilter(watched, event);
    } else {
        return vqgridlayout->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEventFilter(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_EventFilter_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->timerEvent(event);
    } else {
        vqgridlayout->timerEvent(event);
    }
}

// Base class handler implementation
void QGridLayout_QBaseTimerEvent(QGridLayout* self, QTimerEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_TimerEvent_IsBase(true);
        vqgridlayout->timerEvent(event);
    } else {
        vqgridlayout->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTimerEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_TimerEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->customEvent(event);
    } else {
        vqgridlayout->customEvent(event);
    }
}

// Base class handler implementation
void QGridLayout_QBaseCustomEvent(QGridLayout* self, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_CustomEvent_IsBase(true);
        vqgridlayout->customEvent(event);
    } else {
        vqgridlayout->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCustomEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_CustomEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_ConnectNotify(QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->connectNotify(*signal);
    } else {
        vqgridlayout->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGridLayout_QBaseConnectNotify(QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ConnectNotify_IsBase(true);
        vqgridlayout->connectNotify(*signal);
    } else {
        vqgridlayout->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnConnectNotify(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_DisconnectNotify(QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->disconnectNotify(*signal);
    } else {
        vqgridlayout->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGridLayout_QBaseDisconnectNotify(QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_DisconnectNotify_IsBase(true);
        vqgridlayout->disconnectNotify(*signal);
    } else {
        vqgridlayout->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnDisconnectNotify(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QGridLayout_Widget(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->widget();
    } else {
        return vqgridlayout->widget();
    }
}

// Base class handler implementation
QWidget* QGridLayout_QBaseWidget(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Widget_IsBase(true);
        return vqgridlayout->widget();
    } else {
        return vqgridlayout->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnWidget(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Widget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QGridLayout_SpacerItem(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->spacerItem();
    } else {
        return vqgridlayout->spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QGridLayout_QBaseSpacerItem(QGridLayout* self) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SpacerItem_IsBase(true);
        return vqgridlayout->spacerItem();
    } else {
        return vqgridlayout->spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacerItem(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_SpacerItem_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->widgetEvent(param1);
    } else {
        vqgridlayout->widgetEvent(param1);
    }
}

// Base class handler implementation
void QGridLayout_QBaseWidgetEvent(QGridLayout* self, QEvent* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_WidgetEvent_IsBase(true);
        vqgridlayout->widgetEvent(param1);
    } else {
        vqgridlayout->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnWidgetEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->addChildLayout(l);
    } else {
        vqgridlayout->addChildLayout(l);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddChildLayout(QGridLayout* self, QLayout* l) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddChildLayout_IsBase(true);
        vqgridlayout->addChildLayout(l);
    } else {
        vqgridlayout->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddChildLayout(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->addChildWidget(w);
    } else {
        vqgridlayout->addChildWidget(w);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddChildWidget(QGridLayout* self, QWidget* w) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddChildWidget_IsBase(true);
        vqgridlayout->addChildWidget(w);
    } else {
        vqgridlayout->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddChildWidget(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->adoptLayout(layout);
    } else {
        return vqgridlayout->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseAdoptLayout(QGridLayout* self, QLayout* layout) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AdoptLayout_IsBase(true);
        return vqgridlayout->adoptLayout(layout);
    } else {
        return vqgridlayout->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAdoptLayout(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->setQGridLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QGridLayout_AlignmentRect(const QGridLayout* self, QRect* param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return new QRect(vqgridlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QGridLayout_QBaseAlignmentRect(const QGridLayout* self, QRect* param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_AlignmentRect_IsBase(true);
        return new QRect(vqgridlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAlignmentRect(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGridLayout_Sender(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->sender();
    } else {
        return vqgridlayout->sender();
    }
}

// Base class handler implementation
QObject* QGridLayout_QBaseSender(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Sender_IsBase(true);
        return vqgridlayout->sender();
    } else {
        return vqgridlayout->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSender(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Sender_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_SenderSignalIndex(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->senderSignalIndex();
    } else {
        return vqgridlayout->senderSignalIndex();
    }
}

// Base class handler implementation
int QGridLayout_QBaseSenderSignalIndex(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_SenderSignalIndex_IsBase(true);
        return vqgridlayout->senderSignalIndex();
    } else {
        return vqgridlayout->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSenderSignalIndex(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Receivers(const QGridLayout* self, const char* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->receivers(signal);
    } else {
        return vqgridlayout->receivers(signal);
    }
}

// Base class handler implementation
int QGridLayout_QBaseReceivers(const QGridLayout* self, const char* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Receivers_IsBase(true);
        return vqgridlayout->receivers(signal);
    } else {
        return vqgridlayout->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnReceivers(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_Receivers_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_IsSignalConnected(const QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->isSignalConnected(*signal);
    } else {
        return vqgridlayout->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseIsSignalConnected(const QGridLayout* self, QMetaMethod* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IsSignalConnected_IsBase(true);
        return vqgridlayout->isSignalConnected(*signal);
    } else {
        return vqgridlayout->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIsSignalConnected(const QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        vqgridlayout->setQGridLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IsSignalConnected_Callback>(slot));
    }
}

void QGridLayout_Delete(QGridLayout* self) {
    delete self;
}
