#include <com/sun/tools/javac/file/BaseFileManager$2.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $Option = ::com::sun::tools::javac::main::Option;
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
				namespace file {

$FieldInfo _BaseFileManager$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/BaseFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(BaseFileManager$2, this$0)},
	{}
};

$MethodInfo _BaseFileManager$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(static_cast<void(BaseFileManager$2::*)($BaseFileManager*,$Log*)>(&BaseFileManager$2::init$))},
	{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BaseFileManager$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.BaseFileManager",
	"handleOption",
	"(Ljava/lang/String;Ljava/util/Iterator;)Z"
};

$InnerClassInfo _BaseFileManager$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BaseFileManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.BaseFileManager$2",
	"com.sun.tools.javac.main.OptionHelper$GrumpyHelper",
	nullptr,
	_BaseFileManager$2_FieldInfo_,
	_BaseFileManager$2_MethodInfo_,
	nullptr,
	&_BaseFileManager$2_EnclosingMethodInfo_,
	_BaseFileManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager"
};

$Object* allocate$BaseFileManager$2($Class* clazz) {
	return $of($alloc(BaseFileManager$2));
}

void BaseFileManager$2::init$($BaseFileManager* this$0, $Log* log) {
	$set(this, this$0, this$0);
	$OptionHelper$GrumpyHelper::init$(log);
}

$String* BaseFileManager$2::get($Option* option) {
	return $nc(this->this$0->options)->get(option);
}

void BaseFileManager$2::put($String* name, $String* value) {
	$nc(this->this$0->options)->put(name, value);
}

void BaseFileManager$2::remove($String* name) {
	$nc(this->this$0->options)->remove(name);
}

bool BaseFileManager$2::handleFileManagerOption($Option* option, $String* value) {
	return this->this$0->handleOption(option, value);
}

BaseFileManager$2::BaseFileManager$2() {
}

$Class* BaseFileManager$2::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$2, name, initialize, &_BaseFileManager$2_ClassInfo_, allocate$BaseFileManager$2);
	return class$;
}

$Class* BaseFileManager$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com