#include <com/sun/tools/javac/comp/Attr$IdentAttributer.h>

#include <com/sun/source/tree/CaseLabelTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/IdentifierTree.h>
#include <com/sun/source/tree/MemberSelectTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/SimpleTreeVisitor.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef ABSENT_TYP
#undef ERR
#undef HIDDEN
#undef PCK
#undef TYP_PCK

using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $IdentifierTree = ::com::sun::source::tree::IdentifierTree;
using $MemberSelectTree = ::com::sun::source::tree::MemberSelectTree;
using $Tree = ::com::sun::source::tree::Tree;
using $SimpleTreeVisitor = ::com::sun::source::util::SimpleTreeVisitor;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$IdentAttributer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$IdentAttributer, this$0)},
	{}
};

$MethodInfo _Attr$IdentAttributer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, $PRIVATE, $method(static_cast<void(Attr$IdentAttributer::*)($Attr*)>(&Attr$IdentAttributer::init$))},
	{"visitIdentifier", "(Lcom/sun/source/tree/IdentifierTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/source/tree/IdentifierTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{"visitIdentifier", "(Lcom/sun/source/tree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMemberSelect", "(Lcom/sun/source/tree/MemberSelectTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/source/tree/MemberSelectTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC},
	{"visitMemberSelect", "(Lcom/sun/source/tree/MemberSelectTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Attr$IdentAttributer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$IdentAttributer", "com.sun.tools.javac.comp.Attr", "IdentAttributer", $PRIVATE},
	{}
};

$ClassInfo _Attr$IdentAttributer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$IdentAttributer",
	"com.sun.source.util.SimpleTreeVisitor",
	nullptr,
	_Attr$IdentAttributer_FieldInfo_,
	_Attr$IdentAttributer_MethodInfo_,
	"Lcom/sun/source/util/SimpleTreeVisitor<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
	nullptr,
	_Attr$IdentAttributer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$IdentAttributer($Class* clazz) {
	return $of($alloc(Attr$IdentAttributer));
}

void Attr$IdentAttributer::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$SimpleTreeVisitor::init$();
}

$Symbol* Attr$IdentAttributer::visitMemberSelect($MemberSelectTree* node, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, site, $cast($Symbol, visit($(static_cast<$Tree*>($nc(node)->getExpression())), $of(env))));
	$init($Kinds$Kind);
	if ($nc(site)->kind == $Kinds$Kind::ERR || $nc(site)->kind == $Kinds$Kind::ABSENT_TYP || $nc(site)->kind == $Kinds$Kind::HIDDEN) {
		return site;
	}
	$var($Name, name, $cast($Name, $nc(node)->getIdentifier()));
	if ($nc(site)->kind == $Kinds$Kind::PCK) {
		$set($nc($nc(env)->toplevel), packge, $cast($Symbol$PackageSymbol, site));
		$init($Kinds$KindSelector);
		return $nc(this->this$0->rs)->findIdentInPackage(nullptr, env, $cast($Symbol$TypeSymbol, site), name, $Kinds$KindSelector::TYP_PCK);
	} else {
		$set($nc($nc(env)->enclClass), sym, $cast($Symbol$ClassSymbol, site));
		return $nc(this->this$0->rs)->findMemberType(env, $($cast($Type, site->asType())), name, $cast($Symbol$TypeSymbol, site));
	}
}

$Symbol* Attr$IdentAttributer::visitIdentifier($IdentifierTree* node, $Env* env) {
	$init($Kinds$KindSelector);
	return $nc(this->this$0->rs)->findIdent(nullptr, env, $cast($Name, $($nc(node)->getName())), $Kinds$KindSelector::TYP_PCK);
}

$Object* Attr$IdentAttributer::visitIdentifier($IdentifierTree* node, Object$* env) {
	return $of(this->visitIdentifier(node, $cast($Env, env)));
}

$Object* Attr$IdentAttributer::visitMemberSelect($MemberSelectTree* node, Object$* env) {
	return $of(this->visitMemberSelect(node, $cast($Env, env)));
}

Attr$IdentAttributer::Attr$IdentAttributer() {
}

$Class* Attr$IdentAttributer::load$($String* name, bool initialize) {
	$loadClass(Attr$IdentAttributer, name, initialize, &_Attr$IdentAttributer_ClassInfo_, allocate$Attr$IdentAttributer);
	return class$;
}

$Class* Attr$IdentAttributer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com