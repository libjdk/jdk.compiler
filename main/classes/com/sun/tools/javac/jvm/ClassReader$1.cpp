#include <com/sun/tools/javac/jvm/ClassReader$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$1, this$0)},
	{"completed", "Z", nullptr, 0, $field(ClassReader$1, completed)},
	{}
};

$MethodInfo _ClassReader$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(ClassReader$1::*)($ClassReader*,$Type*,$List*,$Symbol$TypeSymbol*)>(&ClassReader$1::init$))},
	{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"setEnclosingType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassReader$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"classSigToType",
	"()Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _ClassReader$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$1",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	_ClassReader$1_FieldInfo_,
	_ClassReader$1_MethodInfo_,
	nullptr,
	&_ClassReader$1_EnclosingMethodInfo_,
	_ClassReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$1($Class* clazz) {
	return $of($alloc(ClassReader$1));
}

void ClassReader$1::init$($ClassReader* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym) {
	$set(this, this$0, this$0);
	$Type$ClassType::init$(outer, typarams, tsym);
	this->completed = false;
}

$Type* ClassReader$1::getEnclosingType() {
	$useLocalCurrentObjectStackCache();
	if (!this->completed) {
		this->completed = true;
		$nc(this->tsym)->apiComplete();
		$var($Type, enclosingType, $nc($nc(this->tsym)->type)->getEnclosingType());
		if (!$equals(enclosingType, $Type::noType)) {
			$var($List, typeArgs, $nc($($Type$ClassType::getEnclosingType()))->allparams());
			$var($List, typeParams, $nc(enclosingType)->allparams());
			int32_t var$0 = $nc(typeParams)->length();
			if (var$0 != $nc(typeArgs)->length()) {
				$Type$ClassType::setEnclosingType($($nc(this->this$0->types)->erasure(enclosingType)));
			} else {
				$Type$ClassType::setEnclosingType($($nc(this->this$0->types)->subst(enclosingType, typeParams, typeArgs)));
			}
		} else {
			$Type$ClassType::setEnclosingType($Type::noType);
		}
	}
	return $Type$ClassType::getEnclosingType();
}

void ClassReader$1::setEnclosingType($Type* outer) {
	$throwNew($UnsupportedOperationException);
}

ClassReader$1::ClassReader$1() {
}

$Class* ClassReader$1::load$($String* name, bool initialize) {
	$loadClass(ClassReader$1, name, initialize, &_ClassReader$1_ClassInfo_, allocate$ClassReader$1);
	return class$;
}

$Class* ClassReader$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com