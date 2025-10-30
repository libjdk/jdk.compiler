#include <com/sun/tools/javac/jvm/ClassReader$26.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
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

#undef MEMBER
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
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

$FieldInfo _ClassReader$26_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$26, this$0)},
	{}
};

$MethodInfo _ClassReader$26_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$26::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$26::init$))},
	{"accepts", "(Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;)Z", nullptr, $PROTECTED},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$26_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$26_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$26", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$26_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$26",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$26_FieldInfo_,
	_ClassReader$26_MethodInfo_,
	nullptr,
	&_ClassReader$26_EnclosingMethodInfo_,
	_ClassReader$26_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$26($Class* clazz) {
	return $of($alloc(ClassReader$26));
}

void ClassReader$26::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

bool ClassReader$26::accepts($ClassReader$AttributeKind* kind) {
	return $ClassReader$AttributeReader::accepts(kind) && this->this$0->allowRecords;
}

void ClassReader$26::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP) {
		sym->flags_field |= 0x2000000000000000;
	}
	int32_t componentCount = this->this$0->nextChar();
	$var($ListBuffer, components, $new($ListBuffer));
	for (int32_t i = 0; i < componentCount; ++i) {
		$var($Name, name, $nc(this->this$0->poolReader)->getName(this->this$0->nextChar()));
		$var($Type, type, $nc(this->this$0->poolReader)->getType(this->this$0->nextChar()));
		$var($Symbol$RecordComponent, c, $new($Symbol$RecordComponent, name, type, sym));
		$init($ClassReader$AttributeKind);
		this->this$0->readAttrs(c, $ClassReader$AttributeKind::MEMBER);
		components->add(c);
	}
	$nc(($cast($Symbol$ClassSymbol, sym)))->setRecordComponents($(components->toList()));
}

ClassReader$26::ClassReader$26() {
}

$Class* ClassReader$26::load$($String* name, bool initialize) {
	$loadClass(ClassReader$26, name, initialize, &_ClassReader$26_ClassInfo_, allocate$ClassReader$26);
	return class$;
}

$Class* ClassReader$26::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com