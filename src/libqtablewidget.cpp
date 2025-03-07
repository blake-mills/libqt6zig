#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QFrame>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHeaderView>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtablewidget.h>
#include "libqtablewidget.h"
#include "libqtablewidget.hxx"

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new(QTableWidgetSelectionRange* other) {
    return new QTableWidgetSelectionRange(*other);
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(QTableWidgetSelectionRange* other) {
    return new QTableWidgetSelectionRange(std::move(*other));
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3() {
    return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new4(int top, int left, int bottom, int right) {
    return new QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

void QTableWidgetSelectionRange_CopyAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = *other;
}

void QTableWidgetSelectionRange_MoveAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
    *self = std::move(*other);
}

int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self) {
    return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self) {
    return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self) {
    return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self) {
    return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self) {
    return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self) {
    return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
    delete self;
}

QTableWidgetItem* QTableWidgetItem_new() {
    return new VirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
    return new VirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
    return new VirtualQTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
}

QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self) {
    return self->tableWidget();
}

int QTableWidgetItem_Row(const QTableWidgetItem* self) {
    return self->row();
}

int QTableWidgetItem_Column(const QTableWidgetItem* self) {
    return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal) {
    self->setSelected(selectVal);
}

bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self) {
    return self->isSelected();
}

int QTableWidgetItem_Flags(const QTableWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QTableWidgetItem_Text(const QTableWidgetItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
    return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_Font(const QTableWidgetItem* self) {
    return new QFont(self->font());
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, QFont* font) {
    self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self) {
    return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<int>(alignment));
}

void QTableWidgetItem_SetTextAlignmentWithAlignment(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QTableWidgetItem_SetTextAlignment2(QTableWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self) {
    return new QBrush(self->background());
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, QBrush* brush) {
    self->setBackground(*brush);
}

QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self) {
    return new QBrush(self->foreground());
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, QBrush* brush) {
    self->setForeground(*brush);
}

int QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
    return static_cast<int>(self->checkState());
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self) {
    return new QSize(self->sizeHint());
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, QSize* size) {
    self->setSizeHint(*size);
}

void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
    self->operator=(*other);
}

int QTableWidgetItem_Type(const QTableWidgetItem* self) {
    return self->type();
}

// Derived class handler implementation
QTableWidgetItem* QTableWidgetItem_Clone(const QTableWidgetItem* self) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        return vqtablewidgetitem->clone();
    } else {
        return vqtablewidgetitem->clone();
    }
}

// Base class handler implementation
QTableWidgetItem* QTableWidgetItem_QBaseClone(const QTableWidgetItem* self) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Clone_IsBase(true);
        return vqtablewidgetitem->clone();
    } else {
        return vqtablewidgetitem->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnClone(const QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Clone_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        return new QVariant(vqtablewidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QTableWidgetItem_QBaseData(const QTableWidgetItem* self, int role) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Data_IsBase(true);
        return new QVariant(vqtablewidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnData(const QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Data_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, QVariant* value) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->setData(static_cast<int>(role), *value);
    } else {
        vqtablewidgetitem->setData(static_cast<int>(role), *value);
    }
}

// Base class handler implementation
void QTableWidgetItem_QBaseSetData(QTableWidgetItem* self, int role, QVariant* value) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->setQTableWidgetItem_SetData_IsBase(true);
        vqtablewidgetitem->setData(static_cast<int>(role), *value);
    } else {
        vqtablewidgetitem->setData(static_cast<int>(role), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnSetData(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->setQTableWidgetItem_SetData_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        return vqtablewidgetitem->operator<(*other);
    } else {
        return vqtablewidgetitem->operator<(*other);
    }
}

// Base class handler implementation
bool QTableWidgetItem_QBaseOperatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_OperatorLesser_IsBase(true);
        return vqtablewidgetitem->operator<(*other);
    } else {
        return vqtablewidgetitem->operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnOperatorLesser(const QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->read(*in);
    } else {
        vqtablewidgetitem->read(*in);
    }
}

// Base class handler implementation
void QTableWidgetItem_QBaseRead(QTableWidgetItem* self, QDataStream* in) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->setQTableWidgetItem_Read_IsBase(true);
        vqtablewidgetitem->read(*in);
    } else {
        vqtablewidgetitem->read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnRead(QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = dynamic_cast<VirtualQTableWidgetItem*>(self)) {
        vqtablewidgetitem->setQTableWidgetItem_Read_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->write(*out);
    } else {
        vqtablewidgetitem->write(*out);
    }
}

// Base class handler implementation
void QTableWidgetItem_QBaseWrite(const QTableWidgetItem* self, QDataStream* out) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Write_IsBase(true);
        vqtablewidgetitem->write(*out);
    } else {
        vqtablewidgetitem->write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidgetItem_OnWrite(const QTableWidgetItem* self, intptr_t slot) {
    if (auto* vqtablewidgetitem = const_cast<VirtualQTableWidgetItem*>(dynamic_cast<const VirtualQTableWidgetItem*>(self))) {
        vqtablewidgetitem->setQTableWidgetItem_Write_Callback(reinterpret_cast<VirtualQTableWidgetItem::QTableWidgetItem_Write_Callback>(slot));
    }
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
    delete self;
}

QTableWidget* QTableWidget_new(QWidget* parent) {
    return new VirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
    return new VirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
    return new VirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
    return new VirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

QMetaObject* QTableWidget_MetaObject(const QTableWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTableWidget_Metacast(QTableWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTableWidget_Metacall(QTableWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTableWidget_OnMetacall(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Metacall_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTableWidget_QBaseMetacall(QTableWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Metacall_IsBase(true);
        return vqtablewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTableWidget_Tr(const char* s) {
    QString _ret = QTableWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
    self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_RowCount(const QTableWidget* self) {
    return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_ColumnCount(const QTableWidget* self) {
    return self->columnCount();
}

int QTableWidget_Row(const QTableWidget* self, QTableWidgetItem* item) {
    return self->row(item);
}

int QTableWidget_Column(const QTableWidget* self, QTableWidgetItem* item) {
    return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column) {
    return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
    self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
    return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_Items(const QTableWidget* self, QMimeData* data) {
    QList<QTableWidgetItem*> _ret = self->items(data);
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QTableWidget_IndexFromItem(const QTableWidget* self, QTableWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QTableWidgetItem* QTableWidget_ItemFromIndex(const QTableWidget* self, QModelIndex* index) {
    return self->itemFromIndex(*index);
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row) {
    return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
    self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
    return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column) {
    return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
    self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
    return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_CurrentRow(const QTableWidget* self) {
    return self->currentRow();
}

int QTableWidget_CurrentColumn(const QTableWidget* self) {
    return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self) {
    return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
    self->setCurrentItem(item);
}

void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
    self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
    self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command) {
    self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SortItems(QTableWidget* self, int column) {
    self->sortItems(static_cast<int>(column));
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(const QTableWidget* self) {
    return self->isSortingEnabled();
}

void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item) {
    self->editItem(item);
}

void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column) {
    return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
    self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
    self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* range, bool selectVal) {
    self->setRangeSelected(*range, selectVal);
}

libqt_list /* of QTableWidgetSelectionRange* */ QTableWidget_SelectedRanges(const QTableWidget* self) {
    QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QTableWidgetSelectionRange(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_SelectedItems(const QTableWidget* self) {
    QList<QTableWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTableWidgetItem* */ QTableWidget_FindItems(const QTableWidget* self, libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTableWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow) {
    return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn) {
    return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, QPoint* p) {
    return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_VisualItemRect(const QTableWidget* self, QTableWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self) {
    return (QTableWidgetItem*)self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
    self->setItemPrototype(item);
}

void QTableWidget_ScrollToItem(QTableWidget* self, QTableWidgetItem* item) {
    self->scrollToItem(item);
}

void QTableWidget_InsertRow(QTableWidget* self, int row) {
    self->insertRow(static_cast<int>(row));
}

void QTableWidget_InsertColumn(QTableWidget* self, int column) {
    self->insertColumn(static_cast<int>(column));
}

void QTableWidget_RemoveRow(QTableWidget* self, int row) {
    self->removeRow(static_cast<int>(row));
}

void QTableWidget_RemoveColumn(QTableWidget* self, int column) {
    self->removeColumn(static_cast<int>(column));
}

void QTableWidget_Clear(QTableWidget* self) {
    self->clear();
}

void QTableWidget_ClearContents(QTableWidget* self) {
    self->clearContents();
}

void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item) {
    self->itemPressed(item);
}

void QTableWidget_Connect_ItemPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemPressed, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
    self->itemClicked(item);
}

void QTableWidget_Connect_ItemClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemClicked, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
    self->itemDoubleClicked(item);
}

void QTableWidget_Connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemDoubleClicked, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
    self->itemActivated(item);
}

void QTableWidget_Connect_ItemActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemActivated, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
    self->itemEntered(item);
}

void QTableWidget_Connect_ItemEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemEntered, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
    self->itemChanged(item);
}

void QTableWidget_Connect_ItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemChanged, [self, slotFunc](QTableWidgetItem* item) {
        QTableWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QTableWidget_Connect_CurrentItemChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*) = reinterpret_cast<void (*)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*)>(slot);
    QTableWidget::connect(self, &QTableWidget::currentItemChanged, [self, slotFunc](QTableWidgetItem* current, QTableWidgetItem* previous) {
        QTableWidgetItem* sigval1 = current;
        QTableWidgetItem* sigval2 = previous;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
    self->itemSelectionChanged();
}

void QTableWidget_Connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*) = reinterpret_cast<void (*)(QTableWidget*)>(slot);
    QTableWidget::connect(self, &QTableWidget::itemSelectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
    self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellPressed(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellPressed, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
    self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellClicked, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
    self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellDoubleClicked(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellDoubleClicked, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
    self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellActivated(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellActivated, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
    self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellEntered(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellEntered, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
    self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_Connect_CellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::cellChanged, [self, slotFunc](int row, int column) {
        int sigval1 = row;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
    self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_Connect_CurrentCellChanged(QTableWidget* self, intptr_t slot) {
    void (*slotFunc)(QTableWidget*, int, int, int, int) = reinterpret_cast<void (*)(QTableWidget*, int, int, int, int)>(slot);
    QTableWidget::connect(self, &QTableWidget::currentCellChanged, [self, slotFunc](int currentRow, int currentColumn, int previousRow, int previousColumn) {
        int sigval1 = currentRow;
        int sigval2 = currentColumn;
        int sigval3 = previousRow;
        int sigval4 = previousColumn;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

libqt_string QTableWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTableWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTableWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTableWidget_SortItems2(QTableWidget* self, int column, int order) {
    self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
bool QTableWidget_Event(QTableWidget* self, QEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->event(e);
    } else {
        return vqtablewidget->event(e);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseEvent(QTableWidget* self, QEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Event_IsBase(true);
        return vqtablewidget->event(e);
    } else {
        return vqtablewidget->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Event_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTableWidget_MimeTypes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        QStringList _ret = vqtablewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqtablewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTableWidget_QBaseMimeTypes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MimeTypes_IsBase(true);
        QStringList _ret = vqtablewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqtablewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMimeTypes(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MimeTypes_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTableWidget_MimeData(const QTableWidget* self, libqt_list /* of QTableWidgetItem* */ items) {
    QList<QTableWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->mimeData(items_QList);
    } else {
        return vqtablewidget->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* QTableWidget_QBaseMimeData(const QTableWidget* self, libqt_list /* of QTableWidgetItem* */ items) {
    QList<QTableWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MimeData_IsBase(true);
        return vqtablewidget->mimeData(items_QList);
    } else {
        return vqtablewidget->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMimeData(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MimeData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, QMimeData* data, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqtablewidget->dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool QTableWidget_QBaseDropMimeData(QTableWidget* self, int row, int column, QMimeData* data, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DropMimeData_IsBase(true);
        return vqtablewidget->dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqtablewidget->dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropMimeData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DropMimeData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_SupportedDropActions(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->supportedDropActions());
    } else {
        return static_cast<int>(vqtablewidget->supportedDropActions());
    }
}

// Base class handler implementation
int QTableWidget_QBaseSupportedDropActions(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqtablewidget->supportedDropActions());
    } else {
        return static_cast<int>(vqtablewidget->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSupportedDropActions(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->dropEvent(event);
    } else {
        vqtablewidget->dropEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDropEvent(QTableWidget* self, QDropEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DropEvent_IsBase(true);
        vqtablewidget->dropEvent(event);
    } else {
        vqtablewidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DropEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetRootIndex(QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setRootIndex(*index);
    } else {
        vqtablewidget->setRootIndex(*index);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetRootIndex(QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetRootIndex_IsBase(true);
        vqtablewidget->setRootIndex(*index);
    } else {
        vqtablewidget->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetRootIndex(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetRootIndex_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetSelectionModel(QTableWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setSelectionModel(selectionModel);
    } else {
        vqtablewidget->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetSelectionModel(QTableWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetSelectionModel_IsBase(true);
        vqtablewidget->setSelectionModel(selectionModel);
    } else {
        vqtablewidget->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetSelectionModel(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DoItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->doItemsLayout();
    } else {
        vqtablewidget->doItemsLayout();
    }
}

// Base class handler implementation
void QTableWidget_QBaseDoItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DoItemsLayout_IsBase(true);
        vqtablewidget->doItemsLayout();
    } else {
        vqtablewidget->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDoItemsLayout(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DoItemsLayout_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QTableWidget_VisualRect(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QRect(vqtablewidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QTableWidget_QBaseVisualRect(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VisualRect_IsBase(true);
        return new QRect(vqtablewidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVisualRect(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VisualRect_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ScrollTo(QTableWidget* self, QModelIndex* index, int hint) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtablewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QTableWidget_QBaseScrollTo(QTableWidget* self, QModelIndex* index, int hint) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollTo_IsBase(true);
        vqtablewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtablewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScrollTo(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollTo_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTableWidget_IndexAt(const QTableWidget* self, QPoint* p) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QModelIndex(vqtablewidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QTableWidget_QBaseIndexAt(const QTableWidget* self, QPoint* p) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IndexAt_IsBase(true);
        return new QModelIndex(vqtablewidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnIndexAt(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IndexAt_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ScrollContentsBy(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtablewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTableWidget_QBaseScrollContentsBy(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollContentsBy_IsBase(true);
        vqtablewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtablewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScrollContentsBy(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_InitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->initViewItemOption(option);
    } else {
        vqtablewidget->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTableWidget_QBaseInitViewItemOption(const QTableWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitViewItemOption_IsBase(true);
        vqtablewidget->initViewItemOption(option);
    } else {
        vqtablewidget->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitViewItemOption(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitViewItemOption_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_PaintEvent(QTableWidget* self, QPaintEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->paintEvent(e);
    } else {
        vqtablewidget->paintEvent(e);
    }
}

// Base class handler implementation
void QTableWidget_QBasePaintEvent(QTableWidget* self, QPaintEvent* e) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_PaintEvent_IsBase(true);
        vqtablewidget->paintEvent(e);
    } else {
        vqtablewidget->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnPaintEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_TimerEvent(QTableWidget* self, QTimerEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->timerEvent(event);
    } else {
        vqtablewidget->timerEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseTimerEvent(QTableWidget* self, QTimerEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_TimerEvent_IsBase(true);
        vqtablewidget->timerEvent(event);
    } else {
        vqtablewidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnTimerEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_HorizontalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->horizontalOffset();
    } else {
        return vqtablewidget->horizontalOffset();
    }
}

// Base class handler implementation
int QTableWidget_QBaseHorizontalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HorizontalOffset_IsBase(true);
        return vqtablewidget->horizontalOffset();
    } else {
        return vqtablewidget->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalOffset(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HorizontalOffset_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_VerticalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->verticalOffset();
    } else {
        return vqtablewidget->verticalOffset();
    }
}

// Base class handler implementation
int QTableWidget_QBaseVerticalOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VerticalOffset_IsBase(true);
        return vqtablewidget->verticalOffset();
    } else {
        return vqtablewidget->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalOffset(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VerticalOffset_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTableWidget_MoveCursor(QTableWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return new QModelIndex(vqtablewidget->moveCursor(static_cast<VirtualQTableWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTableWidget_QBaseMoveCursor(QTableWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MoveCursor_IsBase(true);
        return new QModelIndex(vqtablewidget->moveCursor(static_cast<VirtualQTableWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMoveCursor(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MoveCursor_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetSelection(QTableWidget* self, QRect* rect, int command) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtablewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetSelection(QTableWidget* self, QRect* rect, int command) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetSelection_IsBase(true);
        vqtablewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtablewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetSelection(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetSelection_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QTableWidget_VisualRegionForSelection(const QTableWidget* self, QItemSelection* selection) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QRegion(vqtablewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QTableWidget_QBaseVisualRegionForSelection(const QTableWidget* self, QItemSelection* selection) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtablewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVisualRegionForSelection(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTableWidget_SelectedIndexes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        QModelIndexList _ret = vqtablewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqtablewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTableWidget_QBaseSelectedIndexes(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqtablewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqtablewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectedIndexes(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SelectedIndexes_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_UpdateGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->updateGeometries();
    } else {
        vqtablewidget->updateGeometries();
    }
}

// Base class handler implementation
void QTableWidget_QBaseUpdateGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateGeometries_IsBase(true);
        vqtablewidget->updateGeometries();
    } else {
        vqtablewidget->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateGeometries(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateGeometries_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableWidget_ViewportSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QSize(vqtablewidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTableWidget_QBaseViewportSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vqtablewidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnViewportSizeHint(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_SizeHintForRow(const QTableWidget* self, int row) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtablewidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTableWidget_QBaseSizeHintForRow(const QTableWidget* self, int row) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHintForRow_IsBase(true);
        return vqtablewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtablewidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHintForRow(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHintForRow_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_SizeHintForColumn(const QTableWidget* self, int column) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtablewidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QTableWidget_QBaseSizeHintForColumn(const QTableWidget* self, int column) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHintForColumn_IsBase(true);
        return vqtablewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtablewidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHintForColumn(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_VerticalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtablewidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTableWidget_QBaseVerticalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_VerticalScrollbarAction_IsBase(true);
        vqtablewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtablewidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalScrollbarAction(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_HorizontalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtablewidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTableWidget_QBaseHorizontalScrollbarAction(QTableWidget* self, int action) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HorizontalScrollbarAction_IsBase(true);
        vqtablewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtablewidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalScrollbarAction(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_IsIndexHidden(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->isIndexHidden(*index);
    } else {
        return vqtablewidget->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseIsIndexHidden(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IsIndexHidden_IsBase(true);
        return vqtablewidget->isIndexHidden(*index);
    } else {
        return vqtablewidget->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnIsIndexHidden(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IsIndexHidden_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SelectionChanged(QTableWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->selectionChanged(*selected, *deselected);
    } else {
        vqtablewidget->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSelectionChanged(QTableWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SelectionChanged_IsBase(true);
        vqtablewidget->selectionChanged(*selected, *deselected);
    } else {
        vqtablewidget->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectionChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_CurrentChanged(QTableWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->currentChanged(*current, *previous);
    } else {
        vqtablewidget->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QTableWidget_QBaseCurrentChanged(QTableWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CurrentChanged_IsBase(true);
        vqtablewidget->currentChanged(*current, *previous);
    } else {
        vqtablewidget->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCurrentChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CurrentChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_KeyboardSearch(QTableWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->keyboardSearch(search_QString);
    } else {
        vqtablewidget->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QTableWidget_QBaseKeyboardSearch(QTableWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyboardSearch_IsBase(true);
        vqtablewidget->keyboardSearch(search_QString);
    } else {
        vqtablewidget->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyboardSearch(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyboardSearch_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTableWidget_ItemDelegateForIndex(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->itemDelegateForIndex(*index);
    } else {
        return vqtablewidget->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTableWidget_QBaseItemDelegateForIndex(const QTableWidget* self, QModelIndex* index) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ItemDelegateForIndex_IsBase(true);
        return vqtablewidget->itemDelegateForIndex(*index);
    } else {
        return vqtablewidget->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnItemDelegateForIndex(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTableWidget_InputMethodQuery(const QTableWidget* self, int query) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QVariant(vqtablewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTableWidget_QBaseInputMethodQuery(const QTableWidget* self, int query) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtablewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInputMethodQuery(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_Reset(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->reset();
    } else {
        vqtablewidget->reset();
    }
}

// Base class handler implementation
void QTableWidget_QBaseReset(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Reset_IsBase(true);
        vqtablewidget->reset();
    } else {
        vqtablewidget->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnReset(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Reset_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SelectAll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->selectAll();
    } else {
        vqtablewidget->selectAll();
    }
}

// Base class handler implementation
void QTableWidget_QBaseSelectAll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SelectAll_IsBase(true);
        vqtablewidget->selectAll();
    } else {
        vqtablewidget->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectAll(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SelectAll_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DataChanged(QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtablewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDataChanged(QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DataChanged_IsBase(true);
        vqtablewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtablewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDataChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DataChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_RowsInserted(QTableWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtablewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTableWidget_QBaseRowsInserted(QTableWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowsInserted_IsBase(true);
        vqtablewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtablewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowsInserted(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowsInserted_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_RowsAboutToBeRemoved(QTableWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtablewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTableWidget_QBaseRowsAboutToBeRemoved(QTableWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowsAboutToBeRemoved_IsBase(true);
        vqtablewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtablewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowsAboutToBeRemoved(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_UpdateEditorData(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->updateEditorData();
    } else {
        vqtablewidget->updateEditorData();
    }
}

// Base class handler implementation
void QTableWidget_QBaseUpdateEditorData(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateEditorData_IsBase(true);
        vqtablewidget->updateEditorData();
    } else {
        vqtablewidget->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateEditorData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateEditorData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_UpdateEditorGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->updateEditorGeometries();
    } else {
        vqtablewidget->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTableWidget_QBaseUpdateEditorGeometries(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateEditorGeometries_IsBase(true);
        vqtablewidget->updateEditorGeometries();
    } else {
        vqtablewidget->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateEditorGeometries(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_VerticalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtablewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTableWidget_QBaseVerticalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_VerticalScrollbarValueChanged_IsBase(true);
        vqtablewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtablewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnVerticalScrollbarValueChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_HorizontalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtablewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTableWidget_QBaseHorizontalScrollbarValueChanged(QTableWidget* self, int value) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HorizontalScrollbarValueChanged_IsBase(true);
        vqtablewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtablewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHorizontalScrollbarValueChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_CloseEditor(QTableWidget* self, QWidget* editor, int hint) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtablewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTableWidget_QBaseCloseEditor(QTableWidget* self, QWidget* editor, int hint) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CloseEditor_IsBase(true);
        vqtablewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtablewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCloseEditor(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CloseEditor_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_CommitData(QTableWidget* self, QWidget* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->commitData(editor);
    } else {
        vqtablewidget->commitData(editor);
    }
}

// Base class handler implementation
void QTableWidget_QBaseCommitData(QTableWidget* self, QWidget* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CommitData_IsBase(true);
        vqtablewidget->commitData(editor);
    } else {
        vqtablewidget->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCommitData(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CommitData_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_EditorDestroyed(QTableWidget* self, QObject* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->editorDestroyed(editor);
    } else {
        vqtablewidget->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTableWidget_QBaseEditorDestroyed(QTableWidget* self, QObject* editor) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EditorDestroyed_IsBase(true);
        vqtablewidget->editorDestroyed(editor);
    } else {
        vqtablewidget->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEditorDestroyed(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EditorDestroyed_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_Edit2(QTableWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtablewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseEdit2(QTableWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Edit2_IsBase(true);
        return vqtablewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtablewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEdit2(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Edit2_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_SelectionCommand(const QTableWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtablewidget->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTableWidget_QBaseSelectionCommand(const QTableWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtablewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtablewidget->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSelectionCommand(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SelectionCommand_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_StartDrag(QTableWidget* self, int supportedActions) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtablewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTableWidget_QBaseStartDrag(QTableWidget* self, int supportedActions) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StartDrag_IsBase(true);
        vqtablewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtablewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnStartDrag(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StartDrag_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_FocusNextPrevChild(QTableWidget* self, bool next) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->focusNextPrevChild(next);
    } else {
        return vqtablewidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseFocusNextPrevChild(QTableWidget* self, bool next) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusNextPrevChild_IsBase(true);
        return vqtablewidget->focusNextPrevChild(next);
    } else {
        return vqtablewidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusNextPrevChild(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_ViewportEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->viewportEvent(event);
    } else {
        return vqtablewidget->viewportEvent(event);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseViewportEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ViewportEvent_IsBase(true);
        return vqtablewidget->viewportEvent(event);
    } else {
        return vqtablewidget->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnViewportEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ViewportEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_MousePressEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->mousePressEvent(event);
    } else {
        vqtablewidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseMousePressEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MousePressEvent_IsBase(true);
        vqtablewidget->mousePressEvent(event);
    } else {
        vqtablewidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMousePressEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_MouseMoveEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->mouseMoveEvent(event);
    } else {
        vqtablewidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseMouseMoveEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseMoveEvent_IsBase(true);
        vqtablewidget->mouseMoveEvent(event);
    } else {
        vqtablewidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_MouseReleaseEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->mouseReleaseEvent(event);
    } else {
        vqtablewidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseMouseReleaseEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseReleaseEvent_IsBase(true);
        vqtablewidget->mouseReleaseEvent(event);
    } else {
        vqtablewidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseReleaseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_MouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->mouseDoubleClickEvent(event);
    } else {
        vqtablewidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseMouseDoubleClickEvent(QTableWidget* self, QMouseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseDoubleClickEvent_IsBase(true);
        vqtablewidget->mouseDoubleClickEvent(event);
    } else {
        vqtablewidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMouseDoubleClickEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DragEnterEvent(QTableWidget* self, QDragEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->dragEnterEvent(event);
    } else {
        vqtablewidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDragEnterEvent(QTableWidget* self, QDragEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragEnterEvent_IsBase(true);
        vqtablewidget->dragEnterEvent(event);
    } else {
        vqtablewidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragEnterEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DragMoveEvent(QTableWidget* self, QDragMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->dragMoveEvent(event);
    } else {
        vqtablewidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDragMoveEvent(QTableWidget* self, QDragMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragMoveEvent_IsBase(true);
        vqtablewidget->dragMoveEvent(event);
    } else {
        vqtablewidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->dragLeaveEvent(event);
    } else {
        vqtablewidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDragLeaveEvent(QTableWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragLeaveEvent_IsBase(true);
        vqtablewidget->dragLeaveEvent(event);
    } else {
        vqtablewidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDragLeaveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_FocusInEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->focusInEvent(event);
    } else {
        vqtablewidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseFocusInEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusInEvent_IsBase(true);
        vqtablewidget->focusInEvent(event);
    } else {
        vqtablewidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusInEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_FocusOutEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->focusOutEvent(event);
    } else {
        vqtablewidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseFocusOutEvent(QTableWidget* self, QFocusEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusOutEvent_IsBase(true);
        vqtablewidget->focusOutEvent(event);
    } else {
        vqtablewidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusOutEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_KeyPressEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->keyPressEvent(event);
    } else {
        vqtablewidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseKeyPressEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyPressEvent_IsBase(true);
        vqtablewidget->keyPressEvent(event);
    } else {
        vqtablewidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyPressEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ResizeEvent(QTableWidget* self, QResizeEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->resizeEvent(event);
    } else {
        vqtablewidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseResizeEvent(QTableWidget* self, QResizeEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ResizeEvent_IsBase(true);
        vqtablewidget->resizeEvent(event);
    } else {
        vqtablewidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnResizeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_InputMethodEvent(QTableWidget* self, QInputMethodEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->inputMethodEvent(event);
    } else {
        vqtablewidget->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseInputMethodEvent(QTableWidget* self, QInputMethodEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_InputMethodEvent_IsBase(true);
        vqtablewidget->inputMethodEvent(event);
    } else {
        vqtablewidget->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInputMethodEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_EventFilter(QTableWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->eventFilter(object, event);
    } else {
        return vqtablewidget->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseEventFilter(QTableWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EventFilter_IsBase(true);
        return vqtablewidget->eventFilter(object, event);
    } else {
        return vqtablewidget->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEventFilter(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EventFilter_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableWidget_MinimumSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QSize(vqtablewidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTableWidget_QBaseMinimumSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtablewidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMinimumSizeHint(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableWidget_SizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QSize(vqtablewidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTableWidget_QBaseSizeHint(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHint_IsBase(true);
        return new QSize(vqtablewidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSizeHint(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SizeHint_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetupViewport(QTableWidget* self, QWidget* viewport) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setupViewport(viewport);
    } else {
        vqtablewidget->setupViewport(viewport);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetupViewport(QTableWidget* self, QWidget* viewport) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetupViewport_IsBase(true);
        vqtablewidget->setupViewport(viewport);
    } else {
        vqtablewidget->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetupViewport(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetupViewport_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_WheelEvent(QTableWidget* self, QWheelEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->wheelEvent(param1);
    } else {
        vqtablewidget->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTableWidget_QBaseWheelEvent(QTableWidget* self, QWheelEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_WheelEvent_IsBase(true);
        vqtablewidget->wheelEvent(param1);
    } else {
        vqtablewidget->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnWheelEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->contextMenuEvent(param1);
    } else {
        vqtablewidget->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTableWidget_QBaseContextMenuEvent(QTableWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ContextMenuEvent_IsBase(true);
        vqtablewidget->contextMenuEvent(param1);
    } else {
        vqtablewidget->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnContextMenuEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ChangeEvent(QTableWidget* self, QEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->changeEvent(param1);
    } else {
        vqtablewidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QTableWidget_QBaseChangeEvent(QTableWidget* self, QEvent* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ChangeEvent_IsBase(true);
        vqtablewidget->changeEvent(param1);
    } else {
        vqtablewidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnChangeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_InitStyleOption(const QTableWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->initStyleOption(option);
    } else {
        vqtablewidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QTableWidget_QBaseInitStyleOption(const QTableWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitStyleOption_IsBase(true);
        vqtablewidget->initStyleOption(option);
    } else {
        vqtablewidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitStyleOption(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_DevType(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->devType();
    } else {
        return vqtablewidget->devType();
    }
}

// Base class handler implementation
int QTableWidget_QBaseDevType(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DevType_IsBase(true);
        return vqtablewidget->devType();
    } else {
        return vqtablewidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDevType(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DevType_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetVisible(QTableWidget* self, bool visible) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setVisible(visible);
    } else {
        vqtablewidget->setVisible(visible);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetVisible(QTableWidget* self, bool visible) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetVisible_IsBase(true);
        vqtablewidget->setVisible(visible);
    } else {
        vqtablewidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetVisible(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetVisible_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_HeightForWidth(const QTableWidget* self, int param1) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtablewidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTableWidget_QBaseHeightForWidth(const QTableWidget* self, int param1) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HeightForWidth_IsBase(true);
        return vqtablewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtablewidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHeightForWidth(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_HasHeightForWidth(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->hasHeightForWidth();
    } else {
        return vqtablewidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTableWidget_QBaseHasHeightForWidth(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HasHeightForWidth_IsBase(true);
        return vqtablewidget->hasHeightForWidth();
    } else {
        return vqtablewidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHasHeightForWidth(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTableWidget_PaintEngine(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->paintEngine();
    } else {
        return vqtablewidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTableWidget_QBasePaintEngine(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_PaintEngine_IsBase(true);
        return vqtablewidget->paintEngine();
    } else {
        return vqtablewidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnPaintEngine(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_KeyReleaseEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->keyReleaseEvent(event);
    } else {
        vqtablewidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseKeyReleaseEvent(QTableWidget* self, QKeyEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyReleaseEvent_IsBase(true);
        vqtablewidget->keyReleaseEvent(event);
    } else {
        vqtablewidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnKeyReleaseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_EnterEvent(QTableWidget* self, QEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->enterEvent(event);
    } else {
        vqtablewidget->enterEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseEnterEvent(QTableWidget* self, QEnterEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EnterEvent_IsBase(true);
        vqtablewidget->enterEvent(event);
    } else {
        vqtablewidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnEnterEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_LeaveEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->leaveEvent(event);
    } else {
        vqtablewidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseLeaveEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_LeaveEvent_IsBase(true);
        vqtablewidget->leaveEvent(event);
    } else {
        vqtablewidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnLeaveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_MoveEvent(QTableWidget* self, QMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->moveEvent(event);
    } else {
        vqtablewidget->moveEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseMoveEvent(QTableWidget* self, QMoveEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MoveEvent_IsBase(true);
        vqtablewidget->moveEvent(event);
    } else {
        vqtablewidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMoveEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_CloseEvent(QTableWidget* self, QCloseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->closeEvent(event);
    } else {
        vqtablewidget->closeEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseCloseEvent(QTableWidget* self, QCloseEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CloseEvent_IsBase(true);
        vqtablewidget->closeEvent(event);
    } else {
        vqtablewidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCloseEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_TabletEvent(QTableWidget* self, QTabletEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->tabletEvent(event);
    } else {
        vqtablewidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseTabletEvent(QTableWidget* self, QTabletEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_TabletEvent_IsBase(true);
        vqtablewidget->tabletEvent(event);
    } else {
        vqtablewidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnTabletEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ActionEvent(QTableWidget* self, QActionEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->actionEvent(event);
    } else {
        vqtablewidget->actionEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseActionEvent(QTableWidget* self, QActionEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ActionEvent_IsBase(true);
        vqtablewidget->actionEvent(event);
    } else {
        vqtablewidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnActionEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ShowEvent(QTableWidget* self, QShowEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->showEvent(event);
    } else {
        vqtablewidget->showEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseShowEvent(QTableWidget* self, QShowEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ShowEvent_IsBase(true);
        vqtablewidget->showEvent(event);
    } else {
        vqtablewidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnShowEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_HideEvent(QTableWidget* self, QHideEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->hideEvent(event);
    } else {
        vqtablewidget->hideEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseHideEvent(QTableWidget* self, QHideEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HideEvent_IsBase(true);
        vqtablewidget->hideEvent(event);
    } else {
        vqtablewidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnHideEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_HideEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_NativeEvent(QTableWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtablewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTableWidget_QBaseNativeEvent(QTableWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_NativeEvent_IsBase(true);
        return vqtablewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtablewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnNativeEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_Metric(const QTableWidget* self, int param1) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtablewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTableWidget_QBaseMetric(const QTableWidget* self, int param1) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Metric_IsBase(true);
        return vqtablewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtablewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnMetric(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Metric_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_InitPainter(const QTableWidget* self, QPainter* painter) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->initPainter(painter);
    } else {
        vqtablewidget->initPainter(painter);
    }
}

// Base class handler implementation
void QTableWidget_QBaseInitPainter(const QTableWidget* self, QPainter* painter) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitPainter_IsBase(true);
        vqtablewidget->initPainter(painter);
    } else {
        vqtablewidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnInitPainter(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_InitPainter_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTableWidget_Redirected(const QTableWidget* self, QPoint* offset) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->redirected(offset);
    } else {
        return vqtablewidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTableWidget_QBaseRedirected(const QTableWidget* self, QPoint* offset) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Redirected_IsBase(true);
        return vqtablewidget->redirected(offset);
    } else {
        return vqtablewidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRedirected(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Redirected_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTableWidget_SharedPainter(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->sharedPainter();
    } else {
        return vqtablewidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTableWidget_QBaseSharedPainter(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SharedPainter_IsBase(true);
        return vqtablewidget->sharedPainter();
    } else {
        return vqtablewidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSharedPainter(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ChildEvent(QTableWidget* self, QChildEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->childEvent(event);
    } else {
        vqtablewidget->childEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseChildEvent(QTableWidget* self, QChildEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ChildEvent_IsBase(true);
        vqtablewidget->childEvent(event);
    } else {
        vqtablewidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnChildEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_CustomEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->customEvent(event);
    } else {
        vqtablewidget->customEvent(event);
    }
}

// Base class handler implementation
void QTableWidget_QBaseCustomEvent(QTableWidget* self, QEvent* event) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CustomEvent_IsBase(true);
        vqtablewidget->customEvent(event);
    } else {
        vqtablewidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCustomEvent(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ConnectNotify(QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->connectNotify(*signal);
    } else {
        vqtablewidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTableWidget_QBaseConnectNotify(QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ConnectNotify_IsBase(true);
        vqtablewidget->connectNotify(*signal);
    } else {
        vqtablewidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnConnectNotify(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DisconnectNotify(QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->disconnectNotify(*signal);
    } else {
        vqtablewidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDisconnectNotify(QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DisconnectNotify_IsBase(true);
        vqtablewidget->disconnectNotify(*signal);
    } else {
        vqtablewidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDisconnectNotify(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_RowMoved(QTableWidget* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtablewidget->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Base class handler implementation
void QTableWidget_QBaseRowMoved(QTableWidget* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowMoved_IsBase(true);
        vqtablewidget->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtablewidget->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowMoved(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowMoved_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_RowMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ColumnMoved(QTableWidget* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtablewidget->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Base class handler implementation
void QTableWidget_QBaseColumnMoved(QTableWidget* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnMoved_IsBase(true);
        vqtablewidget->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtablewidget->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnColumnMoved(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnMoved_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_RowResized(QTableWidget* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else {
        vqtablewidget->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    }
}

// Base class handler implementation
void QTableWidget_QBaseRowResized(QTableWidget* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowResized_IsBase(true);
        vqtablewidget->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else {
        vqtablewidget->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowResized(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowResized_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_RowResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ColumnResized(QTableWidget* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else {
        vqtablewidget->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    }
}

// Base class handler implementation
void QTableWidget_QBaseColumnResized(QTableWidget* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnResized_IsBase(true);
        vqtablewidget->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else {
        vqtablewidget->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnColumnResized(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnResized_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_RowCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtablewidget->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTableWidget_QBaseRowCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowCountChanged_IsBase(true);
        vqtablewidget->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtablewidget->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnRowCountChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_RowCountChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_RowCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ColumnCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtablewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTableWidget_QBaseColumnCountChanged(QTableWidget* self, int oldCount, int newCount) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnCountChanged_IsBase(true);
        vqtablewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtablewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnColumnCountChanged(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_State(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->state());
    } else {
        return static_cast<int>(vqtablewidget->state());
    }
}

// Base class handler implementation
int QTableWidget_QBaseState(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_State_IsBase(true);
        return static_cast<int>(vqtablewidget->state());
    } else {
        return static_cast<int>(vqtablewidget->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnState(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_State_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetState(QTableWidget* self, int state) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setState(static_cast<VirtualQTableWidget::State>(state));
    } else {
        vqtablewidget->setState(static_cast<VirtualQTableWidget::State>(state));
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetState(QTableWidget* self, int state) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetState_IsBase(true);
        vqtablewidget->setState(static_cast<VirtualQTableWidget::State>(state));
    } else {
        vqtablewidget->setState(static_cast<VirtualQTableWidget::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetState(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetState_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ScheduleDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->scheduleDelayedItemsLayout();
    } else {
        vqtablewidget->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTableWidget_QBaseScheduleDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScheduleDelayedItemsLayout_IsBase(true);
        vqtablewidget->scheduleDelayedItemsLayout();
    } else {
        vqtablewidget->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScheduleDelayedItemsLayout(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ExecuteDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->executeDelayedItemsLayout();
    } else {
        vqtablewidget->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTableWidget_QBaseExecuteDelayedItemsLayout(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ExecuteDelayedItemsLayout_IsBase(true);
        vqtablewidget->executeDelayedItemsLayout();
    } else {
        vqtablewidget->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnExecuteDelayedItemsLayout(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetDirtyRegion(QTableWidget* self, QRegion* region) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setDirtyRegion(*region);
    } else {
        vqtablewidget->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetDirtyRegion(QTableWidget* self, QRegion* region) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetDirtyRegion_IsBase(true);
        vqtablewidget->setDirtyRegion(*region);
    } else {
        vqtablewidget->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetDirtyRegion(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_ScrollDirtyRegion(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtablewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTableWidget_QBaseScrollDirtyRegion(QTableWidget* self, int dx, int dy) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollDirtyRegion_IsBase(true);
        vqtablewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtablewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnScrollDirtyRegion(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTableWidget_DirtyRegionOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QPoint(vqtablewidget->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTableWidget_QBaseDirtyRegionOffset(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtablewidget->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDirtyRegionOffset(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_StartAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->startAutoScroll();
    } else {
        vqtablewidget->startAutoScroll();
    }
}

// Base class handler implementation
void QTableWidget_QBaseStartAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StartAutoScroll_IsBase(true);
        vqtablewidget->startAutoScroll();
    } else {
        vqtablewidget->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnStartAutoScroll(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StartAutoScroll_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_StopAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->stopAutoScroll();
    } else {
        vqtablewidget->stopAutoScroll();
    }
}

// Base class handler implementation
void QTableWidget_QBaseStopAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StopAutoScroll_IsBase(true);
        vqtablewidget->stopAutoScroll();
    } else {
        vqtablewidget->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnStopAutoScroll(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_StopAutoScroll_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DoAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->doAutoScroll();
    } else {
        vqtablewidget->doAutoScroll();
    }
}

// Base class handler implementation
void QTableWidget_QBaseDoAutoScroll(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DoAutoScroll_IsBase(true);
        vqtablewidget->doAutoScroll();
    } else {
        vqtablewidget->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDoAutoScroll(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DoAutoScroll_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_DropIndicatorPosition(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return static_cast<int>(vqtablewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtablewidget->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTableWidget_QBaseDropIndicatorPosition(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtablewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtablewidget->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDropIndicatorPosition(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_SetViewportMargins(QTableWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtablewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTableWidget_QBaseSetViewportMargins(QTableWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetViewportMargins_IsBase(true);
        vqtablewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtablewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSetViewportMargins(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTableWidget_ViewportMargins(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return new QMargins(vqtablewidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTableWidget_QBaseViewportMargins(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ViewportMargins_IsBase(true);
        return new QMargins(vqtablewidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnViewportMargins(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_ViewportMargins_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_DrawFrame(QTableWidget* self, QPainter* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->drawFrame(param1);
    } else {
        vqtablewidget->drawFrame(param1);
    }
}

// Base class handler implementation
void QTableWidget_QBaseDrawFrame(QTableWidget* self, QPainter* param1) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DrawFrame_IsBase(true);
        vqtablewidget->drawFrame(param1);
    } else {
        vqtablewidget->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDrawFrame(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_DrawFrame_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_UpdateMicroFocus(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->updateMicroFocus();
    } else {
        vqtablewidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QTableWidget_QBaseUpdateMicroFocus(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateMicroFocus_IsBase(true);
        vqtablewidget->updateMicroFocus();
    } else {
        vqtablewidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnUpdateMicroFocus(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_Create(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->create();
    } else {
        vqtablewidget->create();
    }
}

// Base class handler implementation
void QTableWidget_QBaseCreate(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Create_IsBase(true);
        vqtablewidget->create();
    } else {
        vqtablewidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnCreate(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Create_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableWidget_Destroy(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->destroy();
    } else {
        vqtablewidget->destroy();
    }
}

// Base class handler implementation
void QTableWidget_QBaseDestroy(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Destroy_IsBase(true);
        vqtablewidget->destroy();
    } else {
        vqtablewidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnDestroy(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_Destroy_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_FocusNextChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->focusNextChild();
    } else {
        return vqtablewidget->focusNextChild();
    }
}

// Base class handler implementation
bool QTableWidget_QBaseFocusNextChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusNextChild_IsBase(true);
        return vqtablewidget->focusNextChild();
    } else {
        return vqtablewidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusNextChild(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_FocusPreviousChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        return vqtablewidget->focusPreviousChild();
    } else {
        return vqtablewidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTableWidget_QBaseFocusPreviousChild(QTableWidget* self) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusPreviousChild_IsBase(true);
        return vqtablewidget->focusPreviousChild();
    } else {
        return vqtablewidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnFocusPreviousChild(QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = dynamic_cast<VirtualQTableWidget*>(self)) {
        vqtablewidget->setQTableWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTableWidget_Sender(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->sender();
    } else {
        return vqtablewidget->sender();
    }
}

// Base class handler implementation
QObject* QTableWidget_QBaseSender(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Sender_IsBase(true);
        return vqtablewidget->sender();
    } else {
        return vqtablewidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSender(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Sender_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_SenderSignalIndex(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->senderSignalIndex();
    } else {
        return vqtablewidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QTableWidget_QBaseSenderSignalIndex(const QTableWidget* self) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SenderSignalIndex_IsBase(true);
        return vqtablewidget->senderSignalIndex();
    } else {
        return vqtablewidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnSenderSignalIndex(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableWidget_Receivers(const QTableWidget* self, const char* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->receivers(signal);
    } else {
        return vqtablewidget->receivers(signal);
    }
}

// Base class handler implementation
int QTableWidget_QBaseReceivers(const QTableWidget* self, const char* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Receivers_IsBase(true);
        return vqtablewidget->receivers(signal);
    } else {
        return vqtablewidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnReceivers(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_Receivers_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableWidget_IsSignalConnected(const QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        return vqtablewidget->isSignalConnected(*signal);
    } else {
        return vqtablewidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTableWidget_QBaseIsSignalConnected(const QTableWidget* self, QMetaMethod* signal) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IsSignalConnected_IsBase(true);
        return vqtablewidget->isSignalConnected(*signal);
    } else {
        return vqtablewidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableWidget_OnIsSignalConnected(const QTableWidget* self, intptr_t slot) {
    if (auto* vqtablewidget = const_cast<VirtualQTableWidget*>(dynamic_cast<const VirtualQTableWidget*>(self))) {
        vqtablewidget->setQTableWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTableWidget::QTableWidget_IsSignalConnected_Callback>(slot));
    }
}

void QTableWidget_Delete(QTableWidget* self) {
    delete self;
}
