#include <com/sun/tools/javac/main/Main$1.h>

#include <com/sun/tools/javac/main/Main.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::main::Main;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Main$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/main/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, this$0)},
	{}
};

$MethodInfo _Main$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Main;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(static_cast<void(Main$1::*)($Main*,$Log*)>(&Main$1::init$))},
	{"getOwnName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Main",
	"compile",
	"([Ljava/lang/String;Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/main/Main$Result;"
};

$InnerClassInfo _Main$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Main$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.main.Main$Result", "com.sun.tools.javac.main.Main", "Result", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Main$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.Main$1",
	"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
	nullptr,
	_Main$1_FieldInfo_,
	_Main$1_MethodInfo_,
	nullptr,
	&_Main$1_EnclosingMethodInfo_,
	_Main$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Main"
};

$Object* allocate$Main$1($Class* clazz) {
	return $of($alloc(Main$1));
}

void Main$1::init$($Main* this$0, $Log* log) {
	$set(this, this$0, this$0);
	$OptionHelper$GrumpyHelper::init$(log);
}

$String* Main$1::getOwnName() {
	return this->this$0->ownName;
}

void Main$1::put($String* name, $String* value) {
}

Main$1::Main$1() {
}

$Class* Main$1::load$($String* name, bool initialize) {
	$loadClass(Main$1, name, initialize, &_Main$1_ClassInfo_, allocate$Main$1);
	return class$;
}

$Class* Main$1::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com