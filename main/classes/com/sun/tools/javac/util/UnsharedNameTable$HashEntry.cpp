#include <com/sun/tools/javac/util/UnsharedNameTable$HashEntry.h>

#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>
#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $UnsharedNameTable = ::com::sun::tools::javac::util::UnsharedNameTable;
using $UnsharedNameTable$NameImpl = ::com::sun::tools::javac::util::UnsharedNameTable$NameImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _UnsharedNameTable$HashEntry_FieldInfo_[] = {
	{"next", "Lcom/sun/tools/javac/util/UnsharedNameTable$HashEntry;", nullptr, 0, $field(UnsharedNameTable$HashEntry, next)},
	{}
};

$MethodInfo _UnsharedNameTable$HashEntry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/UnsharedNameTable$NameImpl;)V", nullptr, 0, $method(static_cast<void(UnsharedNameTable$HashEntry::*)($UnsharedNameTable$NameImpl*)>(&UnsharedNameTable$HashEntry::init$))},
	{}
};

$InnerClassInfo _UnsharedNameTable$HashEntry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.UnsharedNameTable$HashEntry", "com.sun.tools.javac.util.UnsharedNameTable", "HashEntry", $STATIC},
	{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
	{}
};

$ClassInfo _UnsharedNameTable$HashEntry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.UnsharedNameTable$HashEntry",
	"java.lang.ref.WeakReference",
	nullptr,
	_UnsharedNameTable$HashEntry_FieldInfo_,
	_UnsharedNameTable$HashEntry_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lcom/sun/tools/javac/util/UnsharedNameTable$NameImpl;>;",
	nullptr,
	_UnsharedNameTable$HashEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.UnsharedNameTable"
};

$Object* allocate$UnsharedNameTable$HashEntry($Class* clazz) {
	return $of($alloc(UnsharedNameTable$HashEntry));
}

void UnsharedNameTable$HashEntry::init$($UnsharedNameTable$NameImpl* referent) {
	$WeakReference::init$(referent);
}

UnsharedNameTable$HashEntry::UnsharedNameTable$HashEntry() {
}

$Class* UnsharedNameTable$HashEntry::load$($String* name, bool initialize) {
	$loadClass(UnsharedNameTable$HashEntry, name, initialize, &_UnsharedNameTable$HashEntry_ClassInfo_, allocate$UnsharedNameTable$HashEntry);
	return class$;
}

$Class* UnsharedNameTable$HashEntry::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com