#include <com/sun/tools/javac/jvm/ClassReader$5.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _ClassReader$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$5, this$0)},
	{}
};

$MethodInfo _ClassReader$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$5::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$5::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$5",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$5_FieldInfo_,
	_ClassReader$5_MethodInfo_,
	nullptr,
	&_ClassReader$5_EnclosingMethodInfo_,
	_ClassReader$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$5($Class* clazz) {
	return $of($alloc(ClassReader$5));
}

void ClassReader$5::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$5::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	int32_t nexceptions = this->this$0->nextChar();
	$var($List, thrown, $List::nil());
	for (int32_t j = 0; j < nexceptions; ++j) {
		$assign(thrown, $nc(thrown)->prepend($nc($($nc(this->this$0->poolReader)->getClass(this->this$0->nextChar())))->type));
	}
	if ($nc($($nc($nc(sym)->type)->getThrownTypes()))->isEmpty()) {
		$set($nc($($nc(sym->type)->asMethodType())), thrown, $nc(thrown)->reverse());
	}
}

ClassReader$5::ClassReader$5() {
}

$Class* ClassReader$5::load$($String* name, bool initialize) {
	$loadClass(ClassReader$5, name, initialize, &_ClassReader$5_ClassInfo_, allocate$ClassReader$5);
	return class$;
}

$Class* ClassReader$5::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com