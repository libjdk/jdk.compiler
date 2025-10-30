#include <com/sun/tools/javac/main/Arguments$2.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
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

$FieldInfo _Arguments$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/main/Arguments;", nullptr, $FINAL | $SYNTHETIC, $field(Arguments$2, this$0)},
	{}
};

$MethodInfo _Arguments$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(static_cast<void(Arguments$2::*)($Arguments*,$Log*)>(&Arguments$2::init$))},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Arguments$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Arguments",
	nullptr,
	nullptr
};

$InnerClassInfo _Arguments$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Arguments$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.Arguments$2",
	"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
	nullptr,
	_Arguments$2_FieldInfo_,
	_Arguments$2_MethodInfo_,
	nullptr,
	&_Arguments$2_EnclosingMethodInfo_,
	_Arguments$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments"
};

$Object* allocate$Arguments$2($Class* clazz) {
	return $of($alloc(Arguments$2));
}

void Arguments$2::init$($Arguments* this$0, $Log* log) {
	$set(this, this$0, this$0);
	$OptionHelper$GrumpyHelper::init$(log);
}

$String* Arguments$2::get($Option* option) {
	return $nc(this->this$0->options)->get(option);
}

void Arguments$2::put($String* name, $String* value) {
	$nc(this->this$0->options)->put(name, value);
}

void Arguments$2::remove($String* name) {
	$nc(this->this$0->options)->remove(name);
}

$Log* Arguments$2::getLog() {
	return this->this$0->log;
}

Arguments$2::Arguments$2() {
}

$Class* Arguments$2::load$($String* name, bool initialize) {
	$loadClass(Arguments$2, name, initialize, &_Arguments$2_ClassInfo_, allocate$Arguments$2);
	return class$;
}

$Class* Arguments$2::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com