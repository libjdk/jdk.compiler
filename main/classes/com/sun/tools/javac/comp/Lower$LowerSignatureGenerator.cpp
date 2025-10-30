#include <com/sun/tools/javac/comp/Lower$LowerSignatureGenerator.h>

#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$LowerSignatureGenerator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$LowerSignatureGenerator, this$0)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, 0, $field(Lower$LowerSignatureGenerator, sb)},
	{}
};

$MethodInfo _Lower$LowerSignatureGenerator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(static_cast<void(Lower$LowerSignatureGenerator::*)($Lower*)>(&Lower$LowerSignatureGenerator::init$))},
	{"append", "(C)V", nullptr, $PROTECTED},
	{"append", "([B)V", nullptr, $PROTECTED},
	{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lower$LowerSignatureGenerator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$LowerSignatureGenerator", "com.sun.tools.javac.comp.Lower", "LowerSignatureGenerator", $PRIVATE},
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Lower$LowerSignatureGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$LowerSignatureGenerator",
	"com.sun.tools.javac.code.Types$SignatureGenerator",
	nullptr,
	_Lower$LowerSignatureGenerator_FieldInfo_,
	_Lower$LowerSignatureGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$LowerSignatureGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$LowerSignatureGenerator($Class* clazz) {
	return $of($alloc(Lower$LowerSignatureGenerator));
}

void Lower$LowerSignatureGenerator::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$Types$SignatureGenerator::init$(this$0->types);
	$set(this, sb, $new($StringBuilder));
}

void Lower$LowerSignatureGenerator::append(char16_t ch) {
	$nc(this->sb)->append(ch);
}

void Lower$LowerSignatureGenerator::append($bytes* ba) {
	$nc(this->sb)->append($$new($String, ba));
}

void Lower$LowerSignatureGenerator::append($Name* name) {
	$nc(this->sb)->append($($nc(name)->toString()));
}

$String* Lower$LowerSignatureGenerator::toString() {
	return $nc(this->sb)->toString();
}

Lower$LowerSignatureGenerator::Lower$LowerSignatureGenerator() {
}

$Class* Lower$LowerSignatureGenerator::load$($String* name, bool initialize) {
	$loadClass(Lower$LowerSignatureGenerator, name, initialize, &_Lower$LowerSignatureGenerator_ClassInfo_, allocate$Lower$LowerSignatureGenerator);
	return class$;
}

$Class* Lower$LowerSignatureGenerator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com