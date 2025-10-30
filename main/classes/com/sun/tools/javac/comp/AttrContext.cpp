#include <com/sun/tools/javac/comp/AttrContext.h>

#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <jcpp.h>

#undef FULL

using $Lint = ::com::sun::tools::javac::code::Lint;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _AttrContext_FieldInfo_[] = {
	{"scope", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0, $field(AttrContext, scope)},
	{"staticLevel", "I", nullptr, 0, $field(AttrContext, staticLevel)},
	{"isSelfCall", "Z", nullptr, 0, $field(AttrContext, isSelfCall)},
	{"selectSuper", "Z", nullptr, 0, $field(AttrContext, selectSuper)},
	{"isSerializable", "Z", nullptr, 0, $field(AttrContext, isSerializable)},
	{"isSerializableLambda", "Z", nullptr, 0, $field(AttrContext, isSerializableLambda)},
	{"isLambda", "Z", nullptr, 0, $field(AttrContext, isLambda)},
	{"attributionMode", "Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, 0, $field(AttrContext, attributionMode)},
	{"isAnonymousDiamond", "Z", nullptr, 0, $field(AttrContext, isAnonymousDiamond)},
	{"isNewClass", "Z", nullptr, 0, $field(AttrContext, isNewClass)},
	{"visitingServiceImplementation", "Z", nullptr, 0, $field(AttrContext, visitingServiceImplementation)},
	{"pendingResolutionPhase", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, 0, $field(AttrContext, pendingResolutionPhase)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, 0, $field(AttrContext, lint)},
	{"enclVar", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(AttrContext, enclVar)},
	{"returnResult", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(AttrContext, returnResult)},
	{"yieldResult", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(AttrContext, yieldResult)},
	{"defaultSuperCallSite", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(AttrContext, defaultSuperCallSite)},
	{"preferredTreeForDiagnostics", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(AttrContext, preferredTreeForDiagnostics)},
	{}
};

$MethodInfo _AttrContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttrContext::*)()>(&AttrContext::init$))},
	{"dup", "(Lcom/sun/tools/javac/code/Scope$WriteableScope;)Lcom/sun/tools/javac/comp/AttrContext;", nullptr, 0},
	{"dup", "()Lcom/sun/tools/javac/comp/AttrContext;", nullptr, 0},
	{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"lastResolveVarargs", "()Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttrContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.AttrContext",
	"java.lang.Object",
	nullptr,
	_AttrContext_FieldInfo_,
	_AttrContext_MethodInfo_
};

$Object* allocate$AttrContext($Class* clazz) {
	return $of($alloc(AttrContext));
}

void AttrContext::init$() {
	$set(this, scope, nullptr);
	this->staticLevel = 0;
	this->isSelfCall = false;
	this->selectSuper = false;
	this->isSerializable = false;
	this->isSerializableLambda = false;
	this->isLambda = false;
	$init($DeferredAttr$AttributionMode);
	$set(this, attributionMode, $DeferredAttr$AttributionMode::FULL);
	this->isAnonymousDiamond = false;
	this->isNewClass = false;
	this->visitingServiceImplementation = false;
	$set(this, pendingResolutionPhase, nullptr);
	$set(this, enclVar, nullptr);
	$set(this, returnResult, nullptr);
	$set(this, yieldResult, nullptr);
	$set(this, defaultSuperCallSite, nullptr);
}

AttrContext* AttrContext::dup($Scope$WriteableScope* scope) {
	$var(AttrContext, info, $new(AttrContext));
	$set(info, scope, scope);
	info->staticLevel = this->staticLevel;
	info->isSelfCall = this->isSelfCall;
	info->selectSuper = this->selectSuper;
	$set(info, pendingResolutionPhase, this->pendingResolutionPhase);
	$set(info, lint, this->lint);
	$set(info, enclVar, this->enclVar);
	$set(info, returnResult, this->returnResult);
	$set(info, yieldResult, this->yieldResult);
	$set(info, defaultSuperCallSite, this->defaultSuperCallSite);
	info->isSerializable = this->isSerializable;
	info->isLambda = this->isLambda;
	info->isSerializableLambda = this->isSerializableLambda;
	$set(info, attributionMode, this->attributionMode);
	info->isAnonymousDiamond = this->isAnonymousDiamond;
	info->isNewClass = this->isNewClass;
	$set(info, preferredTreeForDiagnostics, this->preferredTreeForDiagnostics);
	info->visitingServiceImplementation = this->visitingServiceImplementation;
	return info;
}

AttrContext* AttrContext::dup() {
	return dup(this->scope);
}

$Iterable* AttrContext::getLocalElements() {
	if (this->scope == nullptr) {
		return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
	}
	return $nc(this->scope)->getSymbols();
}

bool AttrContext::lastResolveVarargs() {
	return this->pendingResolutionPhase != nullptr && $nc(this->pendingResolutionPhase)->isVarargsRequired();
}

$String* AttrContext::toString() {
	return $str({"AttrContext["_s, $($nc($of(this->scope))->toString()), "]"_s});
}

AttrContext::AttrContext() {
}

$Class* AttrContext::load$($String* name, bool initialize) {
	$loadClass(AttrContext, name, initialize, &_AttrContext_ClassInfo_, allocate$AttrContext);
	return class$;
}

$Class* AttrContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com