#include <com/sun/tools/javac/jvm/ClassReader$7.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
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
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$7, this$0)},
	{}
};

$MethodInfo _ClassReader$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$7::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$7::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$7",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$7_FieldInfo_,
	_ClassReader$7_MethodInfo_,
	nullptr,
	&_ClassReader$7_EnclosingMethodInfo_,
	_ClassReader$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$7($Class* clazz) {
	return $of($alloc(ClassReader$7));
}

void ClassReader$7::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$7::read($Symbol* sym, int32_t attrLen) {
	int32_t newbp = this->this$0->bp + attrLen;
	if (this->this$0->saveParameterNames && !this->this$0->sawMethodParameters) {
		int32_t numEntries = this->this$0->nextChar();
		for (int32_t i = 0; i < numEntries; ++i) {
			int32_t start_pc = this->this$0->nextChar();
			int32_t length = this->this$0->nextChar();
			int32_t nameIndex = this->this$0->nextChar();
			int32_t sigIndex = this->this$0->nextChar();
			int32_t register$ = this->this$0->nextChar();
			if (start_pc == 0) {
				if (register$ >= $nc(this->this$0->parameterNameIndices)->length) {
					int32_t newSize = $Math::max(register$ + 1, $nc(this->this$0->parameterNameIndices)->length + 8);
					$set(this->this$0, parameterNameIndices, $Arrays::copyOf(this->this$0->parameterNameIndices, newSize));
				}
				$nc(this->this$0->parameterNameIndices)->set(register$, nameIndex);
				this->this$0->haveParameterNameIndices = true;
			}
		}
	}
	this->this$0->bp = newbp;
}

ClassReader$7::ClassReader$7() {
}

$Class* ClassReader$7::load$($String* name, bool initialize) {
	$loadClass(ClassReader$7, name, initialize, &_ClassReader$7_ClassInfo_, allocate$ClassReader$7);
	return class$;
}

$Class* ClassReader$7::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com