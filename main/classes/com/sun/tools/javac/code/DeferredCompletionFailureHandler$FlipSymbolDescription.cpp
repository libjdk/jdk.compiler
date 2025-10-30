#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredCompletionFailureHandler$FlipSymbolDescription_FieldInfo_[] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, sym)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, type)},
	{"kind", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, kind)},
	{"members", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, members)},
	{"completer", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC, $field(DeferredCompletionFailureHandler$FlipSymbolDescription, completer)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler$FlipSymbolDescription_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredCompletionFailureHandler$FlipSymbolDescription::*)($Symbol$ClassSymbol*,$Symbol$Completer*)>(&DeferredCompletionFailureHandler$FlipSymbolDescription::init$))},
	{"flip", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredCompletionFailureHandler$FlipSymbolDescription_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "FlipSymbolDescription", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$FlipSymbolDescription_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription",
	"java.lang.Object",
	nullptr,
	_DeferredCompletionFailureHandler$FlipSymbolDescription_FieldInfo_,
	_DeferredCompletionFailureHandler$FlipSymbolDescription_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredCompletionFailureHandler$FlipSymbolDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$FlipSymbolDescription($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$FlipSymbolDescription));
}

void DeferredCompletionFailureHandler$FlipSymbolDescription::init$($Symbol$ClassSymbol* sym, $Symbol$Completer* completer) {
	$set(this, sym, sym);
	$set(this, type, $nc(sym)->type);
	$set(this, kind, sym->kind);
	$set(this, members, nullptr);
	$set(this, completer, completer);
}

void DeferredCompletionFailureHandler$FlipSymbolDescription::flip() {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevType, $nc(this->sym)->type);
	$set($nc(this->sym), type, this->type);
	$set(this, type, prevType);
	$Kinds$Kind* prevKind = $nc(this->sym)->kind;
	$set($nc(this->sym), kind, this->kind);
	$set(this, kind, prevKind);
	$var($Symbol$Completer, prevCompleter, $nc(this->sym)->completer);
	$set($nc(this->sym), completer, this->completer);
	$set(this, completer, prevCompleter);
	$var($Scope$WriteableScope, prevMembers, $nc(this->sym)->members_field);
	$set($nc(this->sym), members_field, this->members);
	$set(this, members, prevMembers);
}

DeferredCompletionFailureHandler$FlipSymbolDescription::DeferredCompletionFailureHandler$FlipSymbolDescription() {
}

$Class* DeferredCompletionFailureHandler$FlipSymbolDescription::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$FlipSymbolDescription, name, initialize, &_DeferredCompletionFailureHandler$FlipSymbolDescription_ClassInfo_, allocate$DeferredCompletionFailureHandler$FlipSymbolDescription);
	return class$;
}

$Class* DeferredCompletionFailureHandler$FlipSymbolDescription::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com