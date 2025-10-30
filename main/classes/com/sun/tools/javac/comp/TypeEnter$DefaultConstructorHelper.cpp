#include <com/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _TypeEnter$DefaultConstructorHelper_MethodInfo_[] = {
	{"constructorSymbol", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC | $ABSTRACT},
	{"constructorType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"enclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"finalAdjustment", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC},
	{"owner", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC | $ABSTRACT},
	{"superArgs", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TypeEnter$DefaultConstructorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "DefaultConstructorHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$DefaultConstructorHelper_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper",
	nullptr,
	nullptr,
	nullptr,
	_TypeEnter$DefaultConstructorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$DefaultConstructorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$DefaultConstructorHelper($Class* clazz) {
	return $of($alloc(TypeEnter$DefaultConstructorHelper));
}

$JCTree$JCMethodDecl* TypeEnter$DefaultConstructorHelper::finalAdjustment($JCTree$JCMethodDecl* md) {
	return md;
}

$Class* TypeEnter$DefaultConstructorHelper::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$DefaultConstructorHelper, name, initialize, &_TypeEnter$DefaultConstructorHelper_ClassInfo_, allocate$TypeEnter$DefaultConstructorHelper);
	return class$;
}

$Class* TypeEnter$DefaultConstructorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com