#include <com/sun/tools/javac/api/JavacTrees$5.h>

#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef DECLARED

using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$5, this$0)},
	{"val$classType", "Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$5, val$classType)},
	{}
};

$MethodInfo _JavacTrees$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;Lcom/sun/tools/javac/code/Type$ClassType;)V", nullptr, 0, $method(static_cast<void(JavacTrees$5::*)($JavacTrees*,$Type*,$List*,$Symbol$TypeSymbol*,$TypeMetadata*,$Type$ClassType*)>(&JavacTrees$5::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"getOriginalType",
	"(Ljavax/lang/model/type/ErrorType;)Ljavax/lang/model/type/TypeMirror;"
};

$InnerClassInfo _JavacTrees$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavacTrees$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$5",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	_JavacTrees$5_FieldInfo_,
	_JavacTrees$5_MethodInfo_,
	nullptr,
	&_JavacTrees$5_EnclosingMethodInfo_,
	_JavacTrees$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$5($Class* clazz) {
	return $of($alloc(JavacTrees$5));
}

void JavacTrees$5::init$($JavacTrees* this$0, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata, $Type$ClassType* val$classType) {
	$set(this, this$0, this$0);
	$set(this, val$classType, val$classType);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

$Type* JavacTrees$5::baseType() {
	return this->val$classType;
}

$TypeKind* JavacTrees$5::getKind() {
	$init($TypeKind);
	return $TypeKind::DECLARED;
}

JavacTrees$5::JavacTrees$5() {
}

$Class* JavacTrees$5::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$5, name, initialize, &_JavacTrees$5_ClassInfo_, allocate$JavacTrees$5);
	return class$;
}

$Class* JavacTrees$5::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com