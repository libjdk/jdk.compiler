#include <com/sun/tools/javac/processing/JavacFiler$Tuple3.h>

#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <jcpp.h>

using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacFiler$Tuple3_FieldInfo_[] = {
	{"a", "Ljava/lang/Object;", "TA;", $FINAL, $field(JavacFiler$Tuple3, a)},
	{"b", "Ljava/lang/Object;", "TB;", $FINAL, $field(JavacFiler$Tuple3, b)},
	{"c", "Ljava/lang/Object;", "TC;", $FINAL, $field(JavacFiler$Tuple3, c)},
	{}
};

$MethodInfo _JavacFiler$Tuple3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "(TA;TB;TC;)V", $PUBLIC, $method(static_cast<void(JavacFiler$Tuple3::*)(Object$*,Object$*,Object$*)>(&JavacFiler$Tuple3::init$))},
	{}
};

$InnerClassInfo _JavacFiler$Tuple3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$Tuple3", "com.sun.tools.javac.processing.JavacFiler", "Tuple3", $STATIC | $FINAL},
	{}
};

$ClassInfo _JavacFiler$Tuple3_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$Tuple3",
	"java.lang.Object",
	nullptr,
	_JavacFiler$Tuple3_FieldInfo_,
	_JavacFiler$Tuple3_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_JavacFiler$Tuple3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$Tuple3($Class* clazz) {
	return $of($alloc(JavacFiler$Tuple3));
}

void JavacFiler$Tuple3::init$(Object$* a, Object$* b, Object$* c) {
	$set(this, a, a);
	$set(this, b, b);
	$set(this, c, c);
}

JavacFiler$Tuple3::JavacFiler$Tuple3() {
}

$Class* JavacFiler$Tuple3::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$Tuple3, name, initialize, &_JavacFiler$Tuple3_ClassInfo_, allocate$JavacFiler$Tuple3);
	return class$;
}

$Class* JavacFiler$Tuple3::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com