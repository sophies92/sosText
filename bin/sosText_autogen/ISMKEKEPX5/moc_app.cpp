/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/app.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS = QtMocHelpers::stringData(
    "App::App",
    "fileStartedSignal",
    "",
    "fileOpenedSignal",
    "NewFileTab*",
    "tab",
    "projectOpenedSignal",
    "std::filesystem::path*",
    "path",
    "newWelcomeTabSignal",
    "WelcomeTab*",
    "newFileTabSignal",
    "showMainWindow",
    "openFileDialogRequested",
    "newProjectWindowRequested",
    "welcomeTabRequested",
    "fileTabRequested",
    "fileStarted",
    "fileOpened"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[9];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[12];
    char stringdata5[4];
    char stringdata6[20];
    char stringdata7[23];
    char stringdata8[5];
    char stringdata9[20];
    char stringdata10[12];
    char stringdata11[17];
    char stringdata12[15];
    char stringdata13[24];
    char stringdata14[26];
    char stringdata15[20];
    char stringdata16[17];
    char stringdata17[12];
    char stringdata18[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS_t qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "App::App"
        QT_MOC_LITERAL(9, 17),  // "fileStartedSignal"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 16),  // "fileOpenedSignal"
        QT_MOC_LITERAL(45, 11),  // "NewFileTab*"
        QT_MOC_LITERAL(57, 3),  // "tab"
        QT_MOC_LITERAL(61, 19),  // "projectOpenedSignal"
        QT_MOC_LITERAL(81, 22),  // "std::filesystem::path*"
        QT_MOC_LITERAL(104, 4),  // "path"
        QT_MOC_LITERAL(109, 19),  // "newWelcomeTabSignal"
        QT_MOC_LITERAL(129, 11),  // "WelcomeTab*"
        QT_MOC_LITERAL(141, 16),  // "newFileTabSignal"
        QT_MOC_LITERAL(158, 14),  // "showMainWindow"
        QT_MOC_LITERAL(173, 23),  // "openFileDialogRequested"
        QT_MOC_LITERAL(197, 25),  // "newProjectWindowRequested"
        QT_MOC_LITERAL(223, 19),  // "welcomeTabRequested"
        QT_MOC_LITERAL(243, 16),  // "fileTabRequested"
        QT_MOC_LITERAL(260, 11),  // "fileStarted"
        QT_MOC_LITERAL(272, 10)   // "fileOpened"
    },
    "App::App",
    "fileStartedSignal",
    "",
    "fileOpenedSignal",
    "NewFileTab*",
    "tab",
    "projectOpenedSignal",
    "std::filesystem::path*",
    "path",
    "newWelcomeTabSignal",
    "WelcomeTab*",
    "newFileTabSignal",
    "showMainWindow",
    "openFileDialogRequested",
    "newProjectWindowRequested",
    "welcomeTabRequested",
    "fileTabRequested",
    "fileStarted",
    "fileOpened"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAppSCOPEAppENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    1,   87,    2, 0x06,    2 /* Public */,
       6,    1,   90,    2, 0x06,    4 /* Public */,
       9,    1,   93,    2, 0x06,    6 /* Public */,
      11,    1,   96,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   99,    2, 0x0a,   10 /* Public */,
      13,    0,  100,    2, 0x0a,   11 /* Public */,
      14,    0,  101,    2, 0x0a,   12 /* Public */,
      15,    0,  102,    2, 0x0a,   13 /* Public */,
      16,    0,  103,    2, 0x0a,   14 /* Public */,
      17,    0,  104,    2, 0x0a,   15 /* Public */,
      18,    1,  105,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject App::App::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAppSCOPEAppENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<App, std::true_type>,
        // method 'fileStartedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileOpenedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NewFileTab *, std::false_type>,
        // method 'projectOpenedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::filesystem::path *, std::false_type>,
        // method 'newWelcomeTabSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WelcomeTab *, std::false_type>,
        // method 'newFileTabSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NewFileTab *, std::false_type>,
        // method 'showMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFileDialogRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newProjectWindowRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'welcomeTabRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileTabRequested'
        QtPrivate::TypeAndForceComplete<NewFileTab *, std::false_type>,
        // method 'fileStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::filesystem::path *, std::false_type>
    >,
    nullptr
} };

void App::App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<App *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileStartedSignal(); break;
        case 1: _t->fileOpenedSignal((*reinterpret_cast< std::add_pointer_t<NewFileTab*>>(_a[1]))); break;
        case 2: _t->projectOpenedSignal((*reinterpret_cast< std::add_pointer_t<std::filesystem::path*>>(_a[1]))); break;
        case 3: _t->newWelcomeTabSignal((*reinterpret_cast< std::add_pointer_t<WelcomeTab*>>(_a[1]))); break;
        case 4: _t->newFileTabSignal((*reinterpret_cast< std::add_pointer_t<NewFileTab*>>(_a[1]))); break;
        case 5: _t->showMainWindow(); break;
        case 6: _t->openFileDialogRequested(); break;
        case 7: _t->newProjectWindowRequested(); break;
        case 8: _t->welcomeTabRequested(); break;
        case 9: { NewFileTab* _r = _t->fileTabRequested();
            if (_a[0]) *reinterpret_cast< NewFileTab**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->fileStarted(); break;
        case 11: _t->fileOpened((*reinterpret_cast< std::add_pointer_t<std::filesystem::path*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< WelcomeTab* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (App::*)();
            if (_t _q_method = &App::fileStartedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (App::*)(NewFileTab * );
            if (_t _q_method = &App::fileOpenedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (App::*)(std::filesystem::path * );
            if (_t _q_method = &App::projectOpenedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (App::*)(WelcomeTab * );
            if (_t _q_method = &App::newWelcomeTabSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (App::*)(NewFileTab * );
            if (_t _q_method = &App::newFileTabSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *App::App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAppSCOPEAppENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int App::App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void App::App::fileStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void App::App::fileOpenedSignal(NewFileTab * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void App::App::projectOpenedSignal(std::filesystem::path * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void App::App::newWelcomeTabSignal(WelcomeTab * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void App::App::newFileTabSignal(NewFileTab * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
