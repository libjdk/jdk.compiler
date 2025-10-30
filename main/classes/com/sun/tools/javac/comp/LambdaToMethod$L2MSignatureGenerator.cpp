#include <com/sun/tools/javac/comp/LambdaToMethod$L2MSignatureGenerator.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$L2MSignatureGenerator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$L2MSignatureGenerator, this$0)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, 0, $field(LambdaToMethod$L2MSignatureGenerator, sb)},
	{"allowIllegalSignatures", "Z", nullptr, 0, $field(LambdaToMethod$L2MSignatureGenerator, allowIllegalSignatures)},
	{}
};

$MethodInfo _LambdaToMethod$L2MSignatureGenerator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;Z)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$L2MSignatureGenerator::*)($LambdaToMethod*,bool)>(&LambdaToMethod$L2MSignatureGenerator::init$))},
	{"append", "(C)V", nullptr, $PROTECTED},
	{"append", "([B)V", nullptr, $PROTECTED},
	{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED},
	{"reportIllegalSignature", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaToMethod$L2MSignatureGenerator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$L2MSignatureGenerator", "com.sun.tools.javac.comp.LambdaToMethod", "L2MSignatureGenerator", $PRIVATE},
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LambdaToMethod$L2MSignatureGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$L2MSignatureGenerator",
	"com.sun.tools.javac.code.Types$SignatureGenerator",
	nullptr,
	_LambdaToMethod$L2MSignatureGenerator_FieldInfo_,
	_LambdaToMethod$L2MSignatureGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$L2MSignatureGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$L2MSignatureGenerator($Class* clazz) {
	return $of($alloc(LambdaToMethod$L2MSignatureGenerator));
}

void LambdaToMethod$L2MSignatureGenerator::init$($LambdaToMethod* this$0, bool allowIllegalSignatures) {
	$set(this, this$0, this$0);
	$Types$SignatureGenerator::init$(this$0->types);
	$set(this, sb, $new($StringBuilder));
	this->allowIllegalSignatures = allowIllegalSignatures;
}

void LambdaToMethod$L2MSignatureGenerator::reportIllegalSignature($Type* t) {
	if (!this->allowIllegalSignatures) {
		$Types$SignatureGenerator::reportIllegalSignature(t);
	}
}

void LambdaToMethod$L2MSignatureGenerator::append(char16_t ch) {
	$nc(this->sb)->append(ch);
}

void LambdaToMethod$L2MSignatureGenerator::append($bytes* ba) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $nc(this->this$0->names)->fromUtf(ba));
	$nc(this->sb)->append($($nc(name)->toString()));
}

void LambdaToMethod$L2MSignatureGenerator::append($Name* name) {
	$nc(this->sb)->append($($nc(name)->toString()));
}

$String* LambdaToMethod$L2MSignatureGenerator::toString() {
	return $nc(this->sb)->toString();
}

LambdaToMethod$L2MSignatureGenerator::LambdaToMethod$L2MSignatureGenerator() {
}

$Class* LambdaToMethod$L2MSignatureGenerator::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$L2MSignatureGenerator, name, initialize, &_LambdaToMethod$L2MSignatureGenerator_ClassInfo_, allocate$LambdaToMethod$L2MSignatureGenerator);
	return class$;
}

$Class* LambdaToMethod$L2MSignatureGenerator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com