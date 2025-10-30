#include <com/sun/tools/javac/main/Arguments$1.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/nio/file/Path.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Arguments$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/main/Arguments;", nullptr, $FINAL | $SYNTHETIC, $field(Arguments$1, this$0)},
	{}
};

$MethodInfo _Arguments$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Arguments;)V", nullptr, 0, $method(static_cast<void(Arguments$1::*)($Arguments*)>(&Arguments$1::init$))},
	{"addClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addFile", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC},
	{"getOwnName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Arguments$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Arguments",
	nullptr,
	nullptr
};

$InnerClassInfo _Arguments$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Arguments$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Arguments$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.main.Arguments$1",
	"com.sun.tools.javac.main.OptionHelper",
	nullptr,
	_Arguments$1_FieldInfo_,
	_Arguments$1_MethodInfo_,
	nullptr,
	&_Arguments$1_EnclosingMethodInfo_,
	_Arguments$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Arguments"
};

$Object* allocate$Arguments$1($Class* clazz) {
	return $of($alloc(Arguments$1));
}

void Arguments$1::init$($Arguments* this$0) {
	$set(this, this$0, this$0);
	$OptionHelper::init$();
}

$String* Arguments$1::get($Option* option) {
	return $nc(this->this$0->options)->get(option);
}

void Arguments$1::put($String* name, $String* value) {
	$nc(this->this$0->options)->put(name, value);
}

void Arguments$1::remove($String* name) {
	$nc(this->this$0->options)->remove(name);
}

bool Arguments$1::handleFileManagerOption($Option* option, $String* value) {
	$nc(this->this$0->options)->put(option, value);
	$nc(this->this$0->deferredFileManagerOptions)->put(option, value);
	return true;
}

$Log* Arguments$1::getLog() {
	return this->this$0->log;
}

$String* Arguments$1::getOwnName() {
	return this->this$0->ownName;
}

void Arguments$1::addFile($Path* p) {
	$nc(this->this$0->files)->add(p);
}

void Arguments$1::addClassName($String* s) {
	$nc(this->this$0->classNames)->add(s);
}

Arguments$1::Arguments$1() {
}

$Class* Arguments$1::load$($String* name, bool initialize) {
	$loadClass(Arguments$1, name, initialize, &_Arguments$1_ClassInfo_, allocate$Arguments$1);
	return class$;
}

$Class* Arguments$1::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com