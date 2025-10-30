#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyType.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef MDL
#undef MTH
#undef VAR

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ArrayAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy;
using $ClassReader$ClassAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassReader$EnumAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy;
using $ClassReader$ProxyType = ::com::sun::tools::javac::jvm::ClassReader$ProxyType;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$AnnotationDeproxy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$AnnotationDeproxy, this$0)},
	{"requestingOwner", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $field(ClassReader$AnnotationDeproxy, requestingOwner)},
	{"result", "Lcom/sun/tools/javac/code/Attribute;", nullptr, 0, $field(ClassReader$AnnotationDeproxy, result)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ClassReader$AnnotationDeproxy, type)},
	{}
};

$MethodInfo _ClassReader$AnnotationDeproxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $method(static_cast<void(ClassReader$AnnotationDeproxy::*)($ClassReader*,$Symbol$ClassSymbol*)>(&ClassReader$AnnotationDeproxy::init$))},
	{"deproxy", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Attribute;)Lcom/sun/tools/javac/code/Attribute;", nullptr, 0},
	{"deproxyCompound", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, 0},
	{"deproxyCompoundList", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", 0},
	{"findAccessMethod", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0},
	{"resolvePossibleProxyType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitArrayAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitClassAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitCompoundAnnotationProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)V", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitEnumAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$AnnotationDeproxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDeproxy", 0},
	{"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor", "com.sun.tools.javac.jvm.ClassReader", "ProxyVisitor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$AnnotationDeproxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy",
	"java.lang.Object",
	"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor",
	_ClassReader$AnnotationDeproxy_FieldInfo_,
	_ClassReader$AnnotationDeproxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$AnnotationDeproxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$AnnotationDeproxy($Class* clazz) {
	return $of($alloc(ClassReader$AnnotationDeproxy));
}

void ClassReader$AnnotationDeproxy::init$($ClassReader* this$0, $Symbol$ClassSymbol* owner) {
	$set(this, this$0, this$0);
	$set(this, requestingOwner, owner);
}

$List* ClassReader$AnnotationDeproxy::deproxyCompoundList($List* pl) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($List, l, pl);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			buf->append($(deproxyCompound($cast($ClassReader$CompoundAnnotationProxy, l->head))));
		}
	}
	return buf->toList();
}

$Attribute$Compound* ClassReader$AnnotationDeproxy::deproxyCompound($ClassReader$CompoundAnnotationProxy* a) {
	$useLocalCurrentObjectStackCache();
	$var($Type, annotationType, resolvePossibleProxyType($nc(a)->type));
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($List, l, $nc(a)->values);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($Symbol$MethodSymbol, meth, findAccessMethod(annotationType, $cast($Name, $nc(($cast($Pair, l->head)))->fst)));
			buf->append($$new($Pair, meth, $(deproxy($($nc($nc(meth)->type)->getReturnType()), $cast($Attribute, $nc(($cast($Pair, l->head)))->snd)))));
		}
	}
	return $new($Attribute$Compound, annotationType, $(buf->toList()));
}

$Symbol$MethodSymbol* ClassReader$AnnotationDeproxy::findAccessMethod($Type* container, $Name* name) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$CompletionFailure, failure, nullptr);
	try {
		{
			$var($Iterator, i$, $nc($($nc($($nc($nc(container)->tsym)->members()))->getSymbolsByName(name)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::MTH && $nc($($nc(sym->type)->getParameterTypes()))->length() == 0) {
						return $cast($Symbol$MethodSymbol, sym);
					}
				}
			}
		}
	} catch ($Symbol$CompletionFailure& ex) {
		$assign(failure, ex);
	}
	$var($JavaFileObject, prevSource, $nc(this->this$0->log)->useSource($nc(this->requestingOwner)->classfile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->this$0->lintClassfile) {
				if (failure == nullptr) {
					$nc(this->this$0->log)->warning($($CompilerProperties$Warnings::AnnotationMethodNotFound(container, name)));
				} else {
					$nc(this->this$0->log)->warning($($CompilerProperties$Warnings::AnnotationMethodNotFoundReason(container, name, $($nc(failure)->getDetailValue()))));
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->this$0->log)->useSource(prevSource);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($List, var$2, $List::nil());
	$var($Type, var$3, $nc(this->this$0->syms)->botType);
	$var($Type$MethodType, mt, $new($Type$MethodType, var$2, var$3, $($List::nil()), $nc(this->this$0->syms)->methodClass));
	return $new($Symbol$MethodSymbol, 1 | 1024, name, mt, $nc(container)->tsym);
}

$Attribute* ClassReader$AnnotationDeproxy::deproxy($Type* t, $Attribute* a) {
	$useLocalCurrentObjectStackCache();
	$var($Type, oldType, this->type);
	{
		$var($Throwable, var$0, nullptr);
		$var($Attribute, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, type, t);
			$nc(a)->accept(this);
			$assign(var$2, this->result);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, type, oldType);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ClassReader$AnnotationDeproxy::visitConstant($Attribute$Constant* value) {
	$set(this, result, value);
}

void ClassReader$AnnotationDeproxy::visitClass($Attribute$Class* clazz) {
	$set(this, result, clazz);
}

void ClassReader$AnnotationDeproxy::visitEnum($Attribute$Enum* e) {
	$throwNew($AssertionError);
}

void ClassReader$AnnotationDeproxy::visitCompound($Attribute$Compound* compound) {
	$throwNew($AssertionError);
}

void ClassReader$AnnotationDeproxy::visitArray($Attribute$Array* array) {
	$throwNew($AssertionError);
}

void ClassReader$AnnotationDeproxy::visitError($Attribute$Error* e) {
	$throwNew($AssertionError);
}

void ClassReader$AnnotationDeproxy::visitEnumAttributeProxy($ClassReader$EnumAttributeProxy* proxy) {
	$useLocalCurrentObjectStackCache();
	$var($Type, enumType, resolvePossibleProxyType($nc(proxy)->enumType));
	$var($Symbol$TypeSymbol, enumTypeSym, $nc(enumType)->tsym);
	$var($Symbol$VarSymbol, enumerator, nullptr);
	$var($Symbol$CompletionFailure, failure, nullptr);
	try {
		{
			$var($Iterator, i$, $nc($($nc($($nc(enumTypeSym)->members()))->getSymbolsByName($nc(proxy)->enumerator)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if ($nc(sym)->kind == $Kinds$Kind::VAR) {
						$assign(enumerator, $cast($Symbol$VarSymbol, sym));
						break;
					}
				}
			}
		}
	} catch ($Symbol$CompletionFailure& ex) {
		$assign(failure, ex);
	}
	if (enumerator == nullptr) {
		if (failure != nullptr) {
			$nc(this->this$0->log)->warning($($CompilerProperties$Warnings::UnknownEnumConstantReason(this->this$0->currentClassFile, static_cast<$Symbol*>(enumTypeSym), $nc(proxy)->enumerator, $(failure->getDiagnostic()))));
		} else {
			$nc(this->this$0->log)->warning($($CompilerProperties$Warnings::UnknownEnumConstant(this->this$0->currentClassFile, enumTypeSym, $nc(proxy)->enumerator)));
		}
		$set(this, result, $new($Attribute$Enum, $nc(enumTypeSym)->type, $$new($Symbol$VarSymbol, 0, $nc(proxy)->enumerator, $nc(this->this$0->syms)->botType, enumTypeSym)));
	} else {
		$set(this, result, $new($Attribute$Enum, $nc(enumTypeSym)->type, enumerator));
	}
}

void ClassReader$AnnotationDeproxy::visitClassAttributeProxy($ClassReader$ClassAttributeProxy* proxy) {
	$var($Type, classType, resolvePossibleProxyType($nc(proxy)->classType));
	$set(this, result, $new($Attribute$Class, this->this$0->types, classType));
}

void ClassReader$AnnotationDeproxy::visitArrayAttributeProxy($ClassReader$ArrayAttributeProxy* proxy) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc($nc(proxy)->values)->length();
	$var($AttributeArray, ats, $new($AttributeArray, length));
	$var($Type, elemtype, $nc(this->this$0->types)->elemtype(this->type));
	int32_t i = 0;
	{
		$var($List, p, proxy->values);
		for (; $nc(p)->nonEmpty(); $assign(p, $nc(p)->tail)) {
			ats->set(i++, $(deproxy(elemtype, $cast($Attribute, p->head))));
		}
	}
	$set(this, result, $new($Attribute$Array, this->type, ats));
}

void ClassReader$AnnotationDeproxy::visitCompoundAnnotationProxy($ClassReader$CompoundAnnotationProxy* proxy) {
	$set(this, result, deproxyCompound(proxy));
}

$Type* ClassReader$AnnotationDeproxy::resolvePossibleProxyType($Type* t) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ClassReader$ProxyType, proxyType, nullptr);
		bool var$0 = $instanceOf($ClassReader$ProxyType, t);
		if (var$0) {
			$assign(proxyType, $cast($ClassReader$ProxyType, t));
			var$0 = true;
		}
		if (var$0) {
			$init($Kinds$Kind);
			$Assert::check($nc($nc(this->requestingOwner)->owner)->kind == $Kinds$Kind::MDL);
			$var($Symbol$ModuleSymbol, prevCurrentModule, this->this$0->currentModule);
			$set(this->this$0, currentModule, $cast($Symbol$ModuleSymbol, $nc(this->requestingOwner)->owner));
			{
				$var($Throwable, var$1, nullptr);
				$var($Type, var$3, nullptr);
				bool return$2 = false;
				try {
					$assign(var$3, $nc(proxyType)->resolve());
					return$2 = true;
					goto $finally;
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} $finally: {
					$set(this->this$0, currentModule, prevCurrentModule);
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
				if (return$2) {
					return var$3;
				}
			}
		} else {
			return t;
		}
	}
}

ClassReader$AnnotationDeproxy::ClassReader$AnnotationDeproxy() {
}

$Class* ClassReader$AnnotationDeproxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$AnnotationDeproxy, name, initialize, &_ClassReader$AnnotationDeproxy_ClassInfo_, allocate$ClassReader$AnnotationDeproxy);
	return class$;
}

$Class* ClassReader$AnnotationDeproxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com