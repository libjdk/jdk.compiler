#include <com/sun/tools/javac/main/JavaCompiler$2.h>

#include <com/sun/tools/javac/main/JavaCompiler$CompilePolicy.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BY_FILE
#undef BY_TODO
#undef CLASSDEF
#undef METHODDEF
#undef SIMPLE
#undef VARDEF

using $JavaCompiler$CompilePolicyArray = $Array<::com::sun::tools::javac::main::JavaCompiler$CompilePolicy>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $JavaCompiler$CompilePolicy = ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _JavaCompiler$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$2, $SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)},
	{}
};

$EnclosingMethodInfo _JavaCompiler$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.JavaCompiler",
	nullptr,
	nullptr
};

$InnerClassInfo _JavaCompiler$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavaCompiler$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.main.JavaCompiler$2",
	"java.lang.Object",
	nullptr,
	_JavaCompiler$2_FieldInfo_,
	nullptr,
	nullptr,
	&_JavaCompiler$2_EnclosingMethodInfo_,
	_JavaCompiler$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler"
};

$Object* allocate$JavaCompiler$2($Class* clazz) {
	return $of($alloc(JavaCompiler$2));
}

$ints* JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy = nullptr;

void clinit$JavaCompiler$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::METHODDEF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy, $new($ints, $($JavaCompiler$CompilePolicy::values())->length));
	{
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)->set($JavaCompiler$CompilePolicy::SIMPLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)->set($JavaCompiler$CompilePolicy::BY_FILE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavaCompiler$2::$SwitchMap$com$sun$tools$javac$main$JavaCompiler$CompilePolicy)->set($JavaCompiler$CompilePolicy::BY_TODO->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavaCompiler$2::JavaCompiler$2() {
}

$Class* JavaCompiler$2::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$2, name, initialize, &_JavaCompiler$2_ClassInfo_, clinit$JavaCompiler$2, allocate$JavaCompiler$2);
	return class$;
}

$Class* JavaCompiler$2::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com