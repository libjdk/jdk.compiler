#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>

#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _TypeMetadata$Entry_MethodInfo_[] = {
	{"combine", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)Lcom/sun/tools/javac/code/TypeMetadata$Entry;", nullptr, $PUBLIC | $ABSTRACT},
	{"kind", "()Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TypeMetadata$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.TypeMetadata$Entry$Kind", "com.sun.tools.javac.code.TypeMetadata$Entry", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeMetadata$Entry_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.TypeMetadata$Entry",
	nullptr,
	nullptr,
	nullptr,
	_TypeMetadata$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_TypeMetadata$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeMetadata"
};

$Object* allocate$TypeMetadata$Entry($Class* clazz) {
	return $of($alloc(TypeMetadata$Entry));
}

$Class* TypeMetadata$Entry::load$($String* name, bool initialize) {
	$loadClass(TypeMetadata$Entry, name, initialize, &_TypeMetadata$Entry_ClassInfo_, allocate$TypeMetadata$Entry);
	return class$;
}

$Class* TypeMetadata$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com