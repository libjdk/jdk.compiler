#include <com/sun/tools/javac/jvm/ClassReader$23.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $Flags = ::com::sun::tools::javac::code::Flags;
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

$FieldInfo _ClassReader$23_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$23, this$0)},
	{}
};

$MethodInfo _ClassReader$23_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$23::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$23::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$23_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$23_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$23_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$23",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$23_FieldInfo_,
	_ClassReader$23_MethodInfo_,
	nullptr,
	&_ClassReader$23_EnclosingMethodInfo_,
	_ClassReader$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$23($Class* clazz) {
	return $of($alloc(ClassReader$23));
}

void ClassReader$23::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$23::read($Symbol* sym, int32_t attrlen) {
	int32_t newbp = this->this$0->bp + attrlen;
	if (this->this$0->saveParameterNames) {
		this->this$0->sawMethodParameters = true;
		int32_t numEntries = this->this$0->nextByte();
		$set(this->this$0, parameterNameIndices, $new($ints, numEntries));
		$set(this->this$0, parameterAccessFlags, $new($ints, numEntries));
		this->this$0->haveParameterNameIndices = true;
		int32_t index = 0;
		for (int32_t i = 0; i < numEntries; ++i) {
			int32_t nameIndex = this->this$0->nextChar();
			int32_t flags = this->this$0->nextChar();
			if (((int32_t)(flags & (uint32_t)($Flags::MANDATED | $Flags::SYNTHETIC))) != 0) {
				continue;
			}
			$nc(this->this$0->parameterNameIndices)->set(index, nameIndex);
			$nc(this->this$0->parameterAccessFlags)->set(index, flags);
			++index;
		}
	}
	this->this$0->bp = newbp;
}

ClassReader$23::ClassReader$23() {
}

$Class* ClassReader$23::load$($String* name, bool initialize) {
	$loadClass(ClassReader$23, name, initialize, &_ClassReader$23_ClassInfo_, allocate$ClassReader$23);
	return class$;
}

$Class* ClassReader$23::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com