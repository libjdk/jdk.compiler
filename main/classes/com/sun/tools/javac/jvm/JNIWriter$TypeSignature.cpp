#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$JvmTypeVisitor.h>
#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef SIG_ARRAY
#undef SIG_BOOLEAN
#undef SIG_BYTE
#undef SIG_CHAR
#undef SIG_CLASS
#undef SIG_DOUBLE
#undef SIG_FLOAT
#undef SIG_INT
#undef SIG_LONG
#undef SIG_SHORT
#undef SIG_VOID

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $JNIWriter = ::com::sun::tools::javac::jvm::JNIWriter;
using $JNIWriter$TypeSignature$JvmTypeVisitor = ::com::sun::tools::javac::jvm::JNIWriter$TypeSignature$JvmTypeVisitor;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $List = ::com::sun::tools::javac::util::List;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _JNIWriter$TypeSignature_FieldInfo_[] = {
	{"elems", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, 0, $field(JNIWriter$TypeSignature, elems)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(JNIWriter$TypeSignature, types)},
	{"SIG_VOID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_VOID)},
	{"SIG_BOOLEAN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_BOOLEAN)},
	{"SIG_BYTE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_BYTE)},
	{"SIG_CHAR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_CHAR)},
	{"SIG_SHORT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_SHORT)},
	{"SIG_INT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_INT)},
	{"SIG_LONG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_LONG)},
	{"SIG_FLOAT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_FLOAT)},
	{"SIG_DOUBLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_DOUBLE)},
	{"SIG_ARRAY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_ARRAY)},
	{"SIG_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter$TypeSignature, SIG_CLASS)},
	{}
};

$MethodInfo _JNIWriter$TypeSignature_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(JNIWriter$TypeSignature::*)($Types*)>(&JNIWriter$TypeSignature::init$))},
	{"getJvmSignature", "(Lcom/sun/tools/javac/code/Type;Z)Ljava/lang/StringBuilder;", nullptr, 0},
	{"getParameterSignature", "(Lcom/sun/tools/javac/code/Type;Z)Ljava/lang/StringBuilder;", nullptr, 0, nullptr, "com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException"},
	{"getReturnSignature", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/StringBuilder;", nullptr, 0, nullptr, "com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException"},
	{"getSignature", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/StringBuilder;", nullptr, 0, nullptr, "com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException"},
	{}
};

$InnerClassInfo _JNIWriter$TypeSignature_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "JvmTypeVisitor", $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "SignatureException", $STATIC},
	{}
};

$ClassInfo _JNIWriter$TypeSignature_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.JNIWriter$TypeSignature",
	"java.lang.Object",
	nullptr,
	_JNIWriter$TypeSignature_FieldInfo_,
	_JNIWriter$TypeSignature_MethodInfo_,
	nullptr,
	nullptr,
	_JNIWriter$TypeSignature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter"
};

$Object* allocate$JNIWriter$TypeSignature($Class* clazz) {
	return $of($alloc(JNIWriter$TypeSignature));
}

$String* JNIWriter$TypeSignature::SIG_VOID = nullptr;
$String* JNIWriter$TypeSignature::SIG_BOOLEAN = nullptr;
$String* JNIWriter$TypeSignature::SIG_BYTE = nullptr;
$String* JNIWriter$TypeSignature::SIG_CHAR = nullptr;
$String* JNIWriter$TypeSignature::SIG_SHORT = nullptr;
$String* JNIWriter$TypeSignature::SIG_INT = nullptr;
$String* JNIWriter$TypeSignature::SIG_LONG = nullptr;
$String* JNIWriter$TypeSignature::SIG_FLOAT = nullptr;
$String* JNIWriter$TypeSignature::SIG_DOUBLE = nullptr;
$String* JNIWriter$TypeSignature::SIG_ARRAY = nullptr;
$String* JNIWriter$TypeSignature::SIG_CLASS = nullptr;

void JNIWriter$TypeSignature::init$($Types* types) {
	$set(this, types, types);
}

$StringBuilder* JNIWriter$TypeSignature::getParameterSignature($Type* mType, bool useFlatname) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc($($nc(mType)->getParameterTypes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, pType, $cast($Type, i$->next()));
			{
				result->append($(static_cast<$CharSequence*>(getJvmSignature(pType, useFlatname))));
			}
		}
	}
	return result;
}

$StringBuilder* JNIWriter$TypeSignature::getReturnSignature($Type* mType) {
	return getJvmSignature($($nc(mType)->getReturnType()), false);
}

$StringBuilder* JNIWriter$TypeSignature::getSignature($Type* mType) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("("_s)->append($(static_cast<$CharSequence*>(getParameterSignature(mType, false))))->append(")"_s);
	sb->append($(static_cast<$CharSequence*>(getReturnSignature(mType))));
	return sb;
}

$StringBuilder* JNIWriter$TypeSignature::getJvmSignature($Type* type, bool useFlatname) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc(this->types)->erasure(type));
	$var($StringBuilder, sig, $new($StringBuilder));
	$var($JNIWriter$TypeSignature$JvmTypeVisitor, jv, $new($JNIWriter$TypeSignature$JvmTypeVisitor, useFlatname));
	jv->visitType(t, sig);
	return sig;
}

JNIWriter$TypeSignature::JNIWriter$TypeSignature() {
}

void clinit$JNIWriter$TypeSignature($Class* class$) {
	$assignStatic(JNIWriter$TypeSignature::SIG_VOID, "V"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_BOOLEAN, "Z"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_BYTE, "B"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_CHAR, "C"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_SHORT, "S"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_INT, "I"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_LONG, "J"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_FLOAT, "F"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_DOUBLE, "D"_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_ARRAY, "["_s);
	$assignStatic(JNIWriter$TypeSignature::SIG_CLASS, "L"_s);
}

$Class* JNIWriter$TypeSignature::load$($String* name, bool initialize) {
	$loadClass(JNIWriter$TypeSignature, name, initialize, &_JNIWriter$TypeSignature_ClassInfo_, clinit$JNIWriter$TypeSignature, allocate$JNIWriter$TypeSignature);
	return class$;
}

$Class* JNIWriter$TypeSignature::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com