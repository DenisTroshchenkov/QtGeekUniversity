/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.7.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/bird/Public/mygit/QtGeekUniversity/HW5/task1/ReadMe
  0x0,0x0,0x0,0x27,
  0x48,
  0x65,0x6c,0x6c,0x6f,0x20,0x69,0x74,0x27,0x73,0x20,0x46,0x69,0x6c,0x65,0x20,0x45,
  0x64,0x69,0x74,0x6f,0x72,0x20,0x66,0x6f,0x72,0x20,0x48,0x6f,0x6d,0x65,0x20,0x57,
  0x6f,0x72,0x6b,0x20,0x33,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // texts
  0x0,0x5,
  0x0,0x7a,0xcf,0xb3,
  0x0,0x74,
  0x0,0x65,0x0,0x78,0x0,0x74,0x0,0x73,
    // ReadMe
  0x0,0x6,
  0x5,0x8b,0x79,0x35,
  0x0,0x52,
  0x0,0x65,0x0,0x61,0x0,0x64,0x0,0x4d,0x0,0x65,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/texts
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/texts/ReadMe
  0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_readme)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_readme)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_readme)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_readme)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_readme)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_readme)(); }
   } dummy;
}
