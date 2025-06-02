/****************************************************************************
** Meta object code from reading C++ file 'loadFileDialogWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/openFileDialog/loadFileDialogWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadFileDialogWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS = QtMocHelpers::stringData(
    "LoadFileDialogWindow",
    "fileOpened",
    "",
    "std::filesystem::path*",
    "path",
    "onDirListClick",
    "QModelIndex",
    "index",
    "openFileButton"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[21];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS_t qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "LoadFileDialogWindow"
        QT_MOC_LITERAL(21, 10),  // "fileOpened"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 22),  // "std::filesystem::path*"
        QT_MOC_LITERAL(56, 4),  // "path"
        QT_MOC_LITERAL(61, 14),  // "onDirListClick"
        QT_MOC_LITERAL(76, 11),  // "QModelIndex"
        QT_MOC_LITERAL(88, 5),  // "index"
        QT_MOC_LITERAL(94, 14)   // "openFileButton"
    },
    "LoadFileDialogWindow",
    "fileOpened",
    "",
    "std::filesystem::path*",
    "path",
    "onDirListClick",
    "QModelIndex",
    "index",
    "openFileButton"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoadFileDialogWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       8,    0,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoadFileDialogWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoadFileDialogWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoadFileDialogWindow, std::true_type>,
        // method 'fileOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::filesystem::path *, std::false_type>,
        // method 'onDirListClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'openFileButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LoadFileDialogWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadFileDialogWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileOpened((*reinterpret_cast< std::add_pointer_t<std::filesystem::path*>>(_a[1]))); break;
        case 1: _t->onDirListClick((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->openFileButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoadFileDialogWindow::*)(std::filesystem::path * );
            if (_t _q_method = &LoadFileDialogWindow::fileOpened; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LoadFileDialogWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadFileDialogWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoadFileDialogWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoadFileDialogWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LoadFileDialogWindow::fileOpened(std::filesystem::path * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
