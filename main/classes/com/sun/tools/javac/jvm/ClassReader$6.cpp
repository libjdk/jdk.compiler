#include <com/sun/tools/javac/jvm/ClassReader$6.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$6, this$0)},
	{}
};

$MethodInfo _ClassReader$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$6::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$6::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$6",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$6_FieldInfo_,
	_ClassReader$6_MethodInfo_,
	nullptr,
	&_ClassReader$6_EnclosingMethodInfo_,
	_ClassReader$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$6($Class* clazz) {
	return $of($alloc(ClassReader$6));
}

void ClassReader$6::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$6::read($Symbol* sym, int32_t attrLen) {
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, sym));
	if ($nc(this->this$0->currentModule)->module_info == c) {
		this->this$0->skipInnerClasses();
	} else {
		this->this$0->readInnerClasses(c);
	}
}

ClassReader$6::ClassReader$6() {
}

$Class* ClassReader$6::load$($String* name, bool initialize) {
	$loadClass(ClassReader$6, name, initialize, &_ClassReader$6_ClassInfo_, allocate$ClassReader$6);
	return class$;
}

$Class* ClassReader$6::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com