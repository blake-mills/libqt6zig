#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qscilexerjavascript.h>
#include "libqscilexerjavascript.h"
#include "libqscilexerjavascript.hxx"

QsciLexerJavaScript* QsciLexerJavaScript_new() {
    return new VirtualQsciLexerJavaScript();
}

QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent) {
    return new VirtualQsciLexerJavaScript(parent);
}

QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJavaScript_Metacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerJavaScript_OnMetacall(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_Metacall_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerJavaScript_QBaseMetacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_Metacall_IsBase(true);
        return vqscilexerjavascript->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerJavaScript_Tr(const char* s) {
    QString _ret = QsciLexerJavaScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerJavaScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerJavaScript::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setFoldAtElse(fold);
    } else {
        vqscilexerjavascript->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldAtElse_IsBase(true);
        vqscilexerjavascript->setFoldAtElse(fold);
    } else {
        vqscilexerjavascript->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldAtElse(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldComments(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setFoldComments(fold);
    } else {
        vqscilexerjavascript->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldComments(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldComments_IsBase(true);
        vqscilexerjavascript->setFoldComments(fold);
    } else {
        vqscilexerjavascript->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldComments(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setFoldCompact(fold);
    } else {
        vqscilexerjavascript->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldCompact_IsBase(true);
        vqscilexerjavascript->setFoldCompact(fold);
    } else {
        vqscilexerjavascript->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldCompact(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setFoldPreprocessor(fold);
    } else {
        vqscilexerjavascript->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldPreprocessor_IsBase(true);
        vqscilexerjavascript->setFoldPreprocessor(fold);
    } else {
        vqscilexerjavascript->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldPreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setStylePreprocessor(style);
    } else {
        vqscilexerjavascript->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetStylePreprocessor_IsBase(true);
        vqscilexerjavascript->setStylePreprocessor(style);
    } else {
        vqscilexerjavascript->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetStylePreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->language();
    } else {
        return (const char*)vqscilexerjavascript->language();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseLanguage(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Language_IsBase(true);
        return (const char*)vqscilexerjavascript->language();
    } else {
        return (const char*)vqscilexerjavascript->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLanguage(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Language_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Lexer(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->lexer();
    } else {
        return (const char*)vqscilexerjavascript->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseLexer(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Lexer_IsBase(true);
        return (const char*)vqscilexerjavascript->lexer();
    } else {
        return (const char*)vqscilexerjavascript->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexer(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Lexer_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_LexerId(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->lexerId();
    } else {
        return vqscilexerjavascript->lexerId();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseLexerId(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_LexerId_IsBase(true);
        return vqscilexerjavascript->lexerId();
    } else {
        return vqscilexerjavascript->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexerId(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_LexerId_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_AutoCompletionFillups(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseAutoCompletionFillups(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnAutoCompletionFillups(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJavaScript_AutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        QStringList _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerJavaScript_QBaseAutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
void QsciLexerJavaScript_OnAutoCompletionWordSeparators(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockEnd(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockEnd(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockEnd_IsBase(true);
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockEnd(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_BlockLookback(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->blockLookback();
    } else {
        return vqscilexerjavascript->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseBlockLookback(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockLookback_IsBase(true);
        return vqscilexerjavascript->blockLookback();
    } else {
        return vqscilexerjavascript->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockLookback(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStart(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockStart(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStart_IsBase(true);
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStart(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStartKeyword(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_BraceStyle(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->braceStyle();
    } else {
        return vqscilexerjavascript->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseBraceStyle(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BraceStyle_IsBase(true);
        return vqscilexerjavascript->braceStyle();
    } else {
        return vqscilexerjavascript->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBraceStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_CaseSensitive(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->caseSensitive();
    } else {
        return vqscilexerjavascript->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseCaseSensitive(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_CaseSensitive_IsBase(true);
        return vqscilexerjavascript->caseSensitive();
    } else {
        return vqscilexerjavascript->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCaseSensitive(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Color(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QColor(vqscilexerjavascript->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseColor(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Color_IsBase(true);
        return new QColor(vqscilexerjavascript->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnColor(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Color_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_EolFill(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEolFill(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_EolFill_IsBase(true);
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEolFill(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_EolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_Font(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QFont(vqscilexerjavascript->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJavaScript_QBaseFont(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Font_IsBase(true);
        return new QFont(vqscilexerjavascript->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnFont(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Font_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_IndentationGuideView(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->indentationGuideView();
    } else {
        return vqscilexerjavascript->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseIndentationGuideView(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_IndentationGuideView_IsBase(true);
        return vqscilexerjavascript->indentationGuideView();
    } else {
        return vqscilexerjavascript->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnIndentationGuideView(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseKeywords(const QsciLexerJavaScript* self, int set) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Keywords_IsBase(true);
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnKeywords(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Keywords_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_DefaultStyle(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->defaultStyle();
    } else {
        return vqscilexerjavascript->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseDefaultStyle(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultStyle_IsBase(true);
        return vqscilexerjavascript->defaultStyle();
    } else {
        return vqscilexerjavascript->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerJavaScript_QBaseDescription(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Description_IsBase(true);
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDescription(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Description_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Paper(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QColor(vqscilexerjavascript->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBasePaper(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Paper_IsBase(true);
        return new QColor(vqscilexerjavascript->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnPaper(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Paper_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultColorWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QColor(vqscilexerjavascript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseDefaultColorWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerjavascript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultColorWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseDefaultEolFill(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultEolFill_IsBase(true);
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultEolFill(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_DefaultFontWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QFont(vqscilexerjavascript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJavaScript_QBaseDefaultFontWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerjavascript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultFontWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultPaperWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return new QColor(vqscilexerjavascript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseDefaultPaperWithStyle(const QsciLexerJavaScript* self, int style) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerjavascript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultPaperWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setEditor(editor);
    } else {
        vqscilexerjavascript->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEditor_IsBase(true);
        vqscilexerjavascript->setEditor(editor);
    } else {
        vqscilexerjavascript->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEditor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_RefreshProperties(QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->refreshProperties();
    } else {
        vqscilexerjavascript->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseRefreshProperties(QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_RefreshProperties_IsBase(true);
        vqscilexerjavascript->refreshProperties();
    } else {
        vqscilexerjavascript->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnRefreshProperties(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_StyleBitsNeeded(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->styleBitsNeeded();
    } else {
        return vqscilexerjavascript->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseStyleBitsNeeded(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_StyleBitsNeeded_IsBase(true);
        return vqscilexerjavascript->styleBitsNeeded();
    } else {
        return vqscilexerjavascript->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnStyleBitsNeeded(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_WordCharacters(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return (const char*)vqscilexerjavascript->wordCharacters();
    } else {
        return (const char*)vqscilexerjavascript->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseWordCharacters(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_WordCharacters_IsBase(true);
        return (const char*)vqscilexerjavascript->wordCharacters();
    } else {
        return (const char*)vqscilexerjavascript->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWordCharacters(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetAutoIndentStyle_IsBase(true);
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetAutoIndentStyle(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetColor(QsciLexerJavaScript* self, QColor* c, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetColor(QsciLexerJavaScript* self, QColor* c, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetColor_IsBase(true);
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetColor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetColor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEolFill_IsBase(true);
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEolFill(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFont(QsciLexerJavaScript* self, QFont* f, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFont(QsciLexerJavaScript* self, QFont* f, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFont_IsBase(true);
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFont(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFont_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetPaper(QsciLexerJavaScript* self, QColor* c, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetPaper(QsciLexerJavaScript* self, QColor* c, int style) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetPaper_IsBase(true);
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetPaper(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseReadProperties(QsciLexerJavaScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ReadProperties_IsBase(true);
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnReadProperties(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_WriteProperties_IsBase(true);
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWriteProperties(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_Event(QsciLexerJavaScript* self, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        return vqscilexerjavascript->event(event);
    } else {
        return vqscilexerjavascript->event(event);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEvent(QsciLexerJavaScript* self, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_Event_IsBase(true);
        return vqscilexerjavascript->event(event);
    } else {
        return vqscilexerjavascript->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_Event_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_EventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        return vqscilexerjavascript->eventFilter(watched, event);
    } else {
        return vqscilexerjavascript->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_EventFilter_IsBase(true);
        return vqscilexerjavascript->eventFilter(watched, event);
    } else {
        return vqscilexerjavascript->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEventFilter(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->timerEvent(event);
    } else {
        vqscilexerjavascript->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_TimerEvent_IsBase(true);
        vqscilexerjavascript->timerEvent(event);
    } else {
        vqscilexerjavascript->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnTimerEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->childEvent(event);
    } else {
        vqscilexerjavascript->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ChildEvent_IsBase(true);
        vqscilexerjavascript->childEvent(event);
    } else {
        vqscilexerjavascript->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnChildEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->customEvent(event);
    } else {
        vqscilexerjavascript->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseCustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_CustomEvent_IsBase(true);
        vqscilexerjavascript->customEvent(event);
    } else {
        vqscilexerjavascript->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCustomEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->connectNotify(*signal);
    } else {
        vqscilexerjavascript->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseConnectNotify(QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ConnectNotify_IsBase(true);
        vqscilexerjavascript->connectNotify(*signal);
    } else {
        vqscilexerjavascript->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnConnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->disconnectNotify(*signal);
    } else {
        vqscilexerjavascript->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseDisconnectNotify(QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_DisconnectNotify_IsBase(true);
        vqscilexerjavascript->disconnectNotify(*signal);
    } else {
        vqscilexerjavascript->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDisconnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->setQsciLexerJavaScript_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->sender();
    } else {
        return vqscilexerjavascript->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerJavaScript_QBaseSender(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Sender_IsBase(true);
        return vqscilexerjavascript->sender();
    } else {
        return vqscilexerjavascript->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSender(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Sender_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->senderSignalIndex();
    } else {
        return vqscilexerjavascript->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseSenderSignalIndex(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_SenderSignalIndex_IsBase(true);
        return vqscilexerjavascript->senderSignalIndex();
    } else {
        return vqscilexerjavascript->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSenderSignalIndex(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->receivers(signal);
    } else {
        return vqscilexerjavascript->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseReceivers(const QsciLexerJavaScript* self, const char* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Receivers_IsBase(true);
        return vqscilexerjavascript->receivers(signal);
    } else {
        return vqscilexerjavascript->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnReceivers(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_Receivers_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->isSignalConnected(*signal);
    } else {
        return vqscilexerjavascript->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseIsSignalConnected(const QsciLexerJavaScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_IsSignalConnected_IsBase(true);
        return vqscilexerjavascript->isSignalConnected(*signal);
    } else {
        return vqscilexerjavascript->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnIsSignalConnected(const QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        vqscilexerjavascript->setQsciLexerJavaScript_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self) {
    delete self;
}
