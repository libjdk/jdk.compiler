#include <com/sun/tools/javac/comp/Attr$12.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$12_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$12, this$0)},
	{"val$pkg", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$12, val$pkg)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Attr$12, packge)},
	{}
};

$MethodInfo _Attr$12_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Attr$12::*)($Attr*,$Symbol*)>(&Attr$12::init$))},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$12_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"setPackageSymbols",
	"(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol;)V"
};

$InnerClassInfo _Attr$12_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Attr$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$12",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Attr$12_FieldInfo_,
	_Attr$12_MethodInfo_,
	nullptr,
	&_Attr$12_EnclosingMethodInfo_,
	_Attr$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$12($Class* clazz) {
	return $of($alloc(Attr$12));
}

void Attr$12::init$($Attr* this$0, $Symbol* val$pkg) {
	$set(this, this$0, this$0);
	$set(this, val$pkg, val$pkg);
	$TreeScanner::init$();
	$set(this, packge, this->val$pkg);
}

void Attr$12::visitIdent($JCTree$JCIdent* that) {
	$set($nc(that), sym, this->packge);
}

void Attr$12::visitSelect($JCTree$JCFieldAccess* that) {
	$set($nc(that), sym, this->packge);
	$set(this, packge, $nc(this->packge)->owner);
	$TreeScanner::visitSelect(that);
}

Attr$12::Attr$12() {
}

$Class* Attr$12::load$($String* name, bool initialize) {
	$loadClass(Attr$12, name, initialize, &_Attr$12_ClassInfo_, allocate$Attr$12);
	return class$;
}

$Class* Attr$12::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com