#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJava so that we can call protected methods
class VirtualQsciLexerJava : public QsciLexerJava {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerJava_Metacall_Callback = int (*)(QsciLexerJava*, QMetaObject::Call, int, void**);
    using QsciLexerJava_SetFoldAtElse_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldComments_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldCompact_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldPreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetStylePreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_Language_Callback = const char* (*)();
    using QsciLexerJava_Lexer_Callback = const char* (*)();
    using QsciLexerJava_LexerId_Callback = int (*)();
    using QsciLexerJava_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerJava_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerJava_BlockEnd_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockLookback_Callback = int (*)();
    using QsciLexerJava_BlockStart_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BraceStyle_Callback = int (*)();
    using QsciLexerJava_CaseSensitive_Callback = bool (*)();
    using QsciLexerJava_Color_Callback = QColor (*)(const QsciLexerJava*, int);
    using QsciLexerJava_EolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Font_Callback = QFont (*)(const QsciLexerJava*, int);
    using QsciLexerJava_IndentationGuideView_Callback = int (*)();
    using QsciLexerJava_Keywords_Callback = const char* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultStyle_Callback = int (*)();
    using QsciLexerJava_Description_Callback = QString (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Paper_Callback = QColor (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultEolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerJava*, int);
    using QsciLexerJava_SetEditor_Callback = void (*)(QsciLexerJava*, QsciScintilla*);
    using QsciLexerJava_RefreshProperties_Callback = void (*)();
    using QsciLexerJava_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerJava_WordCharacters_Callback = const char* (*)();
    using QsciLexerJava_SetAutoIndentStyle_Callback = void (*)(QsciLexerJava*, int);
    using QsciLexerJava_SetColor_Callback = void (*)(QsciLexerJava*, const QColor&, int);
    using QsciLexerJava_SetEolFill_Callback = void (*)(QsciLexerJava*, bool, int);
    using QsciLexerJava_SetFont_Callback = void (*)(QsciLexerJava*, const QFont&, int);
    using QsciLexerJava_SetPaper_Callback = void (*)(QsciLexerJava*, const QColor&, int);
    using QsciLexerJava_ReadProperties_Callback = bool (*)(QsciLexerJava*, QSettings&, const QString&);
    using QsciLexerJava_WriteProperties_Callback = bool (*)(const QsciLexerJava*, QSettings&, const QString&);
    using QsciLexerJava_Event_Callback = bool (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_EventFilter_Callback = bool (*)(QsciLexerJava*, QObject*, QEvent*);
    using QsciLexerJava_TimerEvent_Callback = void (*)(QsciLexerJava*, QTimerEvent*);
    using QsciLexerJava_ChildEvent_Callback = void (*)(QsciLexerJava*, QChildEvent*);
    using QsciLexerJava_CustomEvent_Callback = void (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_ConnectNotify_Callback = void (*)(QsciLexerJava*, const QMetaMethod&);
    using QsciLexerJava_DisconnectNotify_Callback = void (*)(QsciLexerJava*, const QMetaMethod&);
    using QsciLexerJava_Sender_Callback = QObject* (*)();
    using QsciLexerJava_SenderSignalIndex_Callback = int (*)();
    using QsciLexerJava_Receivers_Callback = int (*)(const QsciLexerJava*, const char*);
    using QsciLexerJava_IsSignalConnected_Callback = bool (*)(const QsciLexerJava*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerJava_Metacall_Callback qscilexerjava_metacall_callback = nullptr;
    QsciLexerJava_SetFoldAtElse_Callback qscilexerjava_setfoldatelse_callback = nullptr;
    QsciLexerJava_SetFoldComments_Callback qscilexerjava_setfoldcomments_callback = nullptr;
    QsciLexerJava_SetFoldCompact_Callback qscilexerjava_setfoldcompact_callback = nullptr;
    QsciLexerJava_SetFoldPreprocessor_Callback qscilexerjava_setfoldpreprocessor_callback = nullptr;
    QsciLexerJava_SetStylePreprocessor_Callback qscilexerjava_setstylepreprocessor_callback = nullptr;
    QsciLexerJava_Language_Callback qscilexerjava_language_callback = nullptr;
    QsciLexerJava_Lexer_Callback qscilexerjava_lexer_callback = nullptr;
    QsciLexerJava_LexerId_Callback qscilexerjava_lexerid_callback = nullptr;
    QsciLexerJava_AutoCompletionFillups_Callback qscilexerjava_autocompletionfillups_callback = nullptr;
    QsciLexerJava_AutoCompletionWordSeparators_Callback qscilexerjava_autocompletionwordseparators_callback = nullptr;
    QsciLexerJava_BlockEnd_Callback qscilexerjava_blockend_callback = nullptr;
    QsciLexerJava_BlockLookback_Callback qscilexerjava_blocklookback_callback = nullptr;
    QsciLexerJava_BlockStart_Callback qscilexerjava_blockstart_callback = nullptr;
    QsciLexerJava_BlockStartKeyword_Callback qscilexerjava_blockstartkeyword_callback = nullptr;
    QsciLexerJava_BraceStyle_Callback qscilexerjava_bracestyle_callback = nullptr;
    QsciLexerJava_CaseSensitive_Callback qscilexerjava_casesensitive_callback = nullptr;
    QsciLexerJava_Color_Callback qscilexerjava_color_callback = nullptr;
    QsciLexerJava_EolFill_Callback qscilexerjava_eolfill_callback = nullptr;
    QsciLexerJava_Font_Callback qscilexerjava_font_callback = nullptr;
    QsciLexerJava_IndentationGuideView_Callback qscilexerjava_indentationguideview_callback = nullptr;
    QsciLexerJava_Keywords_Callback qscilexerjava_keywords_callback = nullptr;
    QsciLexerJava_DefaultStyle_Callback qscilexerjava_defaultstyle_callback = nullptr;
    QsciLexerJava_Description_Callback qscilexerjava_description_callback = nullptr;
    QsciLexerJava_Paper_Callback qscilexerjava_paper_callback = nullptr;
    QsciLexerJava_DefaultColorWithStyle_Callback qscilexerjava_defaultcolorwithstyle_callback = nullptr;
    QsciLexerJava_DefaultEolFill_Callback qscilexerjava_defaulteolfill_callback = nullptr;
    QsciLexerJava_DefaultFontWithStyle_Callback qscilexerjava_defaultfontwithstyle_callback = nullptr;
    QsciLexerJava_DefaultPaperWithStyle_Callback qscilexerjava_defaultpaperwithstyle_callback = nullptr;
    QsciLexerJava_SetEditor_Callback qscilexerjava_seteditor_callback = nullptr;
    QsciLexerJava_RefreshProperties_Callback qscilexerjava_refreshproperties_callback = nullptr;
    QsciLexerJava_StyleBitsNeeded_Callback qscilexerjava_stylebitsneeded_callback = nullptr;
    QsciLexerJava_WordCharacters_Callback qscilexerjava_wordcharacters_callback = nullptr;
    QsciLexerJava_SetAutoIndentStyle_Callback qscilexerjava_setautoindentstyle_callback = nullptr;
    QsciLexerJava_SetColor_Callback qscilexerjava_setcolor_callback = nullptr;
    QsciLexerJava_SetEolFill_Callback qscilexerjava_seteolfill_callback = nullptr;
    QsciLexerJava_SetFont_Callback qscilexerjava_setfont_callback = nullptr;
    QsciLexerJava_SetPaper_Callback qscilexerjava_setpaper_callback = nullptr;
    QsciLexerJava_ReadProperties_Callback qscilexerjava_readproperties_callback = nullptr;
    QsciLexerJava_WriteProperties_Callback qscilexerjava_writeproperties_callback = nullptr;
    QsciLexerJava_Event_Callback qscilexerjava_event_callback = nullptr;
    QsciLexerJava_EventFilter_Callback qscilexerjava_eventfilter_callback = nullptr;
    QsciLexerJava_TimerEvent_Callback qscilexerjava_timerevent_callback = nullptr;
    QsciLexerJava_ChildEvent_Callback qscilexerjava_childevent_callback = nullptr;
    QsciLexerJava_CustomEvent_Callback qscilexerjava_customevent_callback = nullptr;
    QsciLexerJava_ConnectNotify_Callback qscilexerjava_connectnotify_callback = nullptr;
    QsciLexerJava_DisconnectNotify_Callback qscilexerjava_disconnectnotify_callback = nullptr;
    QsciLexerJava_Sender_Callback qscilexerjava_sender_callback = nullptr;
    QsciLexerJava_SenderSignalIndex_Callback qscilexerjava_sendersignalindex_callback = nullptr;
    QsciLexerJava_Receivers_Callback qscilexerjava_receivers_callback = nullptr;
    QsciLexerJava_IsSignalConnected_Callback qscilexerjava_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerjava_metacall_isbase = false;
    mutable bool qscilexerjava_setfoldatelse_isbase = false;
    mutable bool qscilexerjava_setfoldcomments_isbase = false;
    mutable bool qscilexerjava_setfoldcompact_isbase = false;
    mutable bool qscilexerjava_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerjava_setstylepreprocessor_isbase = false;
    mutable bool qscilexerjava_language_isbase = false;
    mutable bool qscilexerjava_lexer_isbase = false;
    mutable bool qscilexerjava_lexerid_isbase = false;
    mutable bool qscilexerjava_autocompletionfillups_isbase = false;
    mutable bool qscilexerjava_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerjava_blockend_isbase = false;
    mutable bool qscilexerjava_blocklookback_isbase = false;
    mutable bool qscilexerjava_blockstart_isbase = false;
    mutable bool qscilexerjava_blockstartkeyword_isbase = false;
    mutable bool qscilexerjava_bracestyle_isbase = false;
    mutable bool qscilexerjava_casesensitive_isbase = false;
    mutable bool qscilexerjava_color_isbase = false;
    mutable bool qscilexerjava_eolfill_isbase = false;
    mutable bool qscilexerjava_font_isbase = false;
    mutable bool qscilexerjava_indentationguideview_isbase = false;
    mutable bool qscilexerjava_keywords_isbase = false;
    mutable bool qscilexerjava_defaultstyle_isbase = false;
    mutable bool qscilexerjava_description_isbase = false;
    mutable bool qscilexerjava_paper_isbase = false;
    mutable bool qscilexerjava_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerjava_defaulteolfill_isbase = false;
    mutable bool qscilexerjava_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerjava_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerjava_seteditor_isbase = false;
    mutable bool qscilexerjava_refreshproperties_isbase = false;
    mutable bool qscilexerjava_stylebitsneeded_isbase = false;
    mutable bool qscilexerjava_wordcharacters_isbase = false;
    mutable bool qscilexerjava_setautoindentstyle_isbase = false;
    mutable bool qscilexerjava_setcolor_isbase = false;
    mutable bool qscilexerjava_seteolfill_isbase = false;
    mutable bool qscilexerjava_setfont_isbase = false;
    mutable bool qscilexerjava_setpaper_isbase = false;
    mutable bool qscilexerjava_readproperties_isbase = false;
    mutable bool qscilexerjava_writeproperties_isbase = false;
    mutable bool qscilexerjava_event_isbase = false;
    mutable bool qscilexerjava_eventfilter_isbase = false;
    mutable bool qscilexerjava_timerevent_isbase = false;
    mutable bool qscilexerjava_childevent_isbase = false;
    mutable bool qscilexerjava_customevent_isbase = false;
    mutable bool qscilexerjava_connectnotify_isbase = false;
    mutable bool qscilexerjava_disconnectnotify_isbase = false;
    mutable bool qscilexerjava_sender_isbase = false;
    mutable bool qscilexerjava_sendersignalindex_isbase = false;
    mutable bool qscilexerjava_receivers_isbase = false;
    mutable bool qscilexerjava_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerJava() : QsciLexerJava(){};
    VirtualQsciLexerJava(QObject* parent) : QsciLexerJava(parent){};

    ~VirtualQsciLexerJava() {
        qscilexerjava_metacall_callback = nullptr;
        qscilexerjava_setfoldatelse_callback = nullptr;
        qscilexerjava_setfoldcomments_callback = nullptr;
        qscilexerjava_setfoldcompact_callback = nullptr;
        qscilexerjava_setfoldpreprocessor_callback = nullptr;
        qscilexerjava_setstylepreprocessor_callback = nullptr;
        qscilexerjava_language_callback = nullptr;
        qscilexerjava_lexer_callback = nullptr;
        qscilexerjava_lexerid_callback = nullptr;
        qscilexerjava_autocompletionfillups_callback = nullptr;
        qscilexerjava_autocompletionwordseparators_callback = nullptr;
        qscilexerjava_blockend_callback = nullptr;
        qscilexerjava_blocklookback_callback = nullptr;
        qscilexerjava_blockstart_callback = nullptr;
        qscilexerjava_blockstartkeyword_callback = nullptr;
        qscilexerjava_bracestyle_callback = nullptr;
        qscilexerjava_casesensitive_callback = nullptr;
        qscilexerjava_color_callback = nullptr;
        qscilexerjava_eolfill_callback = nullptr;
        qscilexerjava_font_callback = nullptr;
        qscilexerjava_indentationguideview_callback = nullptr;
        qscilexerjava_keywords_callback = nullptr;
        qscilexerjava_defaultstyle_callback = nullptr;
        qscilexerjava_description_callback = nullptr;
        qscilexerjava_paper_callback = nullptr;
        qscilexerjava_defaultcolorwithstyle_callback = nullptr;
        qscilexerjava_defaulteolfill_callback = nullptr;
        qscilexerjava_defaultfontwithstyle_callback = nullptr;
        qscilexerjava_defaultpaperwithstyle_callback = nullptr;
        qscilexerjava_seteditor_callback = nullptr;
        qscilexerjava_refreshproperties_callback = nullptr;
        qscilexerjava_stylebitsneeded_callback = nullptr;
        qscilexerjava_wordcharacters_callback = nullptr;
        qscilexerjava_setautoindentstyle_callback = nullptr;
        qscilexerjava_setcolor_callback = nullptr;
        qscilexerjava_seteolfill_callback = nullptr;
        qscilexerjava_setfont_callback = nullptr;
        qscilexerjava_setpaper_callback = nullptr;
        qscilexerjava_readproperties_callback = nullptr;
        qscilexerjava_writeproperties_callback = nullptr;
        qscilexerjava_event_callback = nullptr;
        qscilexerjava_eventfilter_callback = nullptr;
        qscilexerjava_timerevent_callback = nullptr;
        qscilexerjava_childevent_callback = nullptr;
        qscilexerjava_customevent_callback = nullptr;
        qscilexerjava_connectnotify_callback = nullptr;
        qscilexerjava_disconnectnotify_callback = nullptr;
        qscilexerjava_sender_callback = nullptr;
        qscilexerjava_sendersignalindex_callback = nullptr;
        qscilexerjava_receivers_callback = nullptr;
        qscilexerjava_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerJava_Metacall_Callback(QsciLexerJava_Metacall_Callback cb) { qscilexerjava_metacall_callback = cb; }
    void setQsciLexerJava_SetFoldAtElse_Callback(QsciLexerJava_SetFoldAtElse_Callback cb) { qscilexerjava_setfoldatelse_callback = cb; }
    void setQsciLexerJava_SetFoldComments_Callback(QsciLexerJava_SetFoldComments_Callback cb) { qscilexerjava_setfoldcomments_callback = cb; }
    void setQsciLexerJava_SetFoldCompact_Callback(QsciLexerJava_SetFoldCompact_Callback cb) { qscilexerjava_setfoldcompact_callback = cb; }
    void setQsciLexerJava_SetFoldPreprocessor_Callback(QsciLexerJava_SetFoldPreprocessor_Callback cb) { qscilexerjava_setfoldpreprocessor_callback = cb; }
    void setQsciLexerJava_SetStylePreprocessor_Callback(QsciLexerJava_SetStylePreprocessor_Callback cb) { qscilexerjava_setstylepreprocessor_callback = cb; }
    void setQsciLexerJava_Language_Callback(QsciLexerJava_Language_Callback cb) { qscilexerjava_language_callback = cb; }
    void setQsciLexerJava_Lexer_Callback(QsciLexerJava_Lexer_Callback cb) { qscilexerjava_lexer_callback = cb; }
    void setQsciLexerJava_LexerId_Callback(QsciLexerJava_LexerId_Callback cb) { qscilexerjava_lexerid_callback = cb; }
    void setQsciLexerJava_AutoCompletionFillups_Callback(QsciLexerJava_AutoCompletionFillups_Callback cb) { qscilexerjava_autocompletionfillups_callback = cb; }
    void setQsciLexerJava_AutoCompletionWordSeparators_Callback(QsciLexerJava_AutoCompletionWordSeparators_Callback cb) { qscilexerjava_autocompletionwordseparators_callback = cb; }
    void setQsciLexerJava_BlockEnd_Callback(QsciLexerJava_BlockEnd_Callback cb) { qscilexerjava_blockend_callback = cb; }
    void setQsciLexerJava_BlockLookback_Callback(QsciLexerJava_BlockLookback_Callback cb) { qscilexerjava_blocklookback_callback = cb; }
    void setQsciLexerJava_BlockStart_Callback(QsciLexerJava_BlockStart_Callback cb) { qscilexerjava_blockstart_callback = cb; }
    void setQsciLexerJava_BlockStartKeyword_Callback(QsciLexerJava_BlockStartKeyword_Callback cb) { qscilexerjava_blockstartkeyword_callback = cb; }
    void setQsciLexerJava_BraceStyle_Callback(QsciLexerJava_BraceStyle_Callback cb) { qscilexerjava_bracestyle_callback = cb; }
    void setQsciLexerJava_CaseSensitive_Callback(QsciLexerJava_CaseSensitive_Callback cb) { qscilexerjava_casesensitive_callback = cb; }
    void setQsciLexerJava_Color_Callback(QsciLexerJava_Color_Callback cb) { qscilexerjava_color_callback = cb; }
    void setQsciLexerJava_EolFill_Callback(QsciLexerJava_EolFill_Callback cb) { qscilexerjava_eolfill_callback = cb; }
    void setQsciLexerJava_Font_Callback(QsciLexerJava_Font_Callback cb) { qscilexerjava_font_callback = cb; }
    void setQsciLexerJava_IndentationGuideView_Callback(QsciLexerJava_IndentationGuideView_Callback cb) { qscilexerjava_indentationguideview_callback = cb; }
    void setQsciLexerJava_Keywords_Callback(QsciLexerJava_Keywords_Callback cb) { qscilexerjava_keywords_callback = cb; }
    void setQsciLexerJava_DefaultStyle_Callback(QsciLexerJava_DefaultStyle_Callback cb) { qscilexerjava_defaultstyle_callback = cb; }
    void setQsciLexerJava_Description_Callback(QsciLexerJava_Description_Callback cb) { qscilexerjava_description_callback = cb; }
    void setQsciLexerJava_Paper_Callback(QsciLexerJava_Paper_Callback cb) { qscilexerjava_paper_callback = cb; }
    void setQsciLexerJava_DefaultColorWithStyle_Callback(QsciLexerJava_DefaultColorWithStyle_Callback cb) { qscilexerjava_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerJava_DefaultEolFill_Callback(QsciLexerJava_DefaultEolFill_Callback cb) { qscilexerjava_defaulteolfill_callback = cb; }
    void setQsciLexerJava_DefaultFontWithStyle_Callback(QsciLexerJava_DefaultFontWithStyle_Callback cb) { qscilexerjava_defaultfontwithstyle_callback = cb; }
    void setQsciLexerJava_DefaultPaperWithStyle_Callback(QsciLexerJava_DefaultPaperWithStyle_Callback cb) { qscilexerjava_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerJava_SetEditor_Callback(QsciLexerJava_SetEditor_Callback cb) { qscilexerjava_seteditor_callback = cb; }
    void setQsciLexerJava_RefreshProperties_Callback(QsciLexerJava_RefreshProperties_Callback cb) { qscilexerjava_refreshproperties_callback = cb; }
    void setQsciLexerJava_StyleBitsNeeded_Callback(QsciLexerJava_StyleBitsNeeded_Callback cb) { qscilexerjava_stylebitsneeded_callback = cb; }
    void setQsciLexerJava_WordCharacters_Callback(QsciLexerJava_WordCharacters_Callback cb) { qscilexerjava_wordcharacters_callback = cb; }
    void setQsciLexerJava_SetAutoIndentStyle_Callback(QsciLexerJava_SetAutoIndentStyle_Callback cb) { qscilexerjava_setautoindentstyle_callback = cb; }
    void setQsciLexerJava_SetColor_Callback(QsciLexerJava_SetColor_Callback cb) { qscilexerjava_setcolor_callback = cb; }
    void setQsciLexerJava_SetEolFill_Callback(QsciLexerJava_SetEolFill_Callback cb) { qscilexerjava_seteolfill_callback = cb; }
    void setQsciLexerJava_SetFont_Callback(QsciLexerJava_SetFont_Callback cb) { qscilexerjava_setfont_callback = cb; }
    void setQsciLexerJava_SetPaper_Callback(QsciLexerJava_SetPaper_Callback cb) { qscilexerjava_setpaper_callback = cb; }
    void setQsciLexerJava_ReadProperties_Callback(QsciLexerJava_ReadProperties_Callback cb) { qscilexerjava_readproperties_callback = cb; }
    void setQsciLexerJava_WriteProperties_Callback(QsciLexerJava_WriteProperties_Callback cb) { qscilexerjava_writeproperties_callback = cb; }
    void setQsciLexerJava_Event_Callback(QsciLexerJava_Event_Callback cb) { qscilexerjava_event_callback = cb; }
    void setQsciLexerJava_EventFilter_Callback(QsciLexerJava_EventFilter_Callback cb) { qscilexerjava_eventfilter_callback = cb; }
    void setQsciLexerJava_TimerEvent_Callback(QsciLexerJava_TimerEvent_Callback cb) { qscilexerjava_timerevent_callback = cb; }
    void setQsciLexerJava_ChildEvent_Callback(QsciLexerJava_ChildEvent_Callback cb) { qscilexerjava_childevent_callback = cb; }
    void setQsciLexerJava_CustomEvent_Callback(QsciLexerJava_CustomEvent_Callback cb) { qscilexerjava_customevent_callback = cb; }
    void setQsciLexerJava_ConnectNotify_Callback(QsciLexerJava_ConnectNotify_Callback cb) { qscilexerjava_connectnotify_callback = cb; }
    void setQsciLexerJava_DisconnectNotify_Callback(QsciLexerJava_DisconnectNotify_Callback cb) { qscilexerjava_disconnectnotify_callback = cb; }
    void setQsciLexerJava_Sender_Callback(QsciLexerJava_Sender_Callback cb) { qscilexerjava_sender_callback = cb; }
    void setQsciLexerJava_SenderSignalIndex_Callback(QsciLexerJava_SenderSignalIndex_Callback cb) { qscilexerjava_sendersignalindex_callback = cb; }
    void setQsciLexerJava_Receivers_Callback(QsciLexerJava_Receivers_Callback cb) { qscilexerjava_receivers_callback = cb; }
    void setQsciLexerJava_IsSignalConnected_Callback(QsciLexerJava_IsSignalConnected_Callback cb) { qscilexerjava_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerJava_Metacall_IsBase(bool value) const { qscilexerjava_metacall_isbase = value; }
    void setQsciLexerJava_SetFoldAtElse_IsBase(bool value) const { qscilexerjava_setfoldatelse_isbase = value; }
    void setQsciLexerJava_SetFoldComments_IsBase(bool value) const { qscilexerjava_setfoldcomments_isbase = value; }
    void setQsciLexerJava_SetFoldCompact_IsBase(bool value) const { qscilexerjava_setfoldcompact_isbase = value; }
    void setQsciLexerJava_SetFoldPreprocessor_IsBase(bool value) const { qscilexerjava_setfoldpreprocessor_isbase = value; }
    void setQsciLexerJava_SetStylePreprocessor_IsBase(bool value) const { qscilexerjava_setstylepreprocessor_isbase = value; }
    void setQsciLexerJava_Language_IsBase(bool value) const { qscilexerjava_language_isbase = value; }
    void setQsciLexerJava_Lexer_IsBase(bool value) const { qscilexerjava_lexer_isbase = value; }
    void setQsciLexerJava_LexerId_IsBase(bool value) const { qscilexerjava_lexerid_isbase = value; }
    void setQsciLexerJava_AutoCompletionFillups_IsBase(bool value) const { qscilexerjava_autocompletionfillups_isbase = value; }
    void setQsciLexerJava_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerjava_autocompletionwordseparators_isbase = value; }
    void setQsciLexerJava_BlockEnd_IsBase(bool value) const { qscilexerjava_blockend_isbase = value; }
    void setQsciLexerJava_BlockLookback_IsBase(bool value) const { qscilexerjava_blocklookback_isbase = value; }
    void setQsciLexerJava_BlockStart_IsBase(bool value) const { qscilexerjava_blockstart_isbase = value; }
    void setQsciLexerJava_BlockStartKeyword_IsBase(bool value) const { qscilexerjava_blockstartkeyword_isbase = value; }
    void setQsciLexerJava_BraceStyle_IsBase(bool value) const { qscilexerjava_bracestyle_isbase = value; }
    void setQsciLexerJava_CaseSensitive_IsBase(bool value) const { qscilexerjava_casesensitive_isbase = value; }
    void setQsciLexerJava_Color_IsBase(bool value) const { qscilexerjava_color_isbase = value; }
    void setQsciLexerJava_EolFill_IsBase(bool value) const { qscilexerjava_eolfill_isbase = value; }
    void setQsciLexerJava_Font_IsBase(bool value) const { qscilexerjava_font_isbase = value; }
    void setQsciLexerJava_IndentationGuideView_IsBase(bool value) const { qscilexerjava_indentationguideview_isbase = value; }
    void setQsciLexerJava_Keywords_IsBase(bool value) const { qscilexerjava_keywords_isbase = value; }
    void setQsciLexerJava_DefaultStyle_IsBase(bool value) const { qscilexerjava_defaultstyle_isbase = value; }
    void setQsciLexerJava_Description_IsBase(bool value) const { qscilexerjava_description_isbase = value; }
    void setQsciLexerJava_Paper_IsBase(bool value) const { qscilexerjava_paper_isbase = value; }
    void setQsciLexerJava_DefaultColorWithStyle_IsBase(bool value) const { qscilexerjava_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerJava_DefaultEolFill_IsBase(bool value) const { qscilexerjava_defaulteolfill_isbase = value; }
    void setQsciLexerJava_DefaultFontWithStyle_IsBase(bool value) const { qscilexerjava_defaultfontwithstyle_isbase = value; }
    void setQsciLexerJava_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerjava_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerJava_SetEditor_IsBase(bool value) const { qscilexerjava_seteditor_isbase = value; }
    void setQsciLexerJava_RefreshProperties_IsBase(bool value) const { qscilexerjava_refreshproperties_isbase = value; }
    void setQsciLexerJava_StyleBitsNeeded_IsBase(bool value) const { qscilexerjava_stylebitsneeded_isbase = value; }
    void setQsciLexerJava_WordCharacters_IsBase(bool value) const { qscilexerjava_wordcharacters_isbase = value; }
    void setQsciLexerJava_SetAutoIndentStyle_IsBase(bool value) const { qscilexerjava_setautoindentstyle_isbase = value; }
    void setQsciLexerJava_SetColor_IsBase(bool value) const { qscilexerjava_setcolor_isbase = value; }
    void setQsciLexerJava_SetEolFill_IsBase(bool value) const { qscilexerjava_seteolfill_isbase = value; }
    void setQsciLexerJava_SetFont_IsBase(bool value) const { qscilexerjava_setfont_isbase = value; }
    void setQsciLexerJava_SetPaper_IsBase(bool value) const { qscilexerjava_setpaper_isbase = value; }
    void setQsciLexerJava_ReadProperties_IsBase(bool value) const { qscilexerjava_readproperties_isbase = value; }
    void setQsciLexerJava_WriteProperties_IsBase(bool value) const { qscilexerjava_writeproperties_isbase = value; }
    void setQsciLexerJava_Event_IsBase(bool value) const { qscilexerjava_event_isbase = value; }
    void setQsciLexerJava_EventFilter_IsBase(bool value) const { qscilexerjava_eventfilter_isbase = value; }
    void setQsciLexerJava_TimerEvent_IsBase(bool value) const { qscilexerjava_timerevent_isbase = value; }
    void setQsciLexerJava_ChildEvent_IsBase(bool value) const { qscilexerjava_childevent_isbase = value; }
    void setQsciLexerJava_CustomEvent_IsBase(bool value) const { qscilexerjava_customevent_isbase = value; }
    void setQsciLexerJava_ConnectNotify_IsBase(bool value) const { qscilexerjava_connectnotify_isbase = value; }
    void setQsciLexerJava_DisconnectNotify_IsBase(bool value) const { qscilexerjava_disconnectnotify_isbase = value; }
    void setQsciLexerJava_Sender_IsBase(bool value) const { qscilexerjava_sender_isbase = value; }
    void setQsciLexerJava_SenderSignalIndex_IsBase(bool value) const { qscilexerjava_sendersignalindex_isbase = value; }
    void setQsciLexerJava_Receivers_IsBase(bool value) const { qscilexerjava_receivers_isbase = value; }
    void setQsciLexerJava_IsSignalConnected_IsBase(bool value) const { qscilexerjava_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjava_metacall_isbase) {
            qscilexerjava_metacall_isbase = false;
            return QsciLexerJava::qt_metacall(param1, param2, param3);
        } else if (qscilexerjava_metacall_callback != nullptr) {
            return qscilexerjava_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerJava::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerjava_setfoldatelse_isbase) {
            qscilexerjava_setfoldatelse_isbase = false;
            QsciLexerJava::setFoldAtElse(fold);
        } else if (qscilexerjava_setfoldatelse_callback != nullptr) {
            qscilexerjava_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerJava::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerjava_setfoldcomments_isbase) {
            qscilexerjava_setfoldcomments_isbase = false;
            QsciLexerJava::setFoldComments(fold);
        } else if (qscilexerjava_setfoldcomments_callback != nullptr) {
            qscilexerjava_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerJava::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerjava_setfoldcompact_isbase) {
            qscilexerjava_setfoldcompact_isbase = false;
            QsciLexerJava::setFoldCompact(fold);
        } else if (qscilexerjava_setfoldcompact_callback != nullptr) {
            qscilexerjava_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerJava::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerjava_setfoldpreprocessor_isbase) {
            qscilexerjava_setfoldpreprocessor_isbase = false;
            QsciLexerJava::setFoldPreprocessor(fold);
        } else if (qscilexerjava_setfoldpreprocessor_callback != nullptr) {
            qscilexerjava_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerJava::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexerjava_setstylepreprocessor_isbase) {
            qscilexerjava_setstylepreprocessor_isbase = false;
            QsciLexerJava::setStylePreprocessor(style);
        } else if (qscilexerjava_setstylepreprocessor_callback != nullptr) {
            qscilexerjava_setstylepreprocessor_callback(this, style);
        } else {
            QsciLexerJava::setStylePreprocessor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerjava_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjava_lexer_isbase) {
            qscilexerjava_lexer_isbase = false;
            return QsciLexerJava::lexer();
        } else if (qscilexerjava_lexer_callback != nullptr) {
            return qscilexerjava_lexer_callback();
        } else {
            return QsciLexerJava::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjava_lexerid_isbase) {
            qscilexerjava_lexerid_isbase = false;
            return QsciLexerJava::lexerId();
        } else if (qscilexerjava_lexerid_callback != nullptr) {
            return qscilexerjava_lexerid_callback();
        } else {
            return QsciLexerJava::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjava_autocompletionfillups_isbase) {
            qscilexerjava_autocompletionfillups_isbase = false;
            return QsciLexerJava::autoCompletionFillups();
        } else if (qscilexerjava_autocompletionfillups_callback != nullptr) {
            return qscilexerjava_autocompletionfillups_callback();
        } else {
            return QsciLexerJava::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerjava_autocompletionwordseparators_isbase) {
            qscilexerjava_autocompletionwordseparators_isbase = false;
            return QsciLexerJava::autoCompletionWordSeparators();
        } else if (qscilexerjava_autocompletionwordseparators_callback != nullptr) {
            return qscilexerjava_autocompletionwordseparators_callback();
        } else {
            return QsciLexerJava::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjava_blockend_isbase) {
            qscilexerjava_blockend_isbase = false;
            return QsciLexerJava::blockEnd(style);
        } else if (qscilexerjava_blockend_callback != nullptr) {
            return qscilexerjava_blockend_callback(this, style);
        } else {
            return QsciLexerJava::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjava_blocklookback_isbase) {
            qscilexerjava_blocklookback_isbase = false;
            return QsciLexerJava::blockLookback();
        } else if (qscilexerjava_blocklookback_callback != nullptr) {
            return qscilexerjava_blocklookback_callback();
        } else {
            return QsciLexerJava::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjava_blockstart_isbase) {
            qscilexerjava_blockstart_isbase = false;
            return QsciLexerJava::blockStart(style);
        } else if (qscilexerjava_blockstart_callback != nullptr) {
            return qscilexerjava_blockstart_callback(this, style);
        } else {
            return QsciLexerJava::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjava_blockstartkeyword_isbase) {
            qscilexerjava_blockstartkeyword_isbase = false;
            return QsciLexerJava::blockStartKeyword(style);
        } else if (qscilexerjava_blockstartkeyword_callback != nullptr) {
            return qscilexerjava_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerJava::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjava_bracestyle_isbase) {
            qscilexerjava_bracestyle_isbase = false;
            return QsciLexerJava::braceStyle();
        } else if (qscilexerjava_bracestyle_callback != nullptr) {
            return qscilexerjava_bracestyle_callback();
        } else {
            return QsciLexerJava::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjava_casesensitive_isbase) {
            qscilexerjava_casesensitive_isbase = false;
            return QsciLexerJava::caseSensitive();
        } else if (qscilexerjava_casesensitive_callback != nullptr) {
            return qscilexerjava_casesensitive_callback();
        } else {
            return QsciLexerJava::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjava_color_isbase) {
            qscilexerjava_color_isbase = false;
            return QsciLexerJava::color(style);
        } else if (qscilexerjava_color_callback != nullptr) {
            return qscilexerjava_color_callback(this, style);
        } else {
            return QsciLexerJava::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjava_eolfill_isbase) {
            qscilexerjava_eolfill_isbase = false;
            return QsciLexerJava::eolFill(style);
        } else if (qscilexerjava_eolfill_callback != nullptr) {
            return qscilexerjava_eolfill_callback(this, style);
        } else {
            return QsciLexerJava::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjava_font_isbase) {
            qscilexerjava_font_isbase = false;
            return QsciLexerJava::font(style);
        } else if (qscilexerjava_font_callback != nullptr) {
            return qscilexerjava_font_callback(this, style);
        } else {
            return QsciLexerJava::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjava_indentationguideview_isbase) {
            qscilexerjava_indentationguideview_isbase = false;
            return QsciLexerJava::indentationGuideView();
        } else if (qscilexerjava_indentationguideview_callback != nullptr) {
            return qscilexerjava_indentationguideview_callback();
        } else {
            return QsciLexerJava::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjava_keywords_isbase) {
            qscilexerjava_keywords_isbase = false;
            return QsciLexerJava::keywords(set);
        } else if (qscilexerjava_keywords_callback != nullptr) {
            return qscilexerjava_keywords_callback(this, set);
        } else {
            return QsciLexerJava::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjava_defaultstyle_isbase) {
            qscilexerjava_defaultstyle_isbase = false;
            return QsciLexerJava::defaultStyle();
        } else if (qscilexerjava_defaultstyle_callback != nullptr) {
            return qscilexerjava_defaultstyle_callback();
        } else {
            return QsciLexerJava::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerjava_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerjava_paper_isbase) {
            qscilexerjava_paper_isbase = false;
            return QsciLexerJava::paper(style);
        } else if (qscilexerjava_paper_callback != nullptr) {
            return qscilexerjava_paper_callback(this, style);
        } else {
            return QsciLexerJava::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjava_defaultcolorwithstyle_isbase) {
            qscilexerjava_defaultcolorwithstyle_isbase = false;
            return QsciLexerJava::defaultColor(style);
        } else if (qscilexerjava_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerjava_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerJava::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjava_defaulteolfill_isbase) {
            qscilexerjava_defaulteolfill_isbase = false;
            return QsciLexerJava::defaultEolFill(style);
        } else if (qscilexerjava_defaulteolfill_callback != nullptr) {
            return qscilexerjava_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerJava::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjava_defaultfontwithstyle_isbase) {
            qscilexerjava_defaultfontwithstyle_isbase = false;
            return QsciLexerJava::defaultFont(style);
        } else if (qscilexerjava_defaultfontwithstyle_callback != nullptr) {
            return qscilexerjava_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerJava::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjava_defaultpaperwithstyle_isbase) {
            qscilexerjava_defaultpaperwithstyle_isbase = false;
            return QsciLexerJava::defaultPaper(style);
        } else if (qscilexerjava_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerjava_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerJava::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjava_seteditor_isbase) {
            qscilexerjava_seteditor_isbase = false;
            QsciLexerJava::setEditor(editor);
        } else if (qscilexerjava_seteditor_callback != nullptr) {
            qscilexerjava_seteditor_callback(this, editor);
        } else {
            QsciLexerJava::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjava_refreshproperties_isbase) {
            qscilexerjava_refreshproperties_isbase = false;
            QsciLexerJava::refreshProperties();
        } else if (qscilexerjava_refreshproperties_callback != nullptr) {
            qscilexerjava_refreshproperties_callback();
        } else {
            QsciLexerJava::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjava_stylebitsneeded_isbase) {
            qscilexerjava_stylebitsneeded_isbase = false;
            return QsciLexerJava::styleBitsNeeded();
        } else if (qscilexerjava_stylebitsneeded_callback != nullptr) {
            return qscilexerjava_stylebitsneeded_callback();
        } else {
            return QsciLexerJava::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjava_wordcharacters_isbase) {
            qscilexerjava_wordcharacters_isbase = false;
            return QsciLexerJava::wordCharacters();
        } else if (qscilexerjava_wordcharacters_callback != nullptr) {
            return qscilexerjava_wordcharacters_callback();
        } else {
            return QsciLexerJava::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjava_setautoindentstyle_isbase) {
            qscilexerjava_setautoindentstyle_isbase = false;
            QsciLexerJava::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerjava_setautoindentstyle_callback != nullptr) {
            qscilexerjava_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerJava::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjava_setcolor_isbase) {
            qscilexerjava_setcolor_isbase = false;
            QsciLexerJava::setColor(c, style);
        } else if (qscilexerjava_setcolor_callback != nullptr) {
            qscilexerjava_setcolor_callback(this, c, style);
        } else {
            QsciLexerJava::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjava_seteolfill_isbase) {
            qscilexerjava_seteolfill_isbase = false;
            QsciLexerJava::setEolFill(eoffill, style);
        } else if (qscilexerjava_seteolfill_callback != nullptr) {
            qscilexerjava_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerJava::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjava_setfont_isbase) {
            qscilexerjava_setfont_isbase = false;
            QsciLexerJava::setFont(f, style);
        } else if (qscilexerjava_setfont_callback != nullptr) {
            qscilexerjava_setfont_callback(this, f, style);
        } else {
            QsciLexerJava::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjava_setpaper_isbase) {
            qscilexerjava_setpaper_isbase = false;
            QsciLexerJava::setPaper(c, style);
        } else if (qscilexerjava_setpaper_callback != nullptr) {
            qscilexerjava_setpaper_callback(this, c, style);
        } else {
            QsciLexerJava::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjava_readproperties_isbase) {
            qscilexerjava_readproperties_isbase = false;
            return QsciLexerJava::readProperties(qs, prefix);
        } else if (qscilexerjava_readproperties_callback != nullptr) {
            return qscilexerjava_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerJava::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjava_writeproperties_isbase) {
            qscilexerjava_writeproperties_isbase = false;
            return QsciLexerJava::writeProperties(qs, prefix);
        } else if (qscilexerjava_writeproperties_callback != nullptr) {
            return qscilexerjava_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerJava::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjava_event_isbase) {
            qscilexerjava_event_isbase = false;
            return QsciLexerJava::event(event);
        } else if (qscilexerjava_event_callback != nullptr) {
            return qscilexerjava_event_callback(this, event);
        } else {
            return QsciLexerJava::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjava_eventfilter_isbase) {
            qscilexerjava_eventfilter_isbase = false;
            return QsciLexerJava::eventFilter(watched, event);
        } else if (qscilexerjava_eventfilter_callback != nullptr) {
            return qscilexerjava_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerJava::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjava_timerevent_isbase) {
            qscilexerjava_timerevent_isbase = false;
            QsciLexerJava::timerEvent(event);
        } else if (qscilexerjava_timerevent_callback != nullptr) {
            qscilexerjava_timerevent_callback(this, event);
        } else {
            QsciLexerJava::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjava_childevent_isbase) {
            qscilexerjava_childevent_isbase = false;
            QsciLexerJava::childEvent(event);
        } else if (qscilexerjava_childevent_callback != nullptr) {
            qscilexerjava_childevent_callback(this, event);
        } else {
            QsciLexerJava::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjava_customevent_isbase) {
            qscilexerjava_customevent_isbase = false;
            QsciLexerJava::customEvent(event);
        } else if (qscilexerjava_customevent_callback != nullptr) {
            qscilexerjava_customevent_callback(this, event);
        } else {
            QsciLexerJava::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_connectnotify_isbase) {
            qscilexerjava_connectnotify_isbase = false;
            QsciLexerJava::connectNotify(signal);
        } else if (qscilexerjava_connectnotify_callback != nullptr) {
            qscilexerjava_connectnotify_callback(this, signal);
        } else {
            QsciLexerJava::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_disconnectnotify_isbase) {
            qscilexerjava_disconnectnotify_isbase = false;
            QsciLexerJava::disconnectNotify(signal);
        } else if (qscilexerjava_disconnectnotify_callback != nullptr) {
            qscilexerjava_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerJava::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerjava_sender_isbase) {
            qscilexerjava_sender_isbase = false;
            return QsciLexerJava::sender();
        } else if (qscilexerjava_sender_callback != nullptr) {
            return qscilexerjava_sender_callback();
        } else {
            return QsciLexerJava::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerjava_sendersignalindex_isbase) {
            qscilexerjava_sendersignalindex_isbase = false;
            return QsciLexerJava::senderSignalIndex();
        } else if (qscilexerjava_sendersignalindex_callback != nullptr) {
            return qscilexerjava_sendersignalindex_callback();
        } else {
            return QsciLexerJava::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerjava_receivers_isbase) {
            qscilexerjava_receivers_isbase = false;
            return QsciLexerJava::receivers(signal);
        } else if (qscilexerjava_receivers_callback != nullptr) {
            return qscilexerjava_receivers_callback(this, signal);
        } else {
            return QsciLexerJava::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerjava_issignalconnected_isbase) {
            qscilexerjava_issignalconnected_isbase = false;
            return QsciLexerJava::isSignalConnected(signal);
        } else if (qscilexerjava_issignalconnected_callback != nullptr) {
            return qscilexerjava_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerJava::isSignalConnected(signal);
        }
    }
};

#endif
