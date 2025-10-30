#include <com/sun/tools/javac/jvm/ClassReader$27.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeKind = ::com::sun::tools::javac::jvm::ClassReader$AttributeKind;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _ClassReader$27_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$27, this$0)},
	{}
};

$MethodInfo _ClassReader$27_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$27::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$27::init$))},
	{"accepts", "(Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)Z", nullptr, $PROTECTED},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$27_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$27_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$27", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$27_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$27",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$27_FieldInfo_,
	_ClassReader$27_MethodInfo_,
	nullptr,
	&_ClassReader$27_EnclosingMethodInfo_,
	_ClassReader$27_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$27($Class* clazz) {
	return $of($alloc(ClassReader$27));
}

void ClassReader$27::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

bool ClassReader$27::accepts($ClassReader$AttributeKind* kind) {
	return $ClassReader$AttributeReader::accepts(kind) && this->this$0->allowSealedTypes;
}

void ClassReader$27::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP) {
		$var($ListBuffer, subtypes, $new($ListBuffer));
		int32_t numberOfPermittedSubtypes = this->this$0->nextChar();
		for (int32_t i = 0; i < numberOfPermittedSubtypes; ++i) {
			subtypes->add($($nc(this->this$0->poolReader)->getClass(this->this$0->nextChar())));
		}
		$set($nc($cast($Symbol$ClassSymbol, sym)), permitted, subtypes->toList());
	}
}

ClassReader$27::ClassReader$27() {
}

$Class* ClassReader$27::load$($String* name, bool initialize) {
	$loadClass(ClassReader$27, name, initialize, &_ClassReader$27_ClassInfo_, allocate$ClassReader$27);
	return class$;
}

$Class* ClassReader$27::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com