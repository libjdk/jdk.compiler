#include <com/sun/tools/javac/jvm/PoolWriter$SharedSignatureGenerator.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/PoolWriter$1.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $PoolWriter$1 = ::com::sun::tools::javac::jvm::PoolWriter$1;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _PoolWriter$SharedSignatureGenerator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, $FINAL | $SYNTHETIC, $field(PoolWriter$SharedSignatureGenerator, this$0)},
	{"sigbuf", "Lcom/sun/tools/javac/util/ByteBuffer;", nullptr, 0, $field(PoolWriter$SharedSignatureGenerator, sigbuf)},
	{}
};

$MethodInfo _PoolWriter$SharedSignatureGenerator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolWriter;Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(PoolWriter$SharedSignatureGenerator::*)($PoolWriter*,$Types*)>(&PoolWriter$SharedSignatureGenerator::init$))},
	{"append", "(C)V", nullptr, $PROTECTED},
	{"append", "([B)V", nullptr, $PROTECTED},
	{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED},
	{"assembleSig", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"classReference", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PROTECTED},
	{"reset", "()V", nullptr, $PROTECTED},
	{"toName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _PoolWriter$SharedSignatureGenerator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.PoolWriter$SharedSignatureGenerator", "com.sun.tools.javac.jvm.PoolWriter", "SharedSignatureGenerator", 0},
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _PoolWriter$SharedSignatureGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.PoolWriter$SharedSignatureGenerator",
	"com.sun.tools.javac.code.Types$SignatureGenerator",
	nullptr,
	_PoolWriter$SharedSignatureGenerator_FieldInfo_,
	_PoolWriter$SharedSignatureGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_PoolWriter$SharedSignatureGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.PoolWriter"
};

$Object* allocate$PoolWriter$SharedSignatureGenerator($Class* clazz) {
	return $of($alloc(PoolWriter$SharedSignatureGenerator));
}

void PoolWriter$SharedSignatureGenerator::init$($PoolWriter* this$0, $Types* types) {
	$set(this, this$0, this$0);
	$Types$SignatureGenerator::init$(types);
	$set(this, sigbuf, $new($ByteBuffer));
}

void PoolWriter$SharedSignatureGenerator::assembleSig($Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($PoolWriter$1);
	switch ($nc($PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
	case 1:
		{}
	case 2:
		{
			assembleSig($($nc(this->this$0->types)->erasure($nc(($cast($UninitializedType, type)))->qtype)));
			break;
		}
	default:
		{
			$Types$SignatureGenerator::assembleSig(type);
		}
	}
}

void PoolWriter$SharedSignatureGenerator::append(char16_t ch) {
	$nc(this->sigbuf)->appendByte(ch);
}

void PoolWriter$SharedSignatureGenerator::append($bytes* ba) {
	$nc(this->sigbuf)->appendBytes(ba);
}

void PoolWriter$SharedSignatureGenerator::append($Name* name) {
	$nc(this->sigbuf)->appendName(name);
}

void PoolWriter$SharedSignatureGenerator::classReference($Symbol$ClassSymbol* c) {
	this->this$0->enterInner(c);
}

void PoolWriter$SharedSignatureGenerator::reset() {
	$nc(this->sigbuf)->reset();
}

$Name* PoolWriter$SharedSignatureGenerator::toName() {
	return $nc(this->sigbuf)->toName(this->this$0->names);
}

PoolWriter$SharedSignatureGenerator::PoolWriter$SharedSignatureGenerator() {
}

$Class* PoolWriter$SharedSignatureGenerator::load$($String* name, bool initialize) {
	$loadClass(PoolWriter$SharedSignatureGenerator, name, initialize, &_PoolWriter$SharedSignatureGenerator_ClassInfo_, allocate$PoolWriter$SharedSignatureGenerator);
	return class$;
}

$Class* PoolWriter$SharedSignatureGenerator::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com