#include <com/sun/tools/javac/jvm/ClassReader$25.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MDL
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeKind = ::com::sun::tools::javac::jvm::ClassReader$AttributeKind;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$25_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$25, this$0)},
	{}
};

$MethodInfo _ClassReader$25_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$25::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$25::init$))},
	{"accepts", "(Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)Z", nullptr, $PROTECTED},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$25_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$25_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$25", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$25_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$25",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$25_FieldInfo_,
	_ClassReader$25_MethodInfo_,
	nullptr,
	&_ClassReader$25_EnclosingMethodInfo_,
	_ClassReader$25_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$25($Class* clazz) {
	return $of($alloc(ClassReader$25));
}

void ClassReader$25::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

bool ClassReader$25::accepts($ClassReader$AttributeKind* kind) {
	return $ClassReader$AttributeReader::accepts(kind) && this->this$0->allowModules;
}

void ClassReader$25::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP && $nc(sym->owner)->kind == $Kinds$Kind::MDL) {
		$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, sym->owner));
		$nc($nc(msym)->resolutionFlags)->addAll($(this->this$0->readModuleResolutionFlags(this->this$0->nextChar())));
	}
}

ClassReader$25::ClassReader$25() {
}

$Class* ClassReader$25::load$($String* name, bool initialize) {
	$loadClass(ClassReader$25, name, initialize, &_ClassReader$25_ClassInfo_, allocate$ClassReader$25);
	return class$;
}

$Class* ClassReader$25::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com