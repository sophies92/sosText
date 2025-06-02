/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/mainWindow/mainWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "requestOpenFileDialogSignal",
    "",
    "requestNewProjectSignal",
    "requestWelcomeTabSignal",
    "requestFileTabSignal",
    "addNewWelcomeTab",
    "WelcomeTab*",
    "tab",
    "addNewFileTab",
    "NewFileTab*",
    "closeTab",
    "index",
    "fileOpened",
    "std::filesystem::path*",
    "path",
    "projectOpened",
    "fileSaved",
    "allFilesSaved"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[21];
    char stringdata6[17];
    char stringdata7[12];
    char stringdata8[4];
    char stringdata9[14];
    char stringdata10[12];
    char stringdata11[9];
    char stringdata12[6];
    char stringdata13[11];
    char stringdata14[23];
    char stringdata15[5];
    char stringdata16[14];
    char stringdata17[10];
    char stringdata18[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "requestOpenFileDialogSignal"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 23),  // "requestNewProjectSignal"
        QT_MOC_LITERAL(64, 23),  // "requestWelcomeTabSignal"
        QT_MOC_LITERAL(88, 20),  // "requestFileTabSignal"
        QT_MOC_LITERAL(109, 16),  // "addNewWelcomeTab"
        QT_MOC_LITERAL(126, 11),  // "WelcomeTab*"
        QT_MOC_LITERAL(138, 3),  // "tab"
        QT_MOC_LITERAL(142, 13),  // "addNewFileTab"
        QT_MOC_LITERAL(156, 11),  // "NewFileTab*"
        QT_MOC_LITERAL(168, 8),  // "closeTab"
        QT_MOC_LITERAL(177, 5),  // "index"
        QT_MOC_LITERAL(183, 10),  // "fileOpened"
        QT_MOC_LITERAL(194, 22),  // "std::filesystem::path*"
        QT_MOC_LITERAL(217, 4),  // "path"
        QT_MOC_LITERAL(222, 13),  // "projectOpened"
        QT_MOC_LITERAL(236, 9),  // "fileSaved"
        QT_MOC_LITERAL(246, 13)   // "allFilesSaved"
    },
    "MainWindow",
    "requestOpenFileDialogSignal",
    "",
    "requestNewProjectSignal",
    "requestWelcomeTabSignal",
    "requestFileTabSignal",
    "addNewWelcomeTab",
    "WelcomeTab*",
    "tab",
    "addNewFileTab",
    "NewFileTab*",
    "closeTab",
    "index",
    "fileOpened",
    "std::filesystem::path*",
    "path",
    "projectOpened",
    "fileSaved",
    "allFilesSaved"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,
       5,    0,   83,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   84,    2, 0x0a,    5 /* Public */,
       9,    1,   87,    2, 0x0a,    7 /* Public */,
      11,    1,   90,    2, 0x0a,    9 /* Public */,
      13,    1,   93,    2, 0x0a,   11 /* Public */,
      16,    1,   96,    2, 0x0a,   13 /* Public */,
      17,    0,   99,    2, 0x0a,   15 /* Public */,
      18,    0,  100,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'requestOpenFileDialogSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestNewProjectSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestWelcomeTabSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestFileTabSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addNewWelcomeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WelcomeTab *, std::false_type>,
        // method 'addNewFileTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NewFileTab *, std::false_type>,
        // method 'closeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fileOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::filesystem::path *, std::false_type>,
        // method 'projectOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::filesystem::path *, std::false_type>,
        // method 'fileSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allFilesSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestOpenFileDialogSignal(); break;
        case 1: _t->requestNewProjectSignal(); break;
        case 2: _t->requestWelcomeTabSignal(); break;
        case 3: _t->requestFileTabSignal(); break;
        case 4: _t->addNewWelcomeTab((*reinterpret_cast< std::add_pointer_t<WelcomeTab*>>(_a[1]))); break;
        case 5: _t->addNewFileTab((*reinterpret_cast< std::add_pointer_t<NewFileTab*>>(_a[1]))); break;
        case 6: _t->closeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->fileOpened((*reinterpret_cast< std::add_pointer_t<std::filesystem::path*>>(_a[1]))); break;
        case 8: _t->projectOpened((*reinterpret_cast< std::add_pointer_t<std::filesystem::path*>>(_a[1]))); break;
        case 9: _t->fileSaved(); break;
        case 10: _t->allFilesSaved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
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
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::requestOpenFileDialogSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::requestNewProjectSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::requestWelcomeTabSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::requestFileTabSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::requestOpenFileDialogSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::requestNewProjectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::requestWelcomeTabSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::requestFileTabSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
