/****************************************************************************
** Meta object code from reading C++ file 'databaseplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "databaseplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabasePlugin_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabasePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabasePlugin_t qt_meta_stringdata_DatabasePlugin = {
    {
QT_MOC_LITERAL(0, 0, 14) // "DatabasePlugin"

    },
    "DatabasePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabasePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DatabasePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DatabasePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DatabasePlugin.data,
      qt_meta_data_DatabasePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DatabasePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabasePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabasePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelInterface"))
        return static_cast< ModelInterface*>(this);
    if (!strcmp(_clname, "com.jalapaquery.ModelInterface/1.0"))
        return static_cast< ModelInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int DatabasePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 0x00, 0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, '.',  0x00, 'j',  0x00, 'a',  0x00,
    'l',  0x00, 'a',  0x00, 'p',  0x00, 'a',  0x00,
    'q',  0x00, 'u',  0x00, 'e',  0x00, 'r',  0x00,
    'y',  0x00, '.',  0x00, 'M',  0x00, 'o',  0x00,
    'd',  0x00, 'e',  0x00, 'l',  0x00, 'I',  0x00,
    'n',  0x00, 't',  0x00, 'e',  0x00, 'r',  0x00,
    'f',  0x00, 'a',  0x00, 'c',  0x00, 'e',  0x00,
    '/',  0x00, '1',  0x00, '.',  0x00, '0',  0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0e, 0x00, 'D',  'a',  't',  'a',  'b',  'a', 
    's',  'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    'Z',  '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 0x00, 0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, '.',  0x00, 'j',  0x00, 'a',  0x00,
    'l',  0x00, 'a',  0x00, 'p',  0x00, 'a',  0x00,
    'q',  0x00, 'u',  0x00, 'e',  0x00, 'r',  0x00,
    'y',  0x00, '.',  0x00, 'M',  0x00, 'o',  0x00,
    'd',  0x00, 'e',  0x00, 'l',  0x00, 'I',  0x00,
    'n',  0x00, 't',  0x00, 'e',  0x00, 'r',  0x00,
    'f',  0x00, 'a',  0x00, 'c',  0x00, 'e',  0x00,
    '/',  0x00, '1',  0x00, '.',  0x00, '0',  0x00,
    0x15, 0x0e, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x11, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0e, 0x00, 'D',  'a', 
    't',  'a',  'b',  'a',  's',  'e',  'P',  'l', 
    'u',  'g',  'i',  'n',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    'Z',  '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(DatabasePlugin, DatabasePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
