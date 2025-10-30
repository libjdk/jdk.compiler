#include <com/sun/tools/javac/jvm/ClassReader$13.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
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

$FieldInfo _ClassReader$13_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$13, this$0)},
	{}
};

$MethodInfo _ClassReader$13_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$13::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$13::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$13_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$13_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$13", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$13_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$13",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$13_FieldInfo_,
	_ClassReader$13_MethodInfo_,
	nullptr,
	&_ClassReader$13_EnclosingMethodInfo_,
	_ClassReader$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$13($Class* clazz) {
	return $of($alloc(ClassReader$13));
}

void ClassReader$13::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$13::read($Symbol* sym, int32_t attrLen) {
	this->this$0->attachAnnotations(sym);
}

ClassReader$13::ClassReader$13() {
}

$Class* ClassReader$13::load$($String* name, bool initialize) {
	$loadClass(ClassReader$13, name, initialize, &_ClassReader$13_ClassInfo_, allocate$ClassReader$13);
	return class$;
}

$Class* ClassReader$13::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com